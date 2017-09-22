// PROGRAMS USING STRUCTURES
#include<stdio.h>
#include<conio1.h>
// 64. Student structure
	int password;
	struct infor {char name[99]; char sex;int age; float score;};
int main()
{
	start: system("cls");
	struct infor student[100];
	printf("\n\t\t\t\t\t*************** Student Enrollment ***************");
	printf("\nEnter password : ");
	scanf("%i",&password);
	if(password==1234)
	{
		clrscr();
		printf("OK");
	}
	else
	{
		printf("Wrong Password, Try again");
		goto start;	
	}
}
