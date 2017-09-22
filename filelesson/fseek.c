/*#include<stdio.h>
#include<stdlib.h>
struct threeNum
{
	int n1,n2,n3;
};
int main()
{
	int n;
	struct threeNum num;
	FILE *fptr;
	if((fptr = fopen("d:\\fseek.txt"))==NULL)
	{
		printf("Error! opening file");
		// Program exits if the file pointer return NULL.
		exit(1);
	}
	fseek(fptr, sizeof(struct threeNum),1,fptr);
	for(n=1;n<5;++n)
	{
		fread(&num,sizeof(struct threeNum),SEEK_END);
		printf("n1: %d\tn2: %d\tn3: %d",num.n1,num.n2,num.n3);
	}
	fclose(fptr);
	return 0;
}*/
// Moves the cursor to the end of the file


#include <stdio.h>
#include<stdlib.h>
struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   
   // Moves the cursor to the end of the file
   fseek(fptr, sizeof(struct threeNum), SEEK_END);

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
   }
   fclose(fptr); 
   return 0;
}

