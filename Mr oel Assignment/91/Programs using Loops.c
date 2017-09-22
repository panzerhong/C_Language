// II .PROGRAMS USING LOOPS
#include<stdio.h>

// 11.Factorial withou using function
/*int main()
{
	int n,i,re=1;printf("Enter number : ");scanf("%i",&n);for(i=1;i<=n;i++){ re*=i;}printf("Result is %i ",re);
}*/


// 12. Table of N and squre of N 
/*int main()
{
	int n,i,j;printf("Enter number : ");scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n\n");
		for(j=1;j<=n;j++)
		printf("%i\t",n);
	}
}*/


// 13.calculate x to tye power y
/*#include<math.h>
int main()
{
	int x,re,y;printf("Enter x : ");scanf("%i",&x);printf("Enter y : ");scanf("%i",&y);re=pow(x,y);
	printf("result is %i",re);
}*/


//  14.Multiplication talbe
/*int main()
{
	int i,j;
	for (i=1;i<=10;i++)
	{
		
		for(j=1;j<=10;j++)
		{
			printf("\n%i * %i = %i",i,j,i*j);
		}
		printf("\n\n");
	}
}*/


// 15.Sum of natural numbers
/*int main()
{int a,b;printf("Enter a number : ");scanf("%i",&a);printf("Enter b number : ");scanf("%i",&b);printf("result = %i",a+b);}*/


// 16.Fibonacci stating from any two numbers
/*int main()
{
	int n,i,re[100];printf("Enter number : ");scanf("%i",&n); re[0]=0; re[1]=1;printf("%i %i ",re[0],re[1]);
	for(i=2;i<=n;i++)
	{
		re[i]=re[i-2]+re[i-1];
		printf("%i ", re[i]);
	}
}*/


//17. UPPERCASE TO LOWER CASE
/*#include<string.h>
int main(){
	char s[100];printf("Enter string \n");
	gets(s);
	printf("\nLOWER CASE string %s",strlwr(s));
	printf("\nnUPPER CASE string %s",strupr(s));
}*/


// 19. Pascal triangle
/*
int main()
{
	int num,a[100][100],i,j;
	printf("Enter number to display pascal number : ");scanf("%i",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i; j++)
		{
			a[j][i]=a[j-1][i-1]+a[j][i-1];
			if(j==1&&i>0||j==i)
			{
				a[j][i]=1;
			}
			if(a[2][2]==2)
			a[2][2]=1;
			printf("%i\t",a[j][i]);
		}
		printf("\n");
	}
}*/
//20. LCM & GCD
/*int main()
{
	int a,b,ra,rb,lcm,gcd;
	printf("Enter 1st number : ",a);scanf("%i",&a);
	printf("Enter 2nd number : ",b);scanf("%i",&b);
	while(a>0)
	{
		for(i=1;i<=a;i++)
		{
			ra[i]=a/i;
			rb=b/i;
			if(ra==rb)
			{
				
			}
		}
		
	}
}*/

/*#include <stdio.h>
 
void main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = (num1 * num2) / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}*/
 
/*void main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}*/
// 21.find prime number between 2 interger
/*int main()
{
	int a,b,i,j,count;
	printf("Enter 1 st number : ");scanf("%i",&a);
	printf("Enter 2nd number : ");scanf("%i",&b);
	if(a<b){
		for(i=a;i<=b;i++)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count<3){
				printf("%i ",i);
			}
			
		}
	}
	else if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)count++;
		}
		if(count<3)
		printf("%i ",i);
		}
	}
	else
	printf("Cannot find prime number between these two number");
}*/


// 22. Factor of number
/*int main()
{
	int a,i;printf("Enter number : ");scanf("%i",&a);printf("Factor number of %i are ",a);
	for(i=2;i<a;i++){
		if(a%i==0)
		printf("\n%i ",i);
	}
}*/


// 23. Bin to dec and oct

/*int main()
{
	long int bin,i=0,x=0,y,oc[100];
	printf("Enter binary number : ");scanf("%li",&bin);
	printf("The out put is : \n");
	while(bin>0)	
	{
		if(bin%10==1)
		{
			y=pow(2,i);
			x+=y;
			i++;
		}
		else
		i++;
		bin/=10;
	}
	printf("%li decimal\n",x);
	i=0;
	while(x>0)
	{
		oc[i]=x%8;
		i++;
		x/=8;	
	}
	for(i=i-1;i>=0;i--)
	printf("%li",oc[i]);printf(" Octal");
}*/
// 23. Factor of prime number
/*int main()
{
	int a,i,count=0,c,j;
	printf("enter number : ");scanf("%i",&a);printf("Factor prime number of %i are",a);
	for(i=1;i<=a;i++){
			if(a%i==0)
		{
			c=i;
			for(j=1;j<=c;j++)
			{
				if(c%j==0)
				count++;
			}
			if(count<3)
			printf("\n%i ",c);
			count=0;
		}
	}
}*/


