#include "common.h"
#include "my_share.h"


uint32_t *vaddr=NULL;
char *img_file=NULL;
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
	

  vaddr =(uint32_t*)malloc(size);
	if(vaddr==NULL){
	printf("Memory allocation faile\n");
	exit(-1);
	}

  fseek(fp, 0, SEEK_SET);
  int ret = fread(vaddr, size, 1, fp);
  if(ret!=1){
	printf("Read from %s error\n",img_file);	
	}

  fclose(fp);
  printf("Read form %s success\n",img_file);
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
        printf("\t-d,--diff=REF_/SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
*/
