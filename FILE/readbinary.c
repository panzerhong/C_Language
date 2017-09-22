#include<stdio.h>
#include<stdlib.h>

main(){
	
	struct number{
		int n1,n2,n3;
		
	};
	int i;
	struct number num;
	FILE *fp; 
		
	fp=fopen("D:\\FILE\\binary.bin","rb");
	if((fp=fopen("D:\\FILE\\binary.bin","rb"))==NULL){
		printf("can not open\n");
		exit(1);
	}
	for(i=1;i<5;i++){
	fread(&num,sizeof(struct number),1,fp);	
	printf("%d %d %d\n",num.n1,num.n2,num.n3);	
	}
	fclose(fp);	
}
