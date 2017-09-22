#include<stdio.h>
#include<stdlib.h>

main(){
	struct person{
	char name[100]; 
	int age;	
	};
	struct person p; int i;
	FILE *fp;
	char ch;
	fp = fopen("D:\\FILE\\personA.txt","wb");
	for(i=0;i<4;i++){
		printf("input name : "); scanf("%s",p.name);
		printf("input age : "); scanf("%d",&p.age);
		fwrite(&p,sizeof(struct person),1,fp);

	}
		
	fclose(fp);
}
