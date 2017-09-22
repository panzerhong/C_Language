#include<stdio.h>
#include<math.h>
#define F(x) pow(x,2)
#define S(z) 4*z+9*z
void main()
{
	int x,y,z;
	printf("Enter the value of 'X' : ");scanf("%d",&x);
	y=F(x);
	printf("\nSolution : %d",y);
	printf("\nEnter the number of z : ");scanf("%d",&z);
	z=S(z);
	printf("\nSolution of Z : %d",z);
}
/*We usually use this declaration (define) to form the formulation*/
