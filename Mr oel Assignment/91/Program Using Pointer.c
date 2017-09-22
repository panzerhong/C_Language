// VII. Programs using Pointers 
#include<stdio.h>

// 84. Area of circle using pointers
/*int main()
{
 	float *p,rd,area;
	printf("Enter radius number of circle : ");scanf("%f",&rd);
	p=&rd;
	area=*p*3.14**p;
	printf("Area = %f",area);
	printf("\n\nEnter readius 1 number of cicle : ");scanf("%f",p);
	area=*p *3.14 * *p;
	printf("\narea = %f",area);
}*/
// 85. function pointers
/*void my_int_func(int x)
{
    printf( "%d\n", x );
}*/
#include<conio1.h>
void myfunction(int x)
{
	printf("%d\n",x);
}
int main()
{
	int y=5;
	void (*foo)(int y);// And The syntax of declaring pointer must be LIKE THIS!!! foo is pointer which is used to point function
		
	//The ampersand is actually optional 
	foo=&myfunction;
	(*foo)(12);
	printf("Enter nubmer of X"); scanf("%i",&y);
	foo(y);
	printf("Game is my life");
	bb:
		printf("aaaa");
}
/*
int main()
{
    void (*foo)(int);
    foo = &my_int_func;

    // call my_int_func (note that you do not need to write (*foo)(2) ) 
    foo( 2 );
    // but if you want to, you may 
    (*foo)( 2 );
    return 0;
}*/

/*Let's go back to the sorting example where I suggested using a function pointer to write a generic sorting routine where the exact order could be specified by the programmer calling the sorting function. It turns out that the C function qsort does just that. 

From the Linux man pages, we have the following declaration for qsort (from stdlib.h):
 void qsort(void *base, size_t nmemb, size_t size,
            int(*compar)(const void *, const void *));
Note the use of void*s to allow qsort to operate on any kind of data (in C++, you'd normally use templates for this task, but C++ also allows the use of void* pointers) because void* pointers can point to anything. Because we don't know the size of the individual elements in a void* array, we must give qsort the number of elements, nmemb, of the array to be sorted, base, in addition to the standard requirement of giving the length, size, of the input. 

But what we're really interested in is the compar argument to qsort: it's a function pointer that takes two void *s and returns an int. This allows anyone to specify how to sort the elements of the array base without having to write a specialized sorting algorithm. Note, also, that compar returns an int; the function pointed to should return -1 if the first argument is less than the second, 0 if they are equal, or 1 if the second is less than the first. 

For instance, to sort an array of numbers in ascending order, we could write code like this:*/
/*#include <stdlib.h>

int int_sorter( const void *first_arg, const void *second_arg )
{
    int first = *(int*)first_arg;
    int second = *(int*)second_arg;
    if ( first < second )
    {
        return -1;
    }
    else if ( first == second )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int array[10];
    int i;
    /* fill array
    for ( i = 0; i < 10; ++i )
    {
        array[ i ] = 10 - i;
    }
    qsort( array, 10 , sizeof (int), int_sorter );
    for ( i = 0; i < 10; ++i )
    {
        printf ( "%d\n" ,array[ i ] );
    }
}*/


//86. Duplication removals using pointers
/*#include<stdio.h>
char *removedps(char *x)
{
    int Ar[256] = {0};
    int ip=0;
    int op=0;
    char temp;
    while(*(x+ip))
    {
       temp  = (*(x+ip));
       if (!Ar[temp])  {
         Ar[temp] = 1;
         *(x+ip) = *(x+op);
         op++;
       }
       ip++;
       *(x+op) = '\0';
    }
  return x;
}

int main()
{
  char lo[] = "0001";
  printf("%s",removedps(lo));    
}*/



// 87.Sorting integer array using pointers
/*int main()
{
	int q,*p[100],num[100],sw[100],i=1,j;
	printf("Enter quantity of number : ");scanf("%d",&q);
	printf("\n\nEnter the value of each number\n");
	do
	{
		printf("%c/. ",64+i);scanf("%i",&num[i]);
		p[i]=&num[i];
		i++;
	}while(i<=q);

	for(i=1;i<=q;i++)
	{
		for(j=i+1;j<=q;j++)
		{
			if(*p[i]>=*p[j])
			{
				sw[i]=*p[i];
				*p[i]=*p[j];
				*p[j]=sw[i];
			}
		}	
	}
	printf("\n\nAfter Sorting\n");
	i=1;
	do
	{
		printf("\n%c/. %d",64+i,*p[i]);
		i++;
	}while(i<=q);
}*/


// 88. Sum of array using pointer 
/*main()
{
	int q,num[100],i=1,sum=0,*p[100],*q1;
	printf("Enter quantity of number : ");scanf("%d",&q);
	printf("Enter each number\n");
	do
	{
		printf("%c/. ",64+i);
		scanf("%d",&num[i]);
		p[i]=&num[i];
		i++;	
	}
	while(i<=q);
	for(i=1;i<=q;i++)
	sum+=*p[i];
	printf("Result = %i",sum);
}*/


// 89.Count number of words using pointers
#include<stdlib.h>
/*main()
{
	char *text=malloc(100); int i=0,count=0;
	printf("Enter TEXT\n");gets(text);
	while(*text)
	{
		if(*text==' ')
		count++;
		*text++;
	}
	count++;
	printf("There are %d word the text",count);
}*/


// 90. Length of a string using pointers
#include<stdlib.h>
#include<string.h>
/*main()
{
	char *string=malloc(1);int count=0;
	printf("Enter string : ");gets(string);
	do
	{
		count++;
		*string++;	
	}while(*string!='\0');
	printf("The length of string is %d",count);
}*/
/*main()
{
	char *string=malloc(1);int count=0;
	printf("Enter string : ");gets(string);
	printf("The length of string is %d",strlen(string));
}*/


// 91. Reverse the String Using Pointers
/*main()
{
	char *string=malloc(1);int count=0;
	printf("Enter string : ");gets(string);
	printf("After Reverse is ( %s )",strrev(string));
}*/
/*main()
{
	char *string=malloc(1),k[100];int count=0,j=0;
	printf("Enter string\n");gets(string);
	do
	{
		k[j]=*string;
		*string++;
		j++;
	}
	while(*string!='\0');
	j--;
	printf("\n\nAfter Reverse\n\n");
	do
	{
		printf("%c",k[j]);
		j--;
	}while(j>=0);
}*/
