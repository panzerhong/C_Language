//2D
/*#include<stdio.h>
main()
{
	int array[3][3];
	int i,j,sum=0;
	float avg;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter number:");
			scanf("%d",&array[i][j]);
			sum=sum+array[i][j];
		}
	}
	avg=sum/9;
	printf("%2.f\n",avg);
}*/


// Compare Average
/*#include<stdio.h>
int main()
{
	int input1[999],sum1=0,sum2=0,avg1,avg2,input2[999],num,i;
	printf("Enter the quatity of number A : ");scanf("%i",&num);
	printf("Enter each number of A \n");
	for(i=0;i<num;i++)
	{
		scanf("%i",&input1[i]);
		sum1+=input1[i];
	}
	avg1=sum1/num;
	printf("Enter the quantity of number B :");scanf("%i",&num);
	printf("Enter each number of B\n");
	for(i=0;i<num;i++)
	{
		scanf("%i",&input2[i]);
		sum2+=input2[i];
	}
	avg2=sum2/num;
	
	if(avg1>avg2)
	{
		printf("Average1(%i) > Average2(%i)",avg1,avg2);
	}
	else if(avg1==avg2)
	{
		printf("Average1(%i) = Average2(%i)",avg1,avg2);
	}
	else
	printf("Average1(%i) < Average2(%i)",avg1,avg2);
}*/

// DISPLAY UPR OR LW
/*#include<stdio.h>
#include<string.h>
main()
{	
	 char a[100];
	puts("Enter String");
	scanf("%s",a);
	printf("\nString in lowercase %s ",strlwr(a));
	printf("\nString in uppercase %s",strupr(a));
}*/

// Convert to lowercase
/*#include <stdio.h> 
int main(){
    char inputString[100];
    int index;
    printf("Enter a String\n");
    gets(inputString);
    for(index=0; inputString[index] != '\0'; index++)
	{
        // Check if character in inputArray is upper Case
        if(isupper(inputString[index]))
		{
            // Convert upper case character to lower case using tolower function 
            inputString[index] = tolower(inputString[index]);
        } else {
            inputString[index] = inputString[index];
        }
    }
    inputString[index] = '\0';
    printf("String with all lowercase characters \n%s ", inputString);
 
    getch();
    return 0;
}*/



//Diagonal
/*#include<stdio.h>
main()
{
	int array[3][3];
	int i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
			if(i==j)
			{
				sum=sum+array[i][j];
			}
		}
	}
	printf("%d",sum);
}*/


// Sum of even and Sum of odd 
/*#include<stdio.h>
int main()
{
	int num,a[100],sumo=0,sume=0,i;
	printf("Enter the quantity of number : ");scanf("%i",&num);
	printf("Enter each number : ");
	for(i=num;i>0;i--)
	{
		scanf("%i",&a[i]);
		if(a[i]%2==0)
		{
			sume+=a[i];
		}
		else
		sumo+=a[i];
	}
	printf("Sum of Even number = %i",sume);
	printf("Sum of Odd number = %i",sumo);
}*/



/*//Three arrays
#include<stdio.h>
main()
{
	int A[5],B[5],AB[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<5;i++)
	{
		AB[i]=A[i]+B[i];
		printf("%d\t",AB[i]);
	}	
}*/


// Program to convert string from lwr-upr, upr-lwr by using asckeyvalue
/*#include <stdio.h>
 main()
 {
 	int n=0;
 	char b[100];
 	printf("Enter a string:");
 	gets(b);
 	while(b[n]!='0')
 	{
	
	 if(b[n]>='A' && b[n]<='Z')
 		b[n]=b[n]+32;
	else if(b[n]>='a' && b[n]<='z')
		b[n]=b[n]-32;
		n++;
	}
	printf("%s",b);
 }*/
 
 
 
 #include<stdio.h>
 int main()
 {
 	int j=0,num,i;
 	printf("Enter number : ");scanf("%i",&num);
 		for(i=1;i<=num;i++)
 		{
 			if(num%i==0)
 			{
 				j++;	
 			}
 		}
 			if(j==2)
 				{
 					printf("%i is prime number",num);
 				}
 			else
 			printf("%i is not prime number",num);
 }
