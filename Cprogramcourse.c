
/*void main()
{
  int x=10;
  float f=10.8;
  char s[100]="AB B C X";
  printf("x=%d\nf=%f\nc=%s",x,f,s);
}*/


/*
void main()
{
	int x; float f; char c;
	printf("Enter the int, float, char values\n");scanf("%d %f %c",&x,&f,&c);
	printf("x=%d, f=%f, c=%c",x,f,c);
}*/



/*int main()
//Swapping
{
	int a=0,b=0;
	printf("Enter the 1 st number : ");scanf("%d",&a);
	printf("Enter the 2 nd number : ");scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("1 st number = %d\n2nd number = %d",a,b);
}*/


/*int main()
{
	int x,y,z,sum,average;
	scanf("%d%d%d",&x,&y,&z);
		average=(x+y+z)/3;
	printf("The output is : %d",average);
}*/
// Another Conditional operator is ?. Example : x=(condition)? True:flase;


/*int main()
{
	int input,mul,i;
	printf("Enter number : ");scanf("%d",&input);
	printf("The output is : \n");
	for(i=1;i<=10;i++)
	{
		mul=input*i;
		printf("%d=%d*%d\n",mul,input,i);
	}
}*/


//POWER
/*int main()
{
	int pow=1,number,i,index;
	printf("Enter number : ");scanf("%d",&number);
	printf("Enter index : ");scanf("%d",&index);
	for(i=1;i<=index;i++)
	{
		pow=pow*number;
	}
	printf("%d^%d=%d",number,index,pow);
}*/


/*int main()
{
	int a,i,c=0;
	printf("Enter interger : ");scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c==2)
	printf("%d is prime number",a);
	else
	printf("%d is not prime number",a);
}*/


//program to display sum of digit
/*#include<stdio.h>
int main()
{
	long int a,reminder,sum=0;
	printf("Enter number : "); scanf("%i",&a);
	while(a!=0)
	{
		reminder=a%10;
		sum=sum+reminder;
		a=a/10;
	}
	printf("sum of digit = %i",sum);
	
}*/


//To read number s formuser, calculate it until additionn becomces more than 100
/*#include<stdio.h>
int main()
{
	int n,sum=0;
	do
	{
			printf("\nEnter number : ");scanf("%i",&n);
			sum=sum+n;
	}
	while (sum<=100);
	printf("\n\nsum=%i",sum);
}*/


//GOTO if user enter the 0 restart program
/*#include<stdio.h>
int main()
{
	int n; 
	ZERO:printf("\nEnter The number : ");
		scanf("%d",&n);
		if(n==0)
		{
			goto ZERO;
		}
		printf("\n YOu Entered %d",n);
}*/


//Symbolic pattern
/*#include<stdio.h>
int main()
{
	int i,j;
	for(j=0;j<5;j++)
	{
			for(i=0;i<=j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}

}*/


//Alphabetical pattern
/*#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Alphabetical pattern : \n\n");
	for(j=65;j<=90;j++)
	{
		for(i=65;i<=j;i++)
		{
			printf("%c  ",i);
		}
		printf("\n");
	}
	
}*/

/*#include<stdio.h>
int main()
{
	int i,reminder,c=0,j;
	printf("All prime number between number 1 - 100");
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			reminder=i%j;
			if(reminder==0)
			{
				c++;
			}
			if(c==2)
			printf("%d\n",i);
		}
		
	}
#include<stdio.h>
int main()
{
	int i,n;
	printf("Prime number between 1-100\n");
	for(n=1;n<=100;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0);
			{
				break;
			}
			
		}
		if(i==n)
		{
			printf("%d\t",i);
		}
	}	
}
}*/



//Alphabet identyfy
/*#include<stdio.h>
void main()
{
	char c;
	printf("Enter the character : ");scanf("%c",&c);
	if(c>='a'&c<='z')
	{
		printf("%c is lowercase.",c);
	}
	else if(c>='A'&c<='Z')
	{
		printf("%c is UPPERCASE",c);
	}
	else
	printf("It is not alphabet");
}*/


// Campare the largest number
/*#include<stdio.h>
int main()
{
	long int n,m[100],i,t;
	printf("Enter quantity of number you want to compare : ");scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter %ld number : ",i);scanf("%i",&m[i]);
	}
	t=m[1];
	for(i=1;i<=n;i++)
	{
		if(m[i]>t)
		{
			t=m[i];	
		} 
	}
	printf("%ld is the greatest number.",t);
}*/


