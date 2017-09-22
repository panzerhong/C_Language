#include<stdio.h>
// 48. Facotorial using function . "RECURSION"
/*void main()
{
	int num,x;printf("Enter number : ");scanf("%i",&num);
	printf("%i",fac(num));	
}
int fac(num)
{
	if(num==0)return 1;
	else
	return num*fac(num-1);
}*/


// 49. Min and Max of array 
/*void maxmin();
int main()
{
 	maxmin();
}
void maxmin()
{
	int num[100],i,q,max,min;
	printf("Enter quantity of number :");scanf("%i",&q);
	for(i=1;i<=q;i++)
	{
		scanf("%i",&num[i]);
	}
	max=num[1];
	for(i=1;i<=q;i++)
	{
		if(num[i]>=max)
		max=num[i];
	}
	min=num[1];
	for(i=1;i<=q;i++)
	{
		if(num[i]<=min)
		min=num[i];
	}
	printf("Maximum number = %i\nMinimum number = %i",max,min);
}*/


// 50.Bubble Sort
/*int numsort(int sort);
main()
{
	int q,i;
	printf("Enter quantity of number : ");scanf("%i",&q);
	numsort(q);
}
int numsort(q)
{
	int num[100],i=1,j,sort[100],k;
	do{
		scanf("%i",&num[i]);
		i++;
	}while(i<=q);
	for(j=1;j<=q;j++)
	{
		for(i=j+1;i<=q;i++)
		{
			if(num[j]>=num[i])
			{
				k=num[j];
			num[j]=num[i];
			num[i]=k;
			}
		}
	}
	for(j=1;j<=q;j++)
	printf("\n%i",num[j]);	
}*/


//51. Convert : Bin to dec and dec to bin
/*#include<math.h>
void Bindec();
int main()
{
	Bindec();
}
void Bindec()
{
	int num,i=0,a[100],sum=0,j;
	printf("Enter Binary number : ");scanf("%i",&num);
	while(num>0)
	{
		if(num%10==1)
		{
			a[i]=pow(2,i);
		}
		else
		a[i]=0;
		num/=10;
		i++;
	}
	for(j=0;j<i;j++)
	sum+=a[j];
	printf("Decimal = %i\n\n",sum);
	i=0;
	while(sum>0)
	{
		a[i]=sum%8;
		i++;
		sum/=8;
	}
	i-=1;
	printf("Octal =");
	do
	{
		printf("%i",a[i]);i--;
	}while(i>=0);
}*/


// 52. Bin to oct; oct to bin
#include<math.h>
int binoct(int a);
int octbin(int b);
long long bin,oct,i=0,j,rebin=0,reoct=0,x,y,z,a[100],oct1,b[100];
int main()
{
	printf("Enter Binary number : ");scanf("%lld",&bin);
	binoct(bin);
	printf("\n\nEnter Ocatal number : ");scanf("%lld",&oct);oct1=oct;
	octbin(oct);
}
int binoct(bin)
{
	printf("%d binary = ",bin);
	while(bin>0)
	{
		if(bin%10==1)
		{
			x=pow(2,i);
			rebin+=x;
		}
		i++;
		bin/=10;
	}
	i=0;
	while(rebin>0)
	{
		a[i]=rebin%8;
		i++;
		rebin/=8;
	}
	for(j=i-1;j>=0;j--)
	printf("%lld",a[j]);printf(" Octal");
}

int octbin(oct)
{
	i=0;
	while(oct>0)
	{
		x=oct%10;
		y=pow(8,i);
		z=x*y;
		reoct+=z;
		oct/=10;
		i++;
	}
	printf("\n%i Octal = ",oct1);printf("%lld Decimal",reoct);
	i=0;
	printf("\n%i Octal = ",oct1);
	while(reoct>0)
	{
		if(reoct%2==1)
		b[i]=1;
		else
		b[i]=0;
		i++;
		reoct/=2;
	}
	i--;
	do
	{
		printf("%lld",b[i]);
		i--;	
	}while(i>=0);printf(" Binary");
}


