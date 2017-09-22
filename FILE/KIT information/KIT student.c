#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct member{	int age,rank;char sex[100],name[100];};
	struct member student[1000];int i=1,q;
	FILE *ptr;
	ptr = fopen ("D://FILE/BatchIII Information.txt","ab");
	printf("Enter the quantity of student : ");scanf("%i",&q);
	while(i<=q)
	{
		printf("Enter the information of student %i\n",i);
		printf("\t Name : ");scanf("%s",&student[i].name);	
		printf("\t Sex  : ");scanf("%s",&student[i].sex);
		printf("\t Age  : ");scanf("%i",&student[i].age);
		printf("\t Rank : ");scanf("%i",&student[i].rank);
		printf("\n");
		i++;
	}
	for(i=1;i<=q;i++)
	{
		fprintf(ptr,"Student %i's Name : %s\t Sex : %s\tAge : %i\tRank : %i\n",i  ,student[i].name, student[i].sex, student[i].age, student[i].rank);
		fflush(stdin);
	}
}
