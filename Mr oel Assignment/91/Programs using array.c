// PROGRAMS USING ARRAYS
#include<stdio.h>
#include<conio1.h>
// 34. Fibonacci using array
/*int main()
{
	int num,i,re[100];
	printf("Enter number : ");scanf("%d",&num);re[0]=0;re[1]=1;
	printf("The fibonaci number are \n %i %i",re[0],re[1]);
	for(i=2;i<=num;i++)
	{
		re[i]=re[i-2]+re[i-1];
		printf(" %i",re[i]);
	}
}*/


// 35. Largest among N numbers in an array
/*int main()
{
	int q,n[100],large;int i=0,j;
	printf("Enter quantity number to compare : ");scanf("%i",&q);
	printf("Enter number \n");
	do
	{
		scanf("%d",&n[i]);
		i++;
	}
	while(i<q);
	
	i=0;
	large=n[0];
	do
	{
		if(n[i]>=large)
		large=n[i];
		i++;
	}
	while(i<q);
	printf("The largest number is %d",large);
}*/


// 36. Smallest using array
/*int main()
{
	float small,num[1000];int i,j,q;
	printf("Enter quantity number : ");scanf("%d",&q);
	printf("Enter number : ");
	for(i=0;i<q;i++)
	{
		scanf("%f",&num[i]);
	}
	small=num[0];
	for(j=0;j<q;j++)
	{
		if(small>=num[j])
		small=num[j];
	}
	printf("%f is the smallest",small);
}*/


// 37. Reverse the array elements
/*int main()
{
	int num,i=0,r[100],j;
	printf("Enter number :" );scanf("%i",&num);
	while(num!=0)
	{
		r[i]=num%10;
		num/=10;
		i++;
	}
	for(j=0;j<=i-1;j++)
	printf("%i",r[j]);
}*/


// 38.Insert an element in an array
/*int main()
{
	int a[100],i=0,n,b,c;
	printf("Enter quantity you want to insert : ");scanf("%i",&n);
	printf("Enter number in each element in array\n");
	do
	{
		scanf("%i",&a[i]);
		i++; 
	}
	while(i<n);
	i--;
	printf("Enter location of array to insert : ");scanf("%i",&b);
	printf("Enter element of array value : ");scanf("%i",&c);
	for(i=n-1;i>=b-1;i--)
	a[i+1]=a[i];
	a[b-1]=c;
	for(i=0;i<=n;i++)
	{
		printf("%i\n",a[i]);
	}
}*/


// 39. Deleting an array element
/*int main()
{
	
}*/


// 40.Transpose of a matrix
/*int main()
{
	int num[100][100],i,j,row,column;
	printf("Enter the row number of Matrix : ");scanf("%i",&row);
	printf("Enter the column number of Martix :");scanf("%i",&column);
	printf("Enter the value of Martrix");
	for(i=1;i<=row;i++)
	{
		printf("\n");
		for(j=1;j<=column;j++)
		scanf("%i",&num[i][j]);
	}
	printf("Before Transpose");
	for(i=1;i<=row;i++)
	{
		printf("\n");
		for(j=1;j<=column;j++)
		printf("%i\t",num[i][j]);
	}
	printf("\n\nAfter Transpose");
	for(i=row;i>=1;i--)
	{
		printf("\n");
		for(j=column;j>=1;j--)
		printf("%i\t",num[i][j]);
	}
}*/


//41. Duplication removal

//43. Program Using Array
/*int main()
{
	int q,num[100],find,i,j=1;
	printf("Enter quantity of number : ");scanf("%i",&q);
	printf("Enter the value of each number\n");
	for(i=1;i<=q;i++)
	{
		scanf("%i",&num[i]);
	}
	printf("Enter the number to find : ");scanf("%i",&find);
	for(i=1;i<=q;i++)
	{
		if(find!=num[i])
		{
			j++;
			continue;
		}
		printf("The value of this number is at location %i",i);
		break;
	}
	if(j-1==q)
	printf("There is no value in the list on the number");
}*/


//44. Split the sorted array
int main()
{
	int q,num[100],loc,i=1;
	a:
	printf("\n\nEnter quantity of number : ");scanf("%i",&q);
	printf("Enter the value of each number\n");
	do
	{
		scanf("%i",&num[i]);
		i++;
	}while(i<=q);
	printf("Enter the location to sort : ");scanf("%i",&loc);
	if(loc>q)
	{
		printf("There is no location to sort try again");clrscr();goto a;
	}
	printf("After spilt sort");
	for(i=loc+1;i<=q;i++)
	printf("\n%i",num[i]);
	for(i=1;i<=loc;i++)
	printf("\n%i",num[i]);
}

