#include<stdio.h>

// Area of a rectangle 
/*
int main()
{
	int a,b;
	printf("Enter width of rectangle : ");scanf("%i",&a);
	printf("Enter length of rectangle : ");scanf("%i",&b);
	printf("The area of rectangle : %i",a*b);
}*/


//Find ASCII value of a character
/*int main()
{
	int i;
	for(i=0;i<=225;i++)
	printf("%d for %c\n",i,i);
}*/


// Conver Celsisus to Fahrenheit
/*int main()
{
	float cel;
	printf("Enter Celsius number : ");scanf("%f",&cel);
	printf("%f Celsius = %f Fahrenheit",cel,(cel*9/5)+32);
}*/


// 4 . Swap value of two varaiables
/*int main()
{
	int a,b;
	printf("Enter number each in order and b\n");scanf("%i %i",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("The result of swaping is a=%i and b= %i",a,b);
}*/


// 5. Check the give numer is odd or even
/*int main(){
	int a;printf("Enter nubmer : ");scanf("%i",&a);(a%2==0? printf("%i is even number.",a): printf("%i is odd number.",a));
}*/


// 6. Check whether a character is vowel or consonant 
/*int main()
{
	char c;c=getchar();fflush(stdin);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
	putchar(c);printf(" is vowel");}
	else 
	{
		putchar(c);printf(" is cosonant");
	}
	
}*/


//7 Find largest among three numbers
/*int main()
{
	int a,b,c;printf("Enter each number in order a,b and c\n");scanf("%i %i %i",&a,&b,&c);
	if(a==b&&b==c||b==a&&b==c||c==a&c==b)
	printf("They are all equal");
	else if(a>=b&&a>=c)
	printf("%i is the largest number",a);
	else if(b>=a&&b>=c)
	printf("%i is the largest number",b);
	else if(c>=a&&c>=b)
	printf("%i is the largest number",c);
}*/


// 8 Leap year checking
/*int main()
{
	int year;printf("Enter year number : ");scanf("%i",&year);
	
		if(year%100==0&&year%400==0||year%4==0&&year%100!=0){
			printf("%i is leap year",year);
		}	
		else
		printf("%i is not leap year",year);
	}/*
/*{
	int year;printf("Enter year number : ");scanf("%i",&year);
	(year>1000? (year%400==0? printf("%i is leap year",year): printf("%i is not leap year",year)) : (year%4==0? printf("%i is leap year",year): printf("%i is not leap year",year)));
}*/


// 9.Positive negative checking
/*int main()
{
	int a;printf("Enter number: ");scanf("%i",&a);(a%2==0 ? printf("%i is even number",a) : printf("%i is odd number",a));
}*/


// 10. Quadratic equation 
/*#include<math.h>
#define p(b) pow(b,2)
#define data(a,b,c) p(b)-(4*a*c)
int main()
{
	float a,b,c,x1,x2,d,e,x2a;
	printf("The general formular of quadratic equation is A*X^2 + B*X + C = 0\n\n Please input the coefficients number");
	printf("\nEnter the coefficients of x^2 : ");scanf("%f",&a);
	printf("\nEnter the coefficients of x : ");scanf("%f",&b);
	printf("\nEnter the constant number : ");scanf("%f",&c);
	e=data(a,b,c);
	d=sqrt(e);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	if(a+b+c==0)
	printf("\nx1 = 1 ,x2 = %.2f ",c/a);	
	else if(a-b+c==0)
	printf("\nx1 = -1 , x2 = %f",-c/a);
	else if (e==0)
	printf("\nx1 = x2 = %f",-b/(2*a));
	else if(e>0)
	printf("\nx1 = %f, x2 = %f",x1,x2);
	else
		printf("\nx1 = %f i, x2 = %f i, which(i^2=1)",x1,x2);
}*/