/*SORT NUMBER Logic of it is swap*/
/*#include<stdio.h>
int main()
{
	int i,a[888],j,temp;
	for(i=0;i<3;i++)
	{
		printf("Enter [%i] number : ",i);scanf("%i",&a[i]);
	}
	printf("%i",a[3]);
//Sorting Starts
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("\n Sorted number : \n");
for(i=0;i<3;i++)
{
	printf("\t%d",a[i]);
}
	
}
*/


// Read 9 integer in two dimensional array and print it in Tabular form
/*#include<stdio.h>
int main()
{
	int n[999],i,j;
	for(i=1;i<=9;i++){
		printf("Enter number [%i] : ",i);scanf("%i",&n[i]);
	}
	printf("\n\nTabular form is : \n");
		
		for(j=1;j<=3;j++)
		printf("%i\t",n[j]);
		printf("\n");
		for(j=4;j<=6;j++)
		printf("%i\t",n[j]);
		printf("\n");
		for(j=7;j<=9;j++)
		printf("%i\t",n[j]);
}*/


/*#include<stdio.h>
int main()
{
	int n[99][99],i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("Enter number [%i] : ",i);scanf("%i",&n[i][j]);
		}

	}
	
	for(i=1;i<=3;i++)
	{
		printf("\n");
		for(j=1;j<=3;j++)
		{
			printf("%i\t",n[i][j]);
		}
	}
}*/


//Conver Upper-lower and lower-upper
/*#include<stdio.h>
int main()
{
	char string[100];int i=0;
	printf("Enter string : ");scanf("%s",&string);	
	while(string[i]!='\0')
	{
		if(string[i]>='A'&&string[i]<='Z')
		{
			string[i]=string[i]+32;
		}
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]=string[i]-32;
		}
		i++;
	}
	printf("\n Changed String: %s",string);
}*/


//rers kare and power
/*#include<stdio.h>
#include<math.h>
 main()
{
	float x,sq,y;
	printf("\nEnter The Number : ");scanf("%f",&x);
	sq=sqrt(x);
	printf("\nSquare Root of %f = %f",x,sq);
	printf("\nEnter The Number : ");scanf("%f",&x);
	y=pow(x,2);
	printf("\n The output is %f",y);
}*/



/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[999],b[999],z[100];
	printf("Enter (s1): ");gets(a);
	printf("Enter (s2): ");gets(b);
	strcpy(z,a);
	strcpy(a,b);
	strcpy(b,z);
	printf("(s1) : %s",a);
	printf("\n(s2) : %s",b);
	
}*/


// string palindrome is string which after reversing it is still the same as the source string
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	int x;
	printf("\nEnter The String (S1) : ");gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	x=strcmp(s1,s2);
	printf("\nReverse String (S2) : %s",s2);
	if(x==0)
	{
		printf("\n\nHence %s is palindrome string",s1);
	}
	else
	{
		printf("\n\nHence %s is not palindrome string",s2);
	}
}*/


/*#include<stdio.h>
int factorial(int);
void main()
{
	int x,t;
	printf("\n Enter The number : ");scanf("%i",&x);
	t=factorial(x);
	printf("\n%d != %d",x,t);
}

int factorial(int n)
{
	int f;
	if(n==1)
	{
		return 1;
	}
	else
	f=n*factorial(n-1);
	return f;
}*/



/*#include<stdio.h>
int fibo(int);
void main()
{
	int a,c=0,i;
	printf("Enter number : "); scanf("%d",&a);
	printf("The fibonanci number is : ");
	for(i=1;i<=a;i++)
	{
		printf("\n%d\t",fibo(c));
		c++;
	}
}
int fibo(int x)
{
	int f;
	if(x==0)
	return 0;
	else if(x==1)
	return 1;
	else
	{
			f=fibo(x-12)+fibo(x-2);
	return f;
	}

}*/


//Static is used to replace the value of variable however we assign the variable equal to sth
/*#include<stdio.h>
void demostatic();
void main()
{
	demostatic();
	demostatic();
	demostatic();
}
void demostatic()
{
	static x=100;
	x=x+20;
	printf("%d\n",x);
}*/



//External To demonstate external/globla storage class
/*#include<stdio.h>
int x=10;
void demoglobal();
void main()
{
	demoglobal();
	x=x+1;
	printf("\nX=%d",x);
	demoglobal();
}
void demoglobal()
{
	x=x+1;
	printf("\nX=%d",x);
}*/


