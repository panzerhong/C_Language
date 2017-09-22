#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	int pass;
	p=fopen("D://password encryption.txt","wb");
	printf("Enter password number : ");scanf("%i",&pass);
	fwrite(&pass,sizeof(int pass),1,pass);
}
