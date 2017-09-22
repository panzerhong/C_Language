#include<stdio.h>
void demostatic();
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		demostatic();
	}
}
void demostatic()
{
	static x=10;
	x=x+2;
	printf("\nX=%d",x);
}
/*We can use static to initialize the value of variable in sequential way
	The program starts to execute then go to 
	demostatic() 1 call function then call user define function and start static
	the value of static x=10 - x=10+2 print X=12
	the vaue of static x=10 doesn't execute or initialize. x= 12+2, print X=14
	the value of static x=10 doesn't execute or initialize x=14+2, print X=16*/