/*RegisterRegisters are faster than memory to access, so the variables which are most frequently used in a C 
program can be put in registers using register keyword. The keyword register hints to compiler that a given variable 
can be put in a register. ... register int i = 10; int *a = &i; printf ( "%d" , *a);*/
/*#include<stdio.h>
void demoreg();
void main()
{
	register int x=10;
	printf("\nX=%d",x);
	demoreg();
	demoreg();
}
void demoreg()
{
	register int x=10;
	x=x+2;
	printf("\nX=%d",x);
}*/



/*#include<stdio.h>
#define a(x) 4*x*x+9*x+x
void main()
{
	int x,sum;
	printf("Enter number a :");scanf("%i",&x);
	sum=a(x);
	printf("Area=%i",sum);
}*/



/*#include<stdio.h>
int main()
{
	struct book {int no;
	char name[30];float price;
	}s[5];
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Number, Name and Price of book: ");
		scanf("%d%s%f",&s[i].no,&s[i].name,&s[i].price);
	}
	printf("\n**********************\n");
	printf("\nNo.	Name	Price");
		for(i=0;i<5;i++)
		{
			printf("\n%d \t%s \t Rs.%.2f",s[i].no,s[i].name,s[i].price);
		}
}*/



/*A union is a special data type available in C that allows to store 
different data types in the same memory location. You can define a union 
with many members, but only one member can contain a value at any given time. Unions 
provide an efficient way of using the same memory location for multiple-purpose.
Its process is the same as structure too but structure need more memory space in computer to allocate 
while union need less memory space to allocatate in computer*/
/*#include<stdio.h>
#include<string.h>
union book
{
	int no;
	char name [30];
	float price;
};

void main()
{
	union book b;
	b.no=10;
	printf("\nNumber : %d",b.no);
	strcpy(b.name,"C Programming");
	printf("\nName : %s",b.name);
	b.price=100.0;
	printf("\nPrice : Rs.%.2f",b.price);
}*/

/*#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}*/


/*#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   return 0;
}*/
/*#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}*/



/*#include<stdio.h>
void main()
{
	int x;
	int *p;	//Pointer Variable
	printf("\nEnter The Number : ");scanf("%d",&x);
	p=&x;//Assigning Memory Address
	printf("\nValues : %d",*p);
	printf("\nMemory Address : %d",p);
	// %u used because address is positive only so it mean %u can read only positive number 
}*/


/*#include<stdio.h>
void main()
{
	int x,y,m;int *p1,*p2;//Pointer Variable
	printf("\nEnter Two Number : ");scanf("%d %d",&x,&y);
	p1=&x;p2=&y;
	m=(*p1)*(*p2);
	printf("%d*%d=*%d",*p1,*p2,m);
}*/



/*#include<stdio.h>
void main()
{
	int x,y,r,*p1,*p2;
	printf("Enter number x : ");scanf("%d",&x);
	printf("\nEnter number y : ");scanf("%d",&y);
	p1=&x;p2=&y;
	printf("\n%d + %d=%d",*p1,*p2,*p1+*p2);
	printf("\n%d - %d=%d",*p1,*p2,*p1-*p2);
	printf("\n%d x %d=%d",*p1,*p2,*p1**p2);
	printf("\n%d / %d=%d",*p1,*p2,*p1/(*p2));
}*/


/*#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter A : ");scanf("%d",&a);
	printf("Enter B : ");scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping\n A=%d\nB=%d",a,b);
}
int swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
	return(*p1,*p2);
}*/


//Array pointer
/*#include<stdio.h>
int main()
{
	int n[100],i; int *p;
	for(i=0;i<5;i++)
	{
		printf("Enter number : ");scanf("%d",&n[i]);
	}
	p=&n[0];
	for(i=0;i<5;i++)
{
	p=&n[i];
	printf("\nIndex %d\tValue=%d\tAddress=%d",i+1,*p,p);
}*/


/*#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,s;int *p;
	printf("\nEnter The Size of Array : ");scanf("%d",&s);
	p=(int *)malloc(s*sizeof(int));
	for(i=0;i<s;i++)//p++ to Increment pointer
	{
		printf("Enter Number %d : ",i+1);
		scanf("%d",&p[i]);
	}
	printf("\nIndex \tValue \tAddress");
	for(i=0;i<s;i++,p++)
	{
		printf("\n%d \t%d \t%u",i+1,*p,p);
	}
	free(p);	//To Release the allocated memory
}*/


