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

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static void ehdr_printf(Elf32_Ehdr *ehdr){			
		printf("ELF Header:\n");
		printf("  Magic:   ");
		for  (int i = 0; i < EI_NIDENT; i++) {
				printf("%02x ", ehdr->e_ident[i]);
											    }
		printf("\n");

		printf("  Type:                             0x%x\n", ehdr->e_type);
	  printf("  Machine:                          0x%x\n", ehdr->e_machine);
		printf("  Version:                          0x%x\n", ehdr->e_version);
		printf("  Entry point address:              0x%x\n", ehdr->e_entry);
		printf("  Start of program headers:         0x%x\n", ehdr->e_phoff);
		printf("  Start of section headers:         0x%x\n", ehdr->e_shoff);
    printf("  Flags:                            0x%x\n", ehdr->e_flags);
		printf("  Size of this header:              %u\n", ehdr->e_ehsize);
		printf("  Size of program headers:          %u\n", ehdr->e_phentsize);
		printf("  Number of program headers:        %u\n", ehdr->e_phnum);
		printf("  Size of section headers:          %u\n", ehdr->e_shentsize);
		printf("  Number of section headers:        %u\n", ehdr->e_shnum);
		printf("  Section header string table index: %u\n", ehdr->e_shstrndx);
}


static Elf32_Ehdr* parse_elf(char *elf_file){
	static Elf32_Ehdr ehdr;                //generate ELF header
  FILE *fp=fopen(elf_file,"rb");
  Assert(fp, "Can not open '%s'", elf_file);

	
	size_t read_size = fread(&ehdr, 1, sizeof(Elf32_Ehdr), fp);
    if  (read_size != sizeof(Elf32_Ehdr)) {
			        fprintf(stderr, "Failed to read ELF header\n");
							        fclose(fp);
	
											return 0;
		}
		fclose(fp);
		ehdr_printf(&ehdr);
		return &ehdr;
}

void shdr_printf(Elf32_Shdr (*shdr)[20], int sections_num) {
    if (!shdr) {
        printf("Invalid section header\n");
        return;
    }
    
    printf("节头：\n");  // 根据readelf的输出添加标题
    printf("  [Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al\n");

    for (int i = 0; i < sections_num; i++) {
        printf("[%2d] %-18s %-15s 0x%08x 0x%06x 0x%06x %02x %4s %2d %3d %2d\n", 
            i, // section index
            shdr[i]->sh_name == 0 ? "NULL" : "??", // 如果sh_name为0，表示没有名称，类似readelf的表现
            shdr[i]->sh_type == 0 ? "NULL" : "PROGBITS", // 这里只是一个例子，具体可以通过sh_type类型来转换
            shdr[i]->sh_addr, 
            shdr[i]->sh_offset,
            shdr[i]->sh_size,
            shdr[i]->sh_entsize,
            (shdr[i]->sh_flags & SHF_ALLOC) ? "A" : " ", // 如果有SHF_ALLOC标志就显示A
            shdr[i]->sh_link,
            shdr[i]->sh_info,
            shdr[i]->sh_addralign
        );
    }
}


static Elf32_Shdr (*parse_shdr(Elf32_Ehdr *ehdr,char *elf_file))[20]{
			static Elf32_Shdr shdr[20];
			FILE *fp=fopen(elf_file,"rb");
      Assert(fp, "Can not open '%s'", elf_file);


			size_t size_shdr=ehdr->e_shentsize;
			size_t start_addr_shdr=ehdr->e_shoff;
			size_t sections_num=ehdr->e_shnum;


			fseek(fp,start_addr_shdr,SEEK_SET);
			int ret=fread(shdr,sizeof(Elf32_Shdr),sections_num,fp);
			if (ret!=sections_num){
			printf("Faild to read section header\n");	
			printf("imformation about ret : %d\n",ret);	
			printf("imformation about size_shdr : %lu\n",size_shdr);	
			printf("imformation about start_addr : %08lx\n",start_addr_shdr);	
			printf("imformation about sections_num : %lu\n",sections_num);	
			fclose(fp);
			return 0;
			}

			fclose(fp);
			shdr_printf(&shdr,sections_num);
			return &shdr;
}
//static Elf32_Sym* sym(Elf32_Ehdr *ehdr){
//				static Elf32_sym sym;
//				long long 	
//}
		
static int parse_args(int argc, char *argv[]) {
  //for(int i=0;i<100;i++){
		
	//printf("this is this : %s\n",*(argv+i));
	//}
	const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
		{"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
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
						  //printf("what is img_file : %s\n",img_file);
						  //printf("what is elf_file : %s\n",elf_file);
							if(elf_file){	
              Elf32_Ehdr *ehdr=parse_elf(elf_file);
							parse_shdr(ehdr,elf_file);
							}
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

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);
  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

#ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv,
      MUXDEF(CONFIG_RV64,      "riscv64",
                               "riscv32"),
                               "bad"))) "-pc-linux-gnu"
  ));
#endif

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
