//Array Pointer
/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int *rr[4];
	int a=1,b=2,c=3,d=4,m;
	rr[0]=&a;
	rr[1]=&b;
	rr[2]=&c;
	rr[3]=&d;
	for(m=0;m<=3;m++)
	{
		printf("\n%d",*rr[m]);
	}
}*/



/*int main()
{
	int *p,y=3,x;
	p=&y;
	x=*p;
	printf("%i",*p);
	printf("\n%i",x);
}*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*main()
{
	int *num[100],*table;
	int size,i;
	printf("\n What is the size number?  ");scanf("%d",&size);
	printf("\n Enter the value of size number\n\n");
	for(i=1;i<=size;i++)
	{
		printf("%c/. ",64+i);scanf("%d",&num[i]);
	}
	printf("\n\n");
	printf("REMEMBER : For Loop using scanf(persentage d,&num[i],printf(percentage d),num[]) don't use * in loop pointer for printing\n\n");
	for(i=1;i<=size;i++)
	{
		printf("%c/. ",64+i);printf("%d\n",num[i]);
	}
}*/
/*main()
{
	int *p;
	int *fun();
	p=fun();
	printf("\n%d",p);
}
int *fun()
{
	int i=20;
	i=i+10;
	return(i);
}*/
/*#include<stdarg.h>
#include<stdio.h>
main()
{
	int max;
	max=findmax(5,23,15,1,92,50);
	printf("\nmax=%d",max);
	max=findmax(3,100,300,29);
	printf("\n max=%d",max);
}
findmax(int tot_num)
{
	int max,count,num;
	va_list ptr;
	va_start(ptr,tot_num);
	max=va_arg(ptr,int);
	for(count=1;count<tot_num;count++)
	{
		num=va_arg(ptr,int);
		if(num>max)
		max=num;
	}
	return(max);
}*/
/*main(){
	int i=3;
	int *j;
	int **k;
	j=&i;	// j is pointer
	k=&j;	// k is pointer to pointer which point to pointer j
	printf("\n address of i = %d",&i);
	printf("\n address of i = %d",j);
	printf("\n address of i = %d",*k);
	printf("\n address of j = %d",&j);
	printf("\n address of j = %d",k);
	printf("\n address of k = %d",&k);
	printf("\n\n value of i = %d",i);
	printf("\n Value of i = %d",*j);
	printf("\n Value of i = %d",**k);
	
}*/
/*#include<stdio.h>
typedef struct
{
	char *name;
	int acc_no;
	char acc_types;
	float balance,account;
};
main()
{
	void chang(account *pt);
	static account person = {"chetan",4323,'R',12.45};
	printf("%s %d %c %2.f\n"),person.name,person.acc_type,peron.balance);
	change(&person);
	printf("%s %d %c %2.f\n",person.name,person.acc_type,person.acc_type,peron.balance);
	getch();
}
void change(account *pt)
{
	pt->name="Rohit R";
	pt->acc_no=1111;
	pt->acc_type='c';
	pt->balance=44.12;
}
*/


#include<stdio.h>
/*Union declaration is similar as structure, 
but the difference is union cannot use array and structure has its own storage
 while all the member in union use the same location.However we can use only one
 of them at a time. This is due to the fact that only one location is allocated for a union 
 variable, irrespective of its size*/
union aaa
{
	char student[500];
	float score;
};
main()
{
	union aaa te[100];int q,i;
	printf("Enter the quantity of student : ");scanf("%i",&q);
	for(i=1;i<=q;i++)
	{
			printf("\n\nEnter student name, age, score\n");
	scanf("%s %f",&te[i].student,&te[i].score);
	}
		for(i=1;i<=q;i++)
		{
			printf("\n %s student\n%d age\n%f Score",te[i].student,te[i].score);
		}
	
}
/*#include<stdio.h>
union aaa
{
	char student[500];
	float score;
};
main()
{
	union aaa te;
	
	printf("Enter student name ,score\n");
	scanf("%s %f",&te.student,&te.score);
	printf("\nStudent name : %s\nStudent score : %f\n",te.student,te.score);
}*/
 
