#include "Vysyx_24090015_top.h"
#include "verilated.h"
#include <stdio.h>
#include <verilated_vcd_c.h>  //启动波追踪
//#include <cassert>
//#include <getopt.h> 
//#include <memory/paddr.h>
//#include <nvboard.h>

//接入nvboard
//void nvboard_band_all_pins(Vverilog *top);

uint32_t *vaddr=NULL;
char *img_file=NULL;
static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
	if(!fp){
  printf("Can not open '%s'\n", img_file);
	exit(-1);
	}

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);
	

  vaddr =(uint32_t*)malloc(size);
	if(vaddr=NULL){
	printf("Memory allocation faile\n");
	exit(-1);
	}

  fseek(fp, 0, SEEK_SET);
  int ret = fread(vaddr, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
/*
static int parse_args(int argc, char *argv[]) {
  //for(int i=0;i<100;i++){
		
	//printf("this is this : %s\n",*(argv+i));
	//}
	const struct option table[] = {
//    {"batch"    , no_argument      , NULL, 'b'},
//    {"log"      , required_argument, NULL, 'l'},
//    {"diff"     , required_argument, NULL, 'd'},
//    {"port"     , required_argument, NULL, 'p'},
//    {"help"     , no_argument      , NULL, 'h'},
		//{"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, " ", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
			//case 'e': if(optarg=="-h")
      case 1:
							
							char temp[256]={0};
							char *suffix;
							strcpy(temp,optarg);
							suffix=strchr(temp,'.');
							suffix++;
							img_file=(strcmp(suffix,"bin")==0)?optarg:img_file;
							elf_file=(strcmp(suffix,"elf")==0)?optarg:elf_file;
						  //printf("what is suffix : %s\n",suffix);
						  //printf("what is temp : %s\n",temp);
						  //printf("what is optarg : %s\n",optarg);
						  printf("what is img_file : %s\n",img_file);
						  printf("what is elf_file : %s\n",elf_file);
							if(strcmp(suffix,"elf")==0){	
              ehdr_globle=parse_elf(elf_file);
						  shdr_globle=parse_shdr(ehdr_globle,elf_file);
						  //find_shdr_type(ehdr_globle,shdr_globle);
						  str_globle =parse_strtab(shdr_globle,elf_file);
							sym_globle =parse_sym(shdr_globle,elf_file);
							
						//	printf("size of sym struct : %ld\n\n\n\n",sizeof(Elf32_Sym) );
							
								img_file = optarg; return 0;
							break;

      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
*/
int main(int argc,char **argv){
	VerilatedContext* Contextp = new VerilatedContext;
	Contextp->commandArgs(argc,argv);//初始化verilator
	
	
	Verilated::traceEverOn(true);//启动追踪
	
	Vysyx_24090015_top * top=new Vysyx_24090015_top;//创建top实体
														 
	VerilatedVcdC *tfp=new VerilatedVcdC;//创建VCD追踪文件对象
  	top->trace(tfp,99);
	tfp->open("wave.vcd");
	
	//nvboard接入引脚并且初始化
	//nvboard_bind_all_pins(top);
	//nvboard_init();
	
	std::srand(time(NULL));
	int simTime=0;
	
	unsigned int inst[11] = {
    0xffc10113,  // addi sp, sp, -4
    0x00278713,  // addi a4, a5, 2
    0x00678793,  // addi a5, a5, 6
    0xfff78793,  // addi a5, a5, -1
    0x74248713,  // addi a4, s1, 1858
    0x4c850513,  // addi a0, a0, 1224
    0xfe010113,  // addi sp, sp, -32
    0xfff68793,  // addi a5, a3, -1
    0x00170713,  // addi a4, a4, 1
    0x02010113,   // addi sp, sp, 32
    0x00100073 //ebreak
};
   //getopt_lon(argc, argv, " ", table, NULL);
	 argv++;
   img_file=*argv;
	 printf("\n\n\n\n\n\n\nimg_file : %s\n\n\n\n\n",img_file);
	//parse_args(argc,argv);
	//long img_size=load_img();
  unsigned int clk=0;
	while (!top->flag){
		clk = clk ^ 1;
		top->clk=clk;
		if(clk) top->inst=inst[top->pc];
	Contextp->timeInc(1);
	top ->eval();
	 tfp->dump(Contextp->time());  // dump 波形数据
	 
	 //nvboard 更新
	 //nvboard_update();
	 
	 simTime++;
	}
	tfp->close(); 
	delete tfp;
	delete top;
	delete Contextp;
	return 0;
}
