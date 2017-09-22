#include<stdio.h>
#include<string.h>
union book
{
	int no;
	char name[30];
	float price;
};
void main()
{
	union book b ;
	b.no =10;
	printf("\nNumber : %d",b.no);
	strcpy(b.name,"C Programming");
	printf("\nName : %s",b.name);
	b.price=100.0;
	printf("\nPrice : Rs.%.2f",b.price);
}

