#include<stdio.h>
main()
{
	
	int num=212, i;
	// Bitwise
	printf("Complement = %d",~35);
	printf("\nComplement = %d",~-12);
	
	for (i=0;i<2;i++)
	{
		printf("\nright shift by %d : %d",i,num>>i);
		printf("\n");
	}
	
	for (i=0;i<=2;i++)
	printf("\nLeft Shift by %d : %d",i,num<<i);
	
	
	// Shift Operators in C programming
	
	// Right shift operator shifts all bits towards right by certian number of specified bits. It is denoted by>>.
	
}
