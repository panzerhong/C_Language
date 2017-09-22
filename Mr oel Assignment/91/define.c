/*#include <math.h>    
#include <stdio.h>    

int main(void)    
{    
double x = 4.0, result;    

result = sqrt(x);    
printf("The square root of %lf is %lfn", x, result);    
return 0;    
} */
#include<stdio.h>
#include<math.h>
int main()
{
	int a=2,b;
	b=pow(a,3);
	printf("%i",b);
}
/*#include<stdio.h>
#include<math.h>
#define x(y) y+3
#define data(b,c,y) pow(b,c)+x(y)
int main(){
	int b,c,d,y,z;scanf("%i",&b);scanf("%i",&c);
	printf("y");scanf("%i",&y);
	z=x(y);
	d=data(b,c,y);
	printf("%i",d);
}*/


/*#include<stdio.h>
#include<math.h>
#define x(y) y+3
#define data(b,c,y) pow(b,c)+x(y)
int main(){
	int z,a,b,c,y,o;
	scanf("%i",&b);scanf("%i",&c);
	printf("y\n");scanf("%i",&y);
	o=data(b,c,y);
	z=sqrt(o);
	printf("\n\n%i",z);
}*/