// 25. Count the number of digit in an integer
/*int main()
{
	int i=0,num,a;
	printf("Enter the number : ");scanf("%i",&num);
	a=num;
	while(num!=0)
	{
		num/=10;
		i++;
	}
	printf("The quantity of digit in number (%i) is %i",a,i);
}*/


// 26. Reverse the digits of given number
/*int main()
{
	int i=0,num,j,a[100];
	printf("Enter number : ");scanf("%i",&num);
	while(num!=0)
	{
		a[i]=num%10;
		num/=10;
		i++;
	}
	for(j=0;j<=i-1;j++)
	printf("%i",a[j]);	
}*/


// 27. Number palindrome
/*#include<math.h>
int main()
{
	int a,b[100],i=0,j,sum=0,y,c,k;
	printf("Enter number : ");scanf("%d",&a);
	c=a;
	do
	{
		b[i]=a%10;
		a/=10;
		i++;
	}
	while(a!=0);
	k=i-1;
	for(j=0;j<i;j++)
	{
		y=pow(10,k);
		sum+=b[j]*y;
		k--;
	}
	printf("After reversing %i\n",sum);
	if(sum==c)
	printf("%i is palindrome number",c);
	else
	printf("%i is not palindrome number",c);	
}*/



// 28. Digit summation
/*int main()
{
	int i=0,j,num,x,y=0;
	printf("Enter number : ");scanf("%i",&num);
	do{
		y+=num%10;
		num/=10;
	}while(num!=0);
	printf("%i",y);
}*/


// 29. Armstrong checking Example: 371 is armstrong number because 3 power 3+ 7power 3+ 1 power 3 =371
/*int main()
{
	int num,sum=0,r,a;printf("Enter number : ");scanf("%i",&num);a=num;
	while(num)
	{
		r=num%10;
		num/=10;
		sum=sum+r*r*r;
	}
	if(a==sum)
	printf(" %i is armstrong number",a);
	else
	printf(" %i is not armstring number",a);
}*/


//30.Simple calculator
/*main()
{
	int a,b; char c, any;
	start : system("cls");
	printf("Enter 1st number : ");scanf("%i",&a);
	a:
	printf("\n\nEnter arithimatic opertor : ");
	c=getch();	
	fflush(stdin);
	switch(c)
	{
		case '+' : printf(" + \n\nEnter Second number : ");scanf("%i",&b);printf("\n %i + %i = %i",a,b,a+b);break;
		case '-' : printf(" - \n\nEnter Second number : ");scanf("%i",&b);printf("\n %i - %i = %i",a,b,a-b);break;
		case '*' : printf(" X \n\nEnter Second number : ");scanf("%i",&b);printf("\n %i * %i = %i",a,b,a*b);break;
		case '/' : printf("/ \n\nEnter Second number : ");scanf("%i",&b);printf("\n %i / %i = %i",a,b,a/b);break;
		default:
			printf("\n\nWrong Input, Try again");
			goto a;
	}
	printf("\n\nEnter any key to start again ");
	any=getch();
	goto start;
}*/


// 31.To Find SIN(x) using Sine Series
#include<stdio.h>
#include<conio1.h>
 
void main()
{
    int i, n;
    float x, sum, t;
    clrscr();
     
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
     
    printf(" The value of Sin(%f) = %.4f",x,sum);
    getch();
}
// 
// 32.Exponent series
/*# include <stdio.h>
# include <conio1.h>
main() 
{ 
 int i, n, exp; 
 float x, sum = 1, t = 1 ; 
 clrscr() ; 
 printf("Enter the value for x : ") ; 
 scanf("%f", &x) ; 
 printf("\nEnter the value for n : ") ; 
 scanf("%d", &n) ; 
 for(i = 1 ; i < n + 1 ; i++) 
 { 
  exp = i ; 
  t = t * x / exp ; 
  sum = sum + t ; 
 } 
	 printf("\nExponential Value of %f is : %8.4f", x, sum);
	 getch() ;
}*/


// 43.Binary search
/*#include <stdio.h>
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);
   for (c = 1; c <= n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
   c=1;
   while(c<=n)
   {
   		if(search!=array[c])
   		{
   			printf("The location is at %i",c);
   			break;
   		}
   		else
   		printf("k")
   		c++;
   }
   
}*/


