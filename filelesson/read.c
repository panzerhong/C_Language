#include<stdio.h>
#include<stdlib.h>
#include<conio1.h>
main()
{
	FILE *fp;
	char another = 'Y';
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp = fopen ("D://aa.txt","ab");
	
		if(fp == NULL)
	{
		puts ("Cannot open file");
		exit(0);
	}
	printf("Enter name , age and salary\n");scanf("%s %i %f",&e.name,&e.age,&e.bs);
	printf("%s %d %.2f\n",e.name,e.age,e.bs);
	fwrite(&e,sizeof(struct emp),1,fp);
	fclose(fp);
}
