#include<stdio.h>
main()
{ 
long int a[99][99],b[99][99],result[99][99],i,j,rowA,columnA,rowB,columnB,sum,k,number;
printf("Chose the operator by Enter the number: \n 1. for +Matrix \n 2. for -Matrix \n 3. for *Matrix \n");
scanf("%ld",&number);

if(number==1)
{
printf("\n\nMATRIX ADDINGG\n\n");
printf("Enter the quantity row of Matrix A: "); scanf("%ld",&rowA);
printf("Enter the quantity column of Matrix A: "); scanf("%ld",&columnA);
printf("Enter the quantity row of Matrix B:"); scanf("%ld",&rowB);
printf("Enter the quantity column of Matrix B: "); scanf("%ld",&columnB);
printf("\n");

if(rowA==rowB&&columnA==columnB)

{
	printf("Enter the value of matrix A \n");
	for(i=0;i<rowA;i++)
	{
		for(j=0;j<columnA;j++)
		scanf(" %ld",&a[i][j]);
	}
	
	printf("The Table of matrix A \n");
	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnA;j++)
		printf(" %ld",a[i][j]);
	}

printf("\n\nEnter the value of matrix B \n");
	for(i=0;i<rowB;i++)
	{
		for(j=0;j<columnB;j++)
		scanf(" %ld",&b[i][j]);
	}
	
printf("The Table of matrix B \n");
for(i=0;i<rowB;i++)
{
	printf("\n");
	for(j=0;j<columnB;j++)
	printf(" %ld",b[i][j]);
}


for(i=0;i<rowA;i++)
{	
	for(j=0;j<columnB;j++)
	{
		result[i][j]=a[i][j]+b[i][j];
	}
}

printf("\n\nThe result of Adding Matrix ");

	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnB;j++)
		printf(" %ld",result[i][j]);
	}
	
}
else
printf("You cannot add matrix which has the different dimension");

}





else if(number==2)
{
printf("\n\nMATRIX SUBTRACTING\n\n");
printf("Enter the quantity row of Matrix A: "); scanf("%ld",&rowA);
printf("Enter the quantity column of Matrix A: "); scanf("%ld",&columnA);
printf("Enter the quantity row of Matrix B:"); scanf("%ld",&rowB);
printf("Enter the quantity column of Matrix B: "); scanf("%ld",&columnB);
printf("\n");

if(rowA==rowB&&columnA==columnB)

{
	printf("Enter the value of matrix A \n");
	for(i=0;i<rowA;i++)
	{
		for(j=0;j<columnA;j++)
		scanf(" %ld",&a[i][j]);
	}
	
	printf("The Table of matrix A \n");
	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnA;j++)
		printf(" %ld",a[i][j]);
	}

printf("\n\nEnter the value of matrix B \n");
	for(i=0;i<rowB;i++)
	{
		for(j=0;j<columnB;j++)
		scanf(" %ld",&b[i][j]);
	}
	
printf("The Table of matrix B \n");
for(i=0;i<rowB;i++)
{
	printf("\n");
	for(j=0;j<columnB;j++)
	printf(" %ld",b[i][j]);
}


for(i=0;i<rowA;i++)
{	
	for(j=0;j<columnB;j++)
	{
		result[i][j]=a[i][j]-b[i][j];
	}
}

printf("\n\nThe result of Subtracting Matrix ");

	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnB;j++)
		printf(" %ld",result[i][j]);
	}
	
}
else
printf("You cannot subtract matrix which has the different dimension");
}





else if(number==3)
{
	printf("\n\nMATRIX MULTIPLICATION\n\n");
	printf("Enter the quantity rows of matrix A : ");	scanf("%ld",&rowA);
	printf("Enter the quantity columns of matrix A : "); scanf("%ld",&columnA);
	printf("Enter the quantity rows of matrix B: ");	scanf("%ld",&rowB);
	printf("Enter the quantity columns of matrix B: ");	scanf("%ld",&columnB);
	if(columnA==rowB)
{
	
	printf("\nEnter the value of matrix A start from row and then column\n");
	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnA;j++)
		{
			scanf(" %ld",&a[i][j]);
		}
	
	}
	
	
	printf("Enter the value matrix B start from row then column\n");
	for(i=0;i<rowB;i++)
	{
		printf("\n");
		for(j=0;j<columnB;j++)
		{
			scanf("%ld",&b[i][j]);
		}
	}
	
	
	printf("The matrix table of A is ");
	for(i=0;i<rowA;i++)
	{
		printf("\n");
		for(j=0;j<columnA;j++)
		printf(" %ld",a[i][j]);
	}


	printf("\n\nThe matrix table of B is ");
	for(i=0;i<rowB;i++)
	{
		printf("\n");
		for(j=0;j<columnB;j++)
		printf(" %ld",b[i][j]);
	}
	
	
	for(i=0;i<rowA;i++)
	{
		for(j=0;j<columnB;j++)
		{
			sum=0;
			for(k=0;k<rowB;k++)
			sum=sum+a[i][k]*b[k][j];
			result[i][j]=sum;
		}
			
	}


	printf("\n\nThe matrix multiplication table is ");
	for(i=0;i<rowA;i++)
	{	
		printf("\n");
		for(j=0;j<columnB;j++)
		printf(" %ld",result[i][j]);
		
	}
}
else
printf("You cannot multiply the matrix which has the the different columnA and rowB");





}
else
printf("Wrong Input number, Try again");

	
}
