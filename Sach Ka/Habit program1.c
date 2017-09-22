#include<stdio.h>
main()
{
	int a; char ch;
	start: system("cls");
	prinf("ZZzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
	printf("Enter the Password : ");
	scanf("%d",&a);
	printf("\n");
	if (a==1234)
	{
		printf("Welcome To Your Program!! \n 1.Academy Planning\n 2.Entertainment Planning.\n\n\n");
		printf("Enter number 1 for academy program\n");
		printf("Enter number 2 for entertainment program\n\n");
		scanf("%d",&a);

		if(a==1)
		{

					printf("\nWelcome to academy program!!\n\nPlease input the passcode for academy program :");
					scanf("%d",&a);
						if(a==12)
						{printf("ACADEMY\n\n -Army Media\n -Mobile application for tourist vision\n");}
					else
					{
						printf("Passcode is invalid,Try again");
					}

		}
		else if(a==2)
		{
				printf("Welcome to entertainment program!!\n\nPlease input the passcode for entertainment program : ");
				scanf("%d",&a);
					if(a==34)
					{
					printf("ENTERTAINMENT\n -Camera Learning\n -Drumming\n -Creat Flash Battery Charger\n");
					}
					else
					printf("Passcode is invalid,Try again\n\n");
		}
	}
	else
	printf("If you are not administrator of this program, Please don't try to input the wrong password. Thank you!!");
							printf("\n\nPress any key to start again");
						scanf("%c",&ch);
						goto start;
}
