#include<stdio.h>
#include<stdlib.h>
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
	fp = fopen ("D://asdf.txt","a");	
		if(fp == NULL)
	{
		puts ("Cannot open file");
		exit(1);
	}
	while(another=='Y')
	{
		printf("Enter name , age and basic salary\n");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fprintf(fp, "%s %d %f\n",e.name,e.age,e.bs);
		fflush(stdin);
		another = getch();
	}
	fclose(fp);
}