// 53. Dec to Hex


// Octal to decimal; decimall to oct
/*#include<math.h>
void octdec();
void decoct();
long long i=0,oct,x,y,z,dec=0,a[100];
int main()
{
	printf("Every element in OCTAL NUMBER CANNOT MORE THAN 7\n\n");
	octdec();
	decoct();
}
void octdec()

{
	printf("Enter Octal number : ");scanf("%lld",&oct);
	while(oct>0)
	{
		x=pow(8,i);y=oct%10;z+=x*y;
		i++;oct/=10;
	}
	printf("\n%lld decimal",z);
}
void decoct()
{
	i=0;
	printf("\n\nEnter Decimal number : ");scanf("%lld",&dec);
	while(dec!=0)
	{
		a[i]=dec%8;
		dec/=8;
		++i;
	}
	printf("\nOctal number ");
	i=i-1;
	while(i>=0)
	{
		printf("%lld",a[i]);
		i--;
	}
}*/


// 55. Stack operation using function
/*int main()
{
	
}*/


//56. Factorial using recursive function
/*long long fac(int n);
int main()
{
	int num,x;printf("Enter number : ");scanf("%i",&num);
	x=fac(num);
	printf("Factorial number is %i",x);
}
long long fac(num)
{
	if(num==0)
	return 1;
	else
	return num*fac(num-1);
}*/


// 57. Fibonacci using recursive function
/*int fib(int num);
int n,a[100],i=0;
int main()
{
	int num;printf("Enter number : ");scanf("%i",&n);a[0]=0,a[1]=1;
	printf("The fibonaci number are\n %i %i",a[0],a[1]);
	for(i=2;i<=n;i++)
	{
		a[i]=fib(i);
		printf(" %i",a[i]);
		printf("  %i",a[-1]);
	}
	
}
int fib(i)
{
	a[0]=0;a[1]=1;
	if(i==0)
	return 1;
	else
	return a[i-2]+fib(i-1);
}*/


//58. Sum of N numbers using recursion
/*int sum(int a);
int a[100],q,i,j,x,b[100];
int main()
{
	printf("Enter quantity : ");scanf("%i",&q);
	printf("Enter each number\n");
	for(i=0;i<q;i++)
	scanf("%i",&a[i]);
	j=i-1;
	printf("Sum = %i",sum(j));
}
int sum(j)
{
	if(j==0)
	return a[0];
	else
	return a[j]+sum(j-1);
}*/
/*int sum(int a);
int n,x,a;
int main()
{
	printf("Enter number : ");scanf("%i",&n);
	x=sum(n);
	printf("Output = %i",x);
}
int sum(a)
{
	if(a==0)
	return 0;
	else
	return a+sum(a-1);
}*/


// 59. Reverse the using recursive function
/*void rev();
	 int main()
	{
		puts("Enter Sentences\n\n");
	 rev();
		
	}
void rev()
	{
		char c;scanf("%c",&c);
		if(c != '\n')
		{
			rev();
			printf("%c",c);
		}
	}*/

// 60. Power using recursion
/*int ow(int q, int num);
int q,num,a,b;
int main()
{
	printf("Enter Number to power : ");scanf("%i",&num);
	printf("Enter power number : ");scanf("%i",&q);
	printf("The result is %i",ow(num,q));
}
int ow(a,b)
{
	if(b!=0)
	{
		return a*ow(a,b-1);
	}
	else
	return 1;
}*/


// 61. Towers of Hanoi



// 62. Exponent using recursion
/*float ep(float e,int a);
int n,b;float e,a;
main()
{
	printf("Enter exponent power number : ");scanf("%d",&n);
	e=2.71;
	printf("The output is %f",ep(e,n));
}
float ep(float a,int b)
{
	if(b==0)
	return 1;
	else
	return a*ep(a,b-1);
}*/


// 63. GCD using recurison





	
