#include<stdio.h>
#include<conio1.h>
#include<string.h>
struct user{
	char accname[100];int accid,age;float money;
};
int main()
{
	FILE *bank;
	struct user acc[1000];
	char recepu[100];
	int  recepp,q,i;
	start:
	bank = fopen("D://FILE/Bank.txt","w");
	
	gotoxy (10,2);printf("** Welcome to Idiot Banking **\n\n");gotoxy (10,2);printf("Enter Receiptionist Username : ");gets(recepu);
	if(strcmp(recepu,"yinmazatin")==0)
	{
		pass:
			clrscr();
		gotoxy (10,2);printf("Enter Receiptionist Password : ");scanf("%i",&recepp);clrscr();
		if(recepp==1234)
		{
			gotoxy (10,4);printf("Enter the quantity of customer accounts : ");scanf("%i",&q);clrscr();
			
			for(i=1;i<=q;i++)
			{
				gotoxy 	(10,2);printf("Enter %i Customer account information",i);
				gotoxy 	(10,4);printf("%i Customer's  name : ",i);scanf("%s",&acc[i].accname);
				gotoxy 	(10,6);printf("%i Customer's  ID : ",i);scanf("%i",&acc[i].accid);
				gotoxy	(10,8);printf("%i Customer's Age : ",i);scanf("%i",&acc[i].age);
				gotoxy	(10,10);printf("%i Customer's Money : ",i);scanf("%f",&acc[i].money);clrscr();
			}
			
		}
		else 
		{
			gotoxy (10,2);printf("Wrong Password,Try again");delay(2000);clrscr();goto pass;
		}
	}
	else
	{
		gotoxy (10,4);printf("Wrong Username,Try again");delay(1000);clrscr ();goto start;
	}
	for(i=1;i<=q;i++)
	{
		fprintf(bank,"%i/. Customer's name : %s\t\tID : %i\t\tAge : %i\tMoney : %f\n\n",i,acc[i].accname,acc[i].accid,acc[i].age,acc[i].money);
	}
	gotoxy (13,5);printf("Thank You");delay(5000);
}
