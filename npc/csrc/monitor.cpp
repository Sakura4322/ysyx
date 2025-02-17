#include "common.h"
#include "my_share.h"


uint8_t *vaddr=NULL;
char *img_file=NULL;
char *log_file=NULL;
char *elf_file=NULL;
FILE *log_fp=NULL;
char *diff_so_file =NULL;
bool diff_on;
int difftest_port=6666;

long load_img() {
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
	

  vaddr =(uint8_t*)malloc(CONFIG_MSIZE);
  memset(vaddr,rand(),CONFIG_MSIZE);
	if(vaddr==NULL){
	printf("Memory allocation faile\n");
	exit(-1);
	}

  fseek(fp, 0, SEEK_SET);
  int ret = fread(vaddr, size, 1, fp);
  if(ret!=1){
	printf("load_img : Read from %s error\n",img_file);	
	}

  fclose(fp);
  printf("load_img : Read form %s success\n",img_file);
  return size;
}


// Elf32_Ehdr *ehdr_globle;
// Elf32_Shdr *shdr_globle;
// Elf32_Sym  *sym_globle;
// char *str_globle;
int sym_globle_indx;
int str_globle_indx;


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


Elf32_Ehdr* parse_elf(char *elf_file){
	static Elf32_Ehdr ehdr;                //generate ELF header
  FILE *fp=fopen(elf_file,"rb");
  //Assert(fp, "Can not open '%s'", elf_file);
  if(fp==NULL){
  	printf("\n\n\n\nCan not open '%s'\n\n\n\n", elf_file);
  	return 0;
  	}

	
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


// 修改shdr_printf函数的打印格式，使其更接近readelf的输出
void shdr_printf(Elf32_Shdr *shdr, int sections_num) {
    if (!shdr) {
        printf("Invalid section header\n");
        return;
    }

    printf("Section Headers:\n");
    printf("[Nr] Name               Type            Addr       Off      Size     ES  Flg  Lk Inf Al\n");

    for (int i = 0; i < sections_num; i++) {
        // 获取节名称
        char *section_name = const_cast<char*>((shdr[i].sh_name == 0) ? "NULL" : "<section_name>"); // 根据名字表获取实际名称
        
        // 通过sh_type转换类型输出
        char *sh_type_str = "<unknown>";
        switch (shdr[i].sh_type) {
            case SHT_PROGBITS: sh_type_str = "PROGBITS"; break;
            case SHT_SYMTAB:   sym_globle_indx=i;
															 printf("Found .symtab section at index %d\n", i);
															 sh_type_str = "SYMTAB"; break;
						case SHT_STRTAB:   str_globle_indx=(str_globle_indx==0)?i:str_globle_indx;
			printf("Found .strgloble  section at index %d\n", str_globle_indx);
															 sh_type_str = "STRTAB"; break;
            case SHT_RELA:     sh_type_str = "RELA"; break;
            // 添加其他类型的处理
            default: break;
        }

        // 打印节头信息
        printf("[%2d] %-18s %-15s 0x%08x 0x%06x 0x%06x %02x %4s %2d %3d %2d\n",
            i, // section index
            section_name, // 获取节名称
            sh_type_str,  // 获取节类型
            shdr[i].sh_addr,
            shdr[i].sh_offset,
            shdr[i].sh_size,
            shdr[i].sh_entsize,
            (shdr[i].sh_flags & SHF_ALLOC) ? "A" : " ", // 检查是否有SHF_ALLOC标志
            shdr[i].sh_link,
            shdr[i].sh_info,
            shdr[i].sh_addralign
        );
    }
}


Elf32_Shdr *parse_shdr(Elf32_Ehdr *ehdr, char *elf_file) {
    FILE *fp = fopen(elf_file, "rb");
    //Assert(fp, "Cannot open '%s'", elf_file);
      if(fp==NULL){
  	printf("\n\n\n\nCan not open '%s'\n\n\n\n", elf_file);
  	return 0;
  	}

    size_t size_shdr = ehdr->e_shentsize;
    size_t start_addr_shdr = ehdr->e_shoff;
    size_t sections_num = ehdr->e_shnum;

    static Elf32_Shdr *shdr;
		shdr=(Elf32_Shdr *)malloc(size_shdr*sections_num);
    // 移动到节头表的起始位置
    fseek(fp, start_addr_shdr, SEEK_SET);
    printf("The position of fp: %08lx\n", ftell(fp));

    // 读取节头表
    int ret = fread(shdr, sizeof(Elf32_Shdr), sections_num, fp);
    if (ret != sections_num) {
        printf("Failed to read section header\n");
        printf("Information about ret: %d\n", ret);
        printf("Information about size_shdr: %lu\n", size_shdr);
        printf("Information about start_addr: %08lx\n", start_addr_shdr);
        printf("Information about sections_num: %lu\n", sections_num);
        fclose(fp);
        return 0;
    }

    fclose(fp);
    shdr_printf(shdr, sections_num);
    return shdr;
}


int cnt_globle;
void strtab_printf(char *strlab,int cnt_globle){
	for(int i=0;i<cnt_globle;i++){
	printf("%s\n",strlab);	
	strlab+=(strlen(strlab)+1);
	}
}
char *parse_strtab(Elf32_Shdr *shdr,char *elf_file){
				int sym_num=shdr[sym_globle_indx].sh_size/sizeof(Elf32_Sym);
				//static char **string;

				FILE *fp=fopen(elf_file,"rb");
        //Assert(fp, "Cannot open '%s'", elf_file);
        if(fp==NULL){
  	printf("\n\n\n\nCan not open '%s'\n\n\n\n", elf_file);
  	return 0;
  	}

				size_t strtab_size=shdr[str_globle_indx].sh_size;
			  size_t strtab_addr=shdr[str_globle_indx].sh_offset;	

		
			//char single_word[128][128]={0};
			static char *string_word;
			string_word=(char *)malloc(strtab_size);
			for(int i=0;i<strtab_size;i++){
				fseek(fp,strtab_addr+i,SEEK_SET);
			  char temp_char;
				int ret=fread(&temp_char,1,1,fp);
				if(ret!=1){
				printf("CANNOT READING IN STRTAB\n\n\n\n");	
				}
				/*
				if (string_word[i] == NULL) {
				printf("ERRO string_word outside\n\n\n\n\n\n");				
 				}
				*/
				string_word[i]=temp_char;

				if(temp_char==0){
					//string[cnt]=single_word[cnt];
					cnt_globle++;
				}
			}	
			//cnt_globle--;
			printf("There are %d symbols\n",cnt_globle);
			//string=malloc(cnt_globle*sizeof(char *));
			/*string_word++;
			for(int i=0;i<cnt_globle;i++){
			string[i]=string_word;
		  string_word+=(strlen(string_word)+1);	
			}
			*/
			strtab_printf(string_word,cnt_globle);
			printf("sym_num : %d\n\n\n\n\n",sym_num);
return string_word;
}

void sym_printf(Elf32_Sym *sym, int sym_num) {
    // Output header for the symbol table
    printf("Symbol table '.symtab' contains %d entries:\n", sym_num);
    printf("   Num:    Value  Size Type    Bind   Vis      Ndx Name\n");

    // Iterate through all symbols and print their details
    for (int i = 0; i < sym_num; i++) {
        // Assuming we are dealing with valid data from the symbol table
        // Print symbol information in the desired format
        printf("     %d: %08x     %d %s %s %s     %d %d\n",
               i,
               sym[i].st_value,
               sym[i].st_size,
             (ELF32_ST_TYPE(sym[i].st_info) == STT_FUNC) ? "FUNC" : "OTHER_TYPE",
             (ELF32_ST_BIND(sym[i].st_info) == STB_LOCAL) ? "LOCAL" : "GLOBAL",  // Example Binding
               //sym[i].st_info,  // Example Type
               //sym[i].st_info,
               (ELF32_ST_VISIBILITY(sym[i].st_other) == STV_DEFAULT) ? "DEFAULT" : "OTHER_VISIBILITY",  // Example Visibility
               sym[i].st_shndx,  // Section Index
               sym[i].st_name  // Placeholder for the symbol's name, you may need to resolve this from the string table
        );
    }
}



Elf32_Sym* parse_sym(Elf32_Shdr *shdr,char *elf){
				size_t sym_size = shdr[sym_globle_indx].sh_size;
				size_t sym_addr = shdr[sym_globle_indx].sh_offset;
				int    sym_num  = sym_size/sizeof(Elf32_Sym);
				
				
				static Elf32_Sym *sym;
				sym=(Elf32_Sym *)malloc(sym_size);

				FILE *fp=fopen(elf_file,"rb");
        //Assert(fp, "Cannot open '%s'", elf_file);
        if(fp==NULL){
  	printf("\n\n\n\nCan not open '%s'\n\n\n\n", elf_file);
  	return 0;
  	}
  	
				fseek(fp,sym_addr,SEEK_SET);
				int ret=fread(sym,sizeof(Elf32_Sym),sym_num,fp);
				if (ret!=sym_size/sizeof(Elf32_Sym)){
        printf("Failed to read symtab header\n");
        printf("Information about ret: %d\n", ret);
        printf("Information about sym_size: %lu\n", sym_size);
        printf("Information about sym_addr: %08lx\n", sym_addr);
        printf("Information about sym_num: %d\n", sym_num);
        fclose(fp);
        return 0;
					
				}
					sym_printf(sym,sym_num);
					fclose(fp);
					return sym;
}



int parse_args(int argc, char *argv[]) {
  //for(int i=0;i<100;i++){
		
	printf("this is this : %s\n",*(argv));
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
  while ( (o = getopt_long(argc, argv, "-bhl:", table, NULL)) != -1) {
  //while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
	printf("o is : %d\n",o);
	printf("optarg : %s\n",optarg);
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': 
								log_file = optarg;
								if (log_file){
							  log_fp=fopen(log_file,"w"); 
			 					if (log_fp==NULL){
								printf("open log_file FAIL!!\n");	
								}else 
								printf("open log_file SUCCESS!!\n");	
								}
								else printf("FAIL OPEN LOG_FILE");
								break;
      case 'd': diff_so_file = optarg; 
                diff_on=1;
      break;
			case 'e': elf_file=optarg;
				/*
              ehdr_globle=parse_elf(elf_file);
						  shdr_globle=parse_shdr(ehdr_globle,elf_file);
						  //find_shdr_type(ehdr_globle,shdr_globle);
						  str_globle =parse_strtab(shdr_globle,elf_file);
							sym_globle =parse_sym(shdr_globle,elf_file);
              */
							 	break;
								
							
      case 1:
						  printf("what is img_file : %s\n",optarg);
							img_file=optarg;
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

/*
void init_monitor(int argc, char *argv[]) {

  parse_args(argc, argv);
  init_rand();

  init_log(log_file);

  init_mem();

  IFDEF(CONFIG_DEVICE, init_device());

  init_isa();

  long img_size = load_img();

  init_difftest(diff_so_file, img_size, difftest_port);

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

  welcome();
}
*/
