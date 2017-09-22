#include<stdio.h>
/*void callbyvalue (int f);
int main()
{
	int x,z;
	printf("Enter the value of x : ");scanf("%i",&x);
	printf("Before call by value x=%i",x);
	callbyvalue(x);
	
}
void callbyvalue(int z)
{
	z+=10;
	printf("\nAfter call by value x=%i",z);
}*/

void callbyreferrence(int *f);
int main()
{
	
	int x;
	printf("Enter the value of x: ");scanf("%i",&x);
	printf("Before call by reference x=%i",x);
	callbyreferrence(&x);
}
void callbyreferrence(int *p)
{
	printf("\nAfter passing the reference of *p= = %i",*p);
}

/* The biggest advantage of using call by value and call by reference is no doubling memory allocation to make the program in bigger size
The 2 reasons why this is not a good idea and tha t you ( the programmer_ need to chose beween call by valuda nd cll by refgferecne. 
SIDE EFFECT AND PRIVACY

Only Use CALL BY REFERENCE IF DATA CHANGES ARE EXPECTED.