// Many divisoins until the second number is 0 print BYE !
/*#include<stdio.h>
int ex(int a, int b;);
void main()
{
	ex();
}
int ex()
	{
		int n1=2,n2,j,result,reminder;
		while(n150)
		{
			printf("\n\n\n1st number : ");scanf("%i",&n1);
			printf("2nd number : ");scanf("%i",&n2);
			if(n2!=0)
			{
				result=n1/n2;reminder=n1%n2;
				printf("Division = %i\nRemainder = %i",result,reminder);
			}
			else
				{printf("\n\n BYE");break;}
		}
	
	}*/


// Display multiplication table form 2- 6
/*#include<stdio.h>
main(){
	int i=2,j=1,re;
	do
	{
		do
		{
			re=i*j;
			printf("\n%i X %i = %i",i,j,re);
			j++;
		}
		while(j<11);
		i++;j=1;
		printf("\n\n");
	}
	while(i<7);
}*/



/*#include<stdio.h>
main(){
	int i=15;
	printf("The numbers between 15-7 has odd number ");
	while(i>=7)
	{
		if(i%2==0)
		{
			i--;
			continue;
		}
		else
		printf("%d ",i);
		i--;
	}*/
	
	
// Program to read the number that canbe devided by 3 and 5
/*#include<stdio.h>
main(){
	int n,i,j;
	printf("Enter number : ");scanf("%i",&n); 
	printf("All of the number which can be divided by 3 and 5\n");
	while(n>0)
	{
		if(n%3==0&&n%5==0)
		{
			printf("%i\n",n);
		}
		n--;
	}
}*/



// Repeated number by the user
/*#include<stdio.h>
main()
{
	static input1,input2,i;
	printf("Enter number : ");scanf("%i",&input1);
	printf("Enter the amount : ");scanf("%i",&input2);
	for(i=1;i<=input2;i++)
	printf("%i",input1);
	
	/*while(input2>0)	
	{
		printf("\n\n%i",input1);
		input2--;
	}*/

	/*do
	{
		printf("\n\n%i",input1);
		input2--;
	}
	while(input2>0);*/


/*#include<stdio.h>
int main()
{
	int p1,p2;
	do
	{
		printf("Enter password : ");scanf("%i",&p1);
		if(p1!=1234&&p1!=12)
		{
			printf("Try again\n\n");
			continue;
		}
		else
		{printf("\nPlz Enjoy");break;}
	}
	while(p1);
}*/



/*#include<stdio.h>
main(){
	int a,b,i,j;
	printf("Enter number : ");scanf("%i",&a);
	printf("Enter the desired width : ");scanf("%i",&b);
	printf("The number in square shape is like this ");
	for(j=b;j>0;j--)
	{
		printf("\n");
		for(i=b;i>0;i--)
		printf("%i",a);
	}
}*/



/*#include<stdio.h>
int me1();
int me2();
int me3();
int main()
{
	me1();
	me2();
	me3();
}
 me1()
 {
 		int p1=10;
	for(p1=10;p1<=20;p1+=2)
	{
		if(p1==16)
		continue;
		printf("%i ",p1);
	}
 }
 
 me2()
 {
 	printf("\n\n");
 	int p1=10;
 	for(p1=10;p1<=20;p1++)
 	{
 		if(p1==16)
 		continue;
 		if(p1%2==0)
 		printf("%i ",p1);
 	}
 }
 
 me3()
{
	printf("\n\n");
	int p1=10;
	for(p1=10;;p1+=2)
	{
		if(p1==16)
		continue;
		if(p1>20)
		break;
		printf("%i ",p1);
	}

}*/

/*#include<stdio.h>
main()
{
	int i,j,p1,p2,p3;
	printf("Enter number : ");scanf("%i",&p1);
	printf("Enter desired width : ");scanf("%i",&p2);
	printf("Enter desired height : ");scanf("%i",&p3);
	for(i=0;i<p3;i++)
	{
		printf("\n");
		for(j=0;j<p2;j++)
		printf("%i ",p1);
	}
}*/

//Product
/*#include<stdio.h>
int main()
{
	int p1,p2,re=0,i;
	printf("Enter 1st number : ");scanf("%i",&p1);
	printf("Enter 2nd number : ");scanf("%i",&p2);
	printf("The output is of %i X %i = ",p1,p2);
	i=1;
	while(i<=p2)
	{
		re=re+p1;
		i++;
	}
	printf("%i",re);
}*/


/*#include<stdio.h>
int main()
{
	int p;
	printf("Enter number : ");scanf("%i",&p);
	(p>0? printf("%i is positive",p) : printf("%i is negative",p));
}*/

