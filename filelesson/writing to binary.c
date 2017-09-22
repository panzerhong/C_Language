#include<stdio.h>
#include<stdlib.h>
/*struct threeNum
{
	int n1,n2,n3;
};
int main()
{
	int n=1; 
	struct threeNum num;
	FILE *fptr;
	if((fptr=fopen("d:\\FilefromFile\\programbinary1.txt","wb"))==NULL)
	{
		printf("Error! opening file");
		exit(1);
	}
	for(n=1;n<5;++n)
	{
		num.n1=n;
		num.n2=5*n;
		num.n3=5*n + 1;
		fwrite(&num,sizeof(struct threeNum),1,fptr);
	}
	fclose(fptr);
}*/
struct threeNum
{
	int n1,n2,n3;
};
int main()
{
	int q,i;
	struct threeNum a[10];
	FILE *p;
	if((p=fopen("d:\\probinary2.txt","wb+"))==NULL) 	
	{
		printf("Error");exit(1);
	}
	printf("Enter quantity of number");scanf("%i",&q);
	for(i=1;i<=q;i++)
	{
		printf("%c/. Number %i : ",i+64,i);scanf("%i",&a[i].n1);
	}
	for(i=1;i<=q;i++)
	{
		fprintf(p,"%c/. Number %i : %i \n",i+64,i,a[i].n1);
	}

}
