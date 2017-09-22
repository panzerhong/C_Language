#include<stdio.h>
main()
{
	float a,b,result; char ch; int number;
	start: system("cls");
	printf("\tCRAZY CALCULATOR\n\n");
	printf("\nEnter 1st number : ");
	scanf("%f",&a);
	printf("Enter arithmetic operator: ");
	ch=getch();
	switch(ch)
	{
		case'+':  printf("+ \nEnter the 2nd number : ");scanf("%f",&b);result=a+b;break;
		case'-': printf("- \nEnter the 2nd number : ");scanf("%f",&b);result=a-b;break;
		case'*': printf("* \nEnter the 2nd number : ");scanf("%f",&b);result=a*b;break;
		case'/': printf("/ \nEnter the 2nd number : ");scanf("%f",&b);result=a/b;break;
		default: printf("Wrong input, try again");

	}
	printf("\nResult = %.2f",result);
		printf("\n\nEnter anykey number to start again");
		scanf("%d",&number);
		goto start;
}
