// PROGRAMS USING STRUCTURES
#include<stdio.h>
/*#include<stdio.h>
#include<conio1.h>
// 64. Student structure
	int q,i=1,halow,maxmin=0,min;
	struct infor {char name[99]; char sex;int age; float score;};
int main()
{
	struct infor student[100];
	printf("Enter the quantity of student : ");scanf("%i",&q);
	do
	{
		printf("\n\nStudent %i name : ",i);scanf("%s",&student[i].name);
		printf("Student %i sex : ",i);scanf("%s",&student[i].sex);
		printf("Student %i age : ",i);scanf("%i",&student[i].age);
		printf("Student %i score : ",i);scanf("%f",&student[i].score);
		i++;
	}while(i<=q);
	i--;maxmin=0;
	do
	{
		if(student[i].score>=maxmin)
		{
			maxmin=student[i].score;
			halow=i;
		}	
		i--;
	}
	while(i>=1);
	i++;
	maxmin=student[1].score;
	do
	{
		if(maxmin>=student[i].score)
		{
			maxmin=student[i].score;min=i;
		}
		i++;
	}while(i<=q);
	printf("\n\n\n\t\t*****************************************************************************");
	
	printf("\n\n\t\t\t\t\t***** Student Information *****");printf("\n\n\tStudent No\t\tName\t\tSex\t\t\tAge\t\tScore");
	for(i=1;i<=q;i++)
	{
		printf("\n\tStudent %i\t\t%s\t\t%c\t\t%i\t\t%f",i,student[i].name,student[i].sex,student[i].age,student[i].score);
	}
	printf("\n\nStudent %i name %s sex %c age %i has the highest score %f",halow,student[halow].name,student[halow].sex,student[halow].age,student[halow].score);
	printf("\n\nStudent %i name %s sex %c age %i has the highest score %f",min,student[min].name,student[min].sex,student[min].age,student[min].score);
}*/


// 65. Players structure



// 66. Add two polynomials using structures in function
/*void polynomials();
int main()
{
	polynomials();
}
void polynomials()
{
	struct poly{int x[100],num[100];} s[100],cof[100];int num,i=1,j=1,ele;
	
	printf("Enter quantity of equation : ");scanf("%i",&num);
	do
	{
		printf("\n\n%i equation :\n",j);
		printf("Enter the quantity element of %i equation : ",j);scanf("%i",&ele);
		for(i=ele-1;i>=0;i--)
		{printf("Enter the pow number of x : ");scanf("%i",&s[j].x[i]);printf("Enter the coefficient num of x>%i : ",s[j].x[i]);scanf("%i",&cof[j].num[i]);}
		
		j++;
	}while(j<=num);
	
	j=1;
	do
	{
		printf("\n%i Equation = ",j);
		for(i=ele-1;i>=0;i--)
		{
			printf("+(%i X>%i)",cof[j].num[i],s[j].x[i]);
		}
		j++;
	}while(j<=num); 
	
	k=s[1].x[0];
		for(i=ele-1;i>=0;j--)
		{
			for(j=1;j<=num;j++)
			{
				
				s[j].x[i]=
			}	
		}
}*/
/*#include<conio1.h>
struct add{ int year,month,day,hour,minute,second;};
int main()
{
	struct add time[100];
	int q,i,sumyear=0,summonth=0,sumday=0,sumhour=0,summinute=0,sumsecond=0;
	printf("Enter quantity of timing : ");scanf("%i",&q);
	printf("Enter time data\n");
	for(i=1;i<=q;i++)
	{
		printf("\nTime %c/.",i+64);
		printf("\nYear %c : ",i+64);scanf("%i",&time[i].year);
		printf("Month %c : ",i+64);scanf("%i",&time[i].month);
		printf("Day %c : ",i+64);scanf("%i",&time[i].day);
		printf("Hour %c : ",i+64);scanf("%i",&time[i].hour);
		printf("Minute %c : ",i+64);scanf("%i",&time[i].minute);
		printf("Second %c : ",i+64);scanf("%i",&time[i].second);
	}
	for(i=1;i<=q;i++)
	{
		sumyear+=time[i].year;
		summonth+=time[i].month;
		sumday+=time[i].day;
		sumhour+=time[i].hour;
		summinute+=time[i].minute;
		sumsecond+=time[i].second;	
	}
	if(sumsecond>=60)
	{
		sumsecond-=60;
		summinute++;
	}
	if(summinute>=60)
	{
		summinute-=60;
		sumhour++;
	}
	if(sumhour>=24)
	{
		sumhour-=24;
		sumday++;
	}
	if(sumday>=30)
	{
		sumday-=30;
		summonth++;
	}
	if(summonth>=12)
	{
		summonth-=12;
		sumyear++;
	}
	printf("The sum of\n year = %i,month = %i,day = %i,Hour = %i, Minute = %i, Second = %i",sumyear,summonth,sumday,sumhour,summinute,sumsecond);
}*/