// 45. Matrix addition
/*int main()
{
	int row1,col1,row2,col2,i,j,num1[100][100],num2[100][100],re[100][100];
	printf("\nMATRIX 1\nEnter quantity of row1 : ");scanf("%i",&row1);
	printf("Enter quantity of column1 : ");scanf("%i",&col1);
	printf("\nMATRIX 2\nEnter quantity of row2 : ");scanf("%i",&row2);
	printf("Enter quantity of column2 : ");scanf("%i",&col2);
	if(row1==row2&&col1==col2)
	{
	printf("Enter value number of Matrix 1\n");
	for(i=1;i<=row1;i++)
	{
		printf("\n");
		for(j=1;j<=col1;j++)
		scanf("%i",&num1[i][j]);
	}
	
	printf("Enter the value number of Matrix 2\n");
	for(i=1;i<=row2;i++)
	{
		printf("\n");
		for(j=1;j<=col2;j++)
		scanf("%i",&num2[i][j]);
	}
	printf("\n\nMATRIX A\n");
	for(i=1;i<=row1;i++)
	{
		printf("\n");
		for(j=1;j<=col1;j++)
		printf("\t%i",num1[i][j]);
	}
	printf("\n\nMATRIX B\n");
	for(i=1;i<=row2;i++)
	{
		printf("\n");
		for(j=1;j<=col2;j++)
		printf("\t%i",num2[i][j]);
	}
	printf("\n\n The result of adding between these two Matrix\n");
	for(i=1;i<=col1;i++)
	{
		printf("\n");
		for(j=1;j<=row2;j++)
		{
		re[i][j]=num1[i][j]+num2[i][j];
		printf("%i\t",re[i][j]);
		}	
	}
}
else
printf("Your cannot add matrix which has the difference between row of matirx A and column of matrix B  ");
}*/


//46. Matrix multiplication . REMEMEBER : THE OUTPUT OF MATRIX MULTIPLICATION HAS ROW OF MATRIX 1 AND COLUMN OF MATRIX 2
/*int main()
{
	int row1,row2,col1,col2,mat1[100][100],mat2[100][100],re[100][100],i,j,k;
	printf("\tTMATRIX MULTIPLICATION\n");
	printf("MATRIX A\n");printf("Enter row of Matrix 1 : ");scanf("%i",&row1);
	printf("Enter col of Matrix 2 : ");scanf("%i",&col1);
	printf("MATRIX B\n");printf("Enter row of Matrix 2 : ");scanf("%i",&row2);
	printf("Enter col of Matrix 2 : ");scanf("%i",&col2);
	if(col1==row2)
	{
		printf("\nEnter the each value number of Matrix A\n");
		for(i=1;i<=row1;i++)
		{
			printf("\n");for(j=1;j<=col1;j++)
			{
				scanf("%i",&mat1[i][j]);
			}
		}
		printf("\nEnter the each value number of Matrix B\n");
		for(i=1;i<=row2;i++)
		{
			printf("\n");for(j=1;j<=col2;j++)
			{
				scanf("%i",&mat2[i][j]);
			}
		}
		printf("\n\nMATRIX A\n");
		for(i=1;i<=row1;i++)
		{
			printf("\n");for(j=1;j<=col1;j++)
			{
				printf("\t%i",mat1[i][j]);
			}
		}
		printf("\n\nMATRIX B\n");
		for(i=1;i<=row2;i++)
		{
			printf("\n");for(j=1;j<=col2;j++)
			{
				printf("\t%i",mat2[i][j]);
			}
		}
		printf("\n\nThe result of Matrix multiplication is\n");
		re[1][1]=0;
		for(i=1;i<=row1;i++)
		{
			for(j=1;j<=col2;j++)
			{
				for(k=1;k<=col1;k++)
				re[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
		for(i=1;i<=row1;i++)
		{
			printf("\n");
			for(j=1;j<=col2;j++)
			printf("\t%i",re[i][j]);
		}
	}
	else
	printf("You cannot mulitplication matrix which has the difference between row of Matrix 1 and column of Matrix 2");
}*/


// 47.Inverse of 3X3 matrix
/*int main()
{
	int i,j,row,col,mat[100][100];
	printf("Enter row of matrix : ");scanf("%i",&row);
	printf("Ener column of matrix : ");scanf("%i",&col);
	printf("Enter the value of matrix");
	for(i=1;i<=row;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		scanf("%i",&mat[i][j]);
	}
		printf("Before Inverse");
	for(i=1;i<=row;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		printf("\t%i",mat[i][j]);
	}
	printf("\n\nAfter Inverse the line of row position");
	for(i=row;i>=1;i--)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		{
			printf("\t%i",mat[i][j]);
		}
	}
	printf("\n\nAfter Inverse the line of column position");
	for(i=1;i<=row;i++)
	{
		printf("\n");
		for(j=col;j>=1;j--)
		{
			printf("\t%i",mat[i][j]);
		}
	}
	printf("\n\nAfter Inverse position : ");
	for(i=row;i>=1;i--)
	{
		printf("\n");
		for(j=col;j>=1;j--)
		printf("\t%i",mat[i][j]);
	}
}*/