//Hallow rectangle

/*#include<stdio.h>
main(){
	int p,p1,i,p2,j;
	printf("Enter symbol, height and width number \n");scanf("%i %i %i",&p,&p1,&p2);
	printf("The output\n");
	for(i=0;i<p2;i++)
	printf("%i",p);
	for(i=0;i<p1-2;i++)
	{
		printf("\n");
		for(j=0;j<p2-1;j++)	
		printf("%i ",p);
	}
	printf("\n");
	for(i=0;i<p2;i++)
	printf("%i",p);

}*/



//Statics
/*#include<stdio.h>
	int main()
	{
		int p1=1,j=1,total=0,average,maximum=0,minimum=0;
		printf("Number? ");scanf("%i",&p1);	minimum=p1;maximum=p1;
		while(p1!=0)
		{
			total+=p1;average=total/j;
			if(p1>=maximum)
			maximum=p1;
			if(p1<=minimum)
			minimum=p1;
			printf("Total=%i, Average=%i, Maximum=%i, Minimum=%i",total,average,maximum,minimum);
			j++;
			printf("\n\nNumber? ");scanf("%i",&p1);
		}
		printf("BYE");
	}*/



/*#include<stdio.h>
	int main()
	{
		int p1,p2;
		printf("Enter 1st number : ");scanf("%i",&p1);
		printf("Enter 2nd number : ");scanf("%i",&p2);
		(p1>0? printf("\n\n%i of 1st number is positive",p1):printf("%i of 1nd number is negative",p2));
		(p2>0? printf("\n%i of 2nd number is positive",p2):printf("%i of 2nd number is negative",p2));
	}
*/


/*#include<stdio.h>
int main()
{
	int p1,p2;
	printf("Enter Price : ");scanf("%i",&p1);
	printf("Enter Paid : ");scanf("%i",&p2);
	int change = p2-p1;
	printf("%i ",change);
	while (change>=50)
	{
		printf(" 50");
		change-=50;
	}
	while (change>=20)
	{
		printf(" 20");
		change-=20;
	}
	while(change>=5)
	{
		printf(" 5");
		change-=5;
	}
	while(change>=2)
	{
		printf("2");
		change-=2;
	}
	while(change>=1)
	{
		printf("1");
		change-=1;
	}
}*/



// 2. Triangle
/*#include<stdio.h>
int main()
{
	char sym; int i,j,k;
	printf("Enter a symbol : ");scanf("%c",&sym);printf("Enter number : ");scanf("%i",&i);
	
	for(j=i;j>0;j--)
	{
		printf("\n");
		for(k=j;k>0;k--)
		printf("%c",sym);
	}
}*/

// 3. user 
/*#include<string.h>
#include<stdio.h>
int main()
{
	char a[999],pass[999];
	printf("Enter Username : ");scanf("%s",&a);
	printf("Enter Password : ");scanf("%s",&pass);
	while(a)
	{
		if(strcmp(a,"user")==0 && strcmp(pass,"pass")==0)
		{
			printf("Login Successful");break;
		}
		else
		{
			printf("Wrong Input");
			printf("\n\nEnter Username : ");scanf("%s",&a);
			printf("Enter Password : ");scanf("%s",&pass);
		}
	}
}*/


//	4. user 5 times
/*#include<stdio.h>
int main()
{
	char p[100],s[100];int i;
	for(i=0;i<5;i++)
	{
		printf("\n\nEnter username : ");scanf("%s",&s);
		printf("Enter password : ");scanf("%s",&p);
		if(strcmp(s,"user")==0&&strcmp(p,"pass")==0)
		{
			printf("Login Successful");goto c;
		}
		else 
		{
			printf("Wrong Input");
		}
	}
	printf("\n\nYour account is blocked");
	c:
		return 0;
}*/
	

// 5 calculator switch
/*#include<stdio.h>
int main()
{
	int p1,p2,re; char ch;
	printf("Enter 1st number : ");scanf("%i",&p1);
		printf("\nEnter 2nd number : ");scanf("%i",&p2);
	//scanf("%c",&o);
	printf("\nEnter operator : ");ch=getch();
	switch(ch)
	{
		case '+' : re=p1+p2;printf("\nResult = %i",re);break;
		case '-' : re=p1-p2;printf("\nResult = %i",re);break;
		case '*' : re=p1*p2;printf("\nResult = %i",re);break;
		case '/' : re=p1/p2;printf("\nResult = %i",re);break;
		default:
			printf("Wrong Operator");break;
	}
}*/


