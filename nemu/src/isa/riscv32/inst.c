/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_J, TYPE_B, TYPE_R,
	TYPE_N, // none
};
//SEXT 用于进行有符号拓展，BITS 相当于位域
#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)//用于处理高位立即数，用于地址计算所以需要先进位
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = SEXT((BITS(i, 31, 31) << 19 | BITS(i, 19, 12) << 11 | BITS(i, 20, 20) << 10 | BITS(i, 30, 21)) << 1, 21); } while(0) 

#define immB() do { \
    *imm = SEXT( \
        (BITS(i, 31, 31) << 12) | \
        (BITS(i, 7, 7) << 11) | \
        (BITS(i, 30, 25) << 5) | \
        (BITS(i, 11, 8) << 1), \
        12 \
	); \
	/*if(BITS(i,7,7)!=BITS(i,31,31))printf("the 7bit is : %d\tthe 12bit is :%d\n\n\n\n\n\n\n\n\n",(int)BITS(i,7,7),(int)BITS(i,31,31));*/\
    /*printf("imm=%08x\n", (unsigned int)*imm); */\
} while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) { 
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
		case TYPE_J:									 immJ(); break;
		case TYPE_R: src1R(); src2R();				 break;
		case TYPE_B: src1R(); src2R();immB(); break; 
  }
}

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
    decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
    __VA_ARGS__; \
}

#define TCM(src) (int)(-(~src))+1


INSTPAT_START();
// I-type 指令
INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi, I, R(rd) = src1 + imm); // 无需修改
INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu, I, R(rd) = Mr(src1 + imm, 1)); // 无需修改
INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr, I, s->dnpc = (src1 + imm)&~1; R(rd) = s->pc+4); // 无需修改
INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw, I, R(rd) = SEXT(Mr(src1 + imm, 4),32)); // 无需修改

// 原代码：R(rd) = (src1 <imm) ? 1 : 0
// 修改：添加uint32_t类型转换确保无符号比较
INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu, I, R(rd) = ((uint32_t)src1 < (uint32_t)imm) ? 1 : 0); 

INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori, I, R(rd) = src1 ^ imm); // 无需修改

// 原代码：R(rd) = (BITS(imm, 5, 5) == 0) ? src1 >> imm : R(rd)
// 修改：添加uint32_t确保逻辑右移，使用SEXT处理移位量
INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli, I, R(rd) = (uint32_t)src1 >> SEXT(imm, 5)); 

INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi, I, R(rd) = src1 & imm); // 无需修改

// 原代码：R(rd) = ((int32_t)src1  >> SEXT(imm, 5))
// 修改：无需修改，原实现正确
INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai, I, R(rd) = (int32_t)src1 >> SEXT(imm, 5));

// 原代码：R(rd) = (BITS(imm,5,5)==0) ? src1 <<imm : src1
// 修改：简化实现，直接使用SEXT处理移位量
INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli, I, R(rd) = src1 << SEXT(imm,5)); 

// B-type 指令
// 原代码：s->dnpc = (src1 >= src2) ? s->pc + imm : s->dnpc
// 修改：添加int32_t转换确保有符号比较
INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge, B, s->dnpc = ((int32_t)src1 >= (int32_t)src2) ? s->pc + imm : s->dnpc);

// 原代码：s->dnpc = (src1 < src2) ? s->pc + imm : s->dnpc
// 修改：添加uint32_t转换确保无符号比较
INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu, B, s->dnpc = ((uint32_t)src1 < (uint32_t)src2) ? s->pc + imm : s->dnpc);

// R-type 指令
// 原代码：R(rd) = (src1 < src2) ? 1 : 0
// 修改：添加uint32_t转换确保无符号比较
INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu, R, R(rd) = ((uint32_t)src1 < (uint32_t)src2) ? 1 : 0);

// 原代码：R(rd) = src1 % src2
// 修改：添加除零检查和uint32_t转换
INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu, R, R(rd) = src2 != 0 ? (uint32_t)src1 % (uint32_t)src2 : src1);

// 原代码：R(rd) = src1 / src2
// 修改：添加除零检查和uint32_t转换
INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu, R, R(rd) = src2 != 0 ? (uint32_t)src1 / (uint32_t)src2 : -1);

// 原代码：uint32_t temp = 0; temp = SEXT(BITS(src2, 4, 0),5); R(rd) = src1 >> temp
// 修改：简化实现，添加uint32_t确保逻辑右移
INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl, R, R(rd) = (uint32_t)src1 >> SEXT(src2, 5));
INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
