#include<stdio.h>
/*Program to create array of structure and read or printf data of books*/
void thing1();
void main()
{
	printf("\n\t\t\t\tWELCOME TO IDIOT BOOKSTORE\n\n\t\t\t********************************************\n");
	thing1();
}


void thing1()
{
	FILE *p;
	struct paper{char name[100];int code;float price;}book[100];
	signed int i,n;
	p=fopen("D://S/File of Dev C++/Sach ka/BookInformation/Book Store.txt","a");
	printf("\nEnter the quantity of book : "); scanf("%d",&n);
	printf("Enter all the information from each book");
	for(i=1;i<=n;i++)
	{	
		printf("\n\nBook %d\nName: ",i);scanf("%s",&book[i].name);
		printf("Book 's code : ");scanf("%d",&book[i].code);
		printf("Book 's price : ");scanf("%f",&book[i].price);
	}
	printf("\n\n\t\t\t************************************************\n\t\t\t\t\t Book Information\n\n");
	for(i=1;i<=n;i++)
	{
		printf("\n%d/ Book's name: %s\t\t Book's code: %d\t\tBook's price: %.2f\n",i,book[i].name,book[i].code,book[i].price);
		fprintf(p,"\n%d/ Book's name: %s\t\t Book's code: %d\t\tBook's price : %.2f\n",i,book[i].name,book[i].code,book[i].price);	
	}
}