//Calculate the values of a function
/*#include<stdio.h>
#define F(i) i*i-2*i+1
int main()
{
	int x,i,y;
	printf("The result from replacing x -10 to 10 in equation x*x-2*x+x are");
	for(i=-10;i<=10;i++)
	{
		y = F(i);
		printf("\n y(%i)=%i",i,y);
	}
}*/


// 9 Display Function
/*#include<stdio.h>
#define F(i) (i-4)*(i-4)
int main()
{
	int i,y,j;
	for(i=-1;i<=8;i++)
	{
		y=F(i);
		for(j=0;j<y;j++)
		printf("*");
		printf("\n");
	}
	
}*/


// 10 Float speed units
/*#include<stdio.h>
#define F(se,p1) p1/se
#define E(mi,p1) p1/mi
#define D(ho,p1)	p1/ho
int main()
{
	int p1,se,mi,ho,meters,kilometers,mile;
	printf("Enter distance in meter : ");scanf("%i",&p1);
	printf("Enter time in the time in each order second minute and hour\n");scanf("%i %i %i",&se,&mi,&ho);
	meters=F(se,p1);
	kilometers=E(mi,p1);
	mile=D(ho,p1);
	printf("Speed in meters per second is  %i m/s",meters);
	printf("Speed in kilometers per second is  %i k/s",kilometers);
	printf("Speed in mile per hour is %i mi/s",mile);
}*/
/*#include<stdio.h>
int main()
{
	float se,mi,ho,distance,tt;
	printf("Enter second,minute and hour\n");scanf("%f %f %f",&se,&mi,&ho);
	printf("Enter distance in meter : ");scanf("%f",&distance);
	tt=se+mi*60+ho*3600;
	printf("\nSpeed %f m/s",distance/tt);
	printf("\nSpeed %f ki/h",(distance/1000)/(tt/3600));
	printf("\nSpeed %f mile/h",(distance/1609)/(tt/3600));
}*/



/*#include<stdio.h>
int main()
{
	char sym;
	printf("Enter a symbol : ");sym=getchar();
	if(sym>=0&&sym<=9)
	{
		putchar(sym);printf(" is interger.");
	}
	else if(sym=='a'||sym=='e'||sym=='i'||sym=='o'||sym=='u'||sym=='A'||sym=='E'||sym=='I'||sym=='O'||sym=='U')
	{putchar(sym);printf(" is vowel");}
	else
	putchar(sym);printf(" is consonant.");
	
}*/



/*#include<stdio.h>
int main()
{
		int i,j,k;
		for(i=5;i>0;i--)
		{
			if(i==5)goto aa;
			printf("\n");
			aa:
			for(k=i;k<=5;k++)
			printf(" ");
			for(j=i;j>0;j--)
			{
				printf("*");
			}
		}
}*/



/*#include<stdio.h>
int main()
{
	char input;
	printf("Enter symbol : ");input=getchar();
	if(input>=0&&input<=9)
	{
		putchar(input);printf(" is digit number");	
	}
	else if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
	{putchar(input);printf(" is vowel.");}
	else
	{putchar(input);printf(" is consonant");}
}*/


/*
#include<stdio.h>
main(){
	int input1,result[100],i=1,j;
	printf("Enter the hexadecimal number : ");scanf("%i",&input1);
	while(input1>0)
	{
			if(input1%2==0)
			{
				result[i]=0;
				input1=input1/2;	
			}
			else if(input1%2==1)
			{
				result[i]=1;
				input1=input1/2;
			}
			i++;
	}
	result[i]='\0';
	for(j=i-1;j>0;j--)
	{
		printf("%i",result[j]);
	}

}*/


/*
#include<stdio.h>
int main()
	{
	int input1,input2;
	printf("Enter 1st number : ");scanf("%i",&input1);
	printf("Enter 2nd number : ");scanf("%i",&input2);
	(input1%2==0? (input2%2==0? printf("Both number are even number."): printf("1st number is even and 2nd number is odd number.")) : (input2%2==0? printf("1st number is odd number and 2nd number is even number"):printf("Both number are odd number")));
	}
*/



//Square root table
/*#include<stdio.h>
int main()
{
	int input1,i,j;
	printf("Enter number : ");scanf("%i",&input1);
	printf("The output of square of Root number is");
	for(i=0;i<input1;i++)
	{
		printf("\n");
		for(j=0;j<input1;j++)
		printf("%i ",input1);
	}
}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
