#include <stdio.h>
#include<stdlib.h>
/*int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("d:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);
   return 0;
}*/
#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("d:\\program1.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
