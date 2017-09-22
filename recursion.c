#include<stdio.h>
int Fac(int f);
int main()
{
	int num=3,re;
	re=Fac(num);
	printf("Factorial result is %i",re);
}
Fac(int f)
{
	int re1;
	if (f<=0)
	return 1;
	return re1=f*Fac(f-1);
}
