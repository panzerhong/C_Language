#include<stdio.h>
int main()
{
	long int binary,remainder,hexa=0,i=1;
	printf("Enter number : ");scanf("%ld",&binary);
	 while(binary!=0)
	 {
	 	remainder=binary%10;
	 	hexa+=remainder*i;
	 	i=i*2;
	 	binary/=10;
	 }
	 printf("\n%lo",hexa);
	 printf("%lX",hexa);
	 return 0;
}
/*#include <stdio.h>
 
int main()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lo", hexadecimalval);
    return 0;
}*/