// 68. Adding 2 complex number using structure
/*struct complex { int real;int imag;};
int main()
{
	struct complex comp1,comp2,sum;
	printf("1st Complex number\n");
	printf("Enter Real and imagenary part respectively\n");scanf("%d %d",&comp1.real,&comp1.imag);
	printf("\n2nd Complex number\n");
	printf("Enter Real and imagenary part respectively\n");scanf("%d %d",&comp2.real,&comp2.imag);
	sum.real=comp1.real+comp2.real;
	sum.imag=comp1.imag+comp2.imag;
	printf("\n\nThe result is\n");
	printf("%d + %di",sum.real,sum.imag);
}
#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;
complex dd(complex n1,complex n2);

int main()
{
    complex n1, n2, temp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = dd(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}

complex dd(complex n1, complex n2)
{
      complex temp;

      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;
      return(temp);
}*/

// 67.Adding two distance
/*int main()
{
	struct measurment { float feet; float inch;	} element1,element2,sum;
	printf("1st distance\nEnter 1 feet : ");scanf("%f",&element1.feet);
	printf("Enter 1 inch : ");scanf("%f",&element1.inch);
	printf("2nd distance\nEnter 2 feet : ");scanf("%f",&element2.feet);
	printf("Enter 2 inch : ");scanf("%f",&element2.inch);
	sum.feet=element1.feet+element2.feet;
	sum.inch=element1.inch+element2.inch;
	while(sum.inch>12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	printf("The output is %.2f\'- %.2f\" ",sum.feet,sum.inch);
}*/

// 66. Add two polynomials using structures in function
/*struct polynomial{ int num[100];};
int main()
{
	struct polynomial pol1,pol2,sum;
	int q1,i,q2;
	printf("Enter quantity of element in 1st polynomials number : ");scanf("%i",&q1);
	printf("Enter the cofficeint of each element in 1st polynomials\n");
	for(i=1;i<=q1;i++)
	{
		scanf("%i",&pol1.num[i]);	
	}
	printf("Enter quantity of element inf 2nd polynomials number : ");scanf("%i",&q2);
	for(i=1;i<=q2;i++)
	{
		scanf("%i",&pol2.num[i]);
	}
	printf("\n1st polynomials equation\n");
	for(i=1;i<=q1;i++)
	{
		if(i==q1)
		{
			printf("%i%c",pol1.num[i],64+i);
		}
		else
		printf("%i%c +",pol1.num[i],64+i);
	}
	for(i=q1+1;i<=q1+q2;i++)
	pol1.num[i]=0;
	printf("\n2nd polynomials equation\n");
	for(i=1;i<=q2;i++)
	{
		if(i==q2)
		{
			printf("%i%c",pol2.num[i],64+i);
		}
		else
		printf("%i%c +",pol2.num[i],64+i);
	}
	for(i=q2+1;i<=q1+q2;i++)
	pol2.num[i]=0;

	printf("\nThe output of adding\n");
	if(q1<q2)
	{
			for(i=1;i<=q1;i++)
		{
			sum.num[i]=pol1.num[i]+pol2.num[i];
			printf("%i%c +",sum.num[i],64+i);
		}
	}
	if(q2>q1)
	{
		for(i=q1+1;i<=q2;i++)
		printf("%i%c",pol2.num[i],64+i);
	}
	
	if(q1>q2)
	{
			for(i=1;i<=q2;i++)
		{
			sum.num[i]=pol1.num[i]+pol2.num[i];
			printf("%i%c +",sum.num[i],64+i);
		}
	}
	if(q2<q1)
	{
		for(i=q2+1;i<=q1;i++)
		if(i==q1)
		printf("%i%c",pol1.num[i],64+i);
		else
		printf("%i%c +",pol1.num[i],64+i);
	}
}*/


#include <stdio.h>
int main()
{
 struct scores
 {
 char name[32];
 int score;
 };
 struct scores player[4];
 int x;
 for(x=0;x<4;x++)
 {
 printf("Enter player %d: ",x+1);
 scanf("%s",player[x].name);
 printf("Enter their score: ");
 scanf("%d",&player[x].score);
 }
 puts("Player Info");
 printf("#tNametScoren");
 for(x=0;x<4;x++)
 {
 printf("%dt%st%5dn",
 x+1,player[x].name,player[x].score);
 }
 return(0);
}



