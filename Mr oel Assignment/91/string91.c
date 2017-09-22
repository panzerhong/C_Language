// VI. PROGRAMS USING STRINGS

// 70. Program to Count blanks, Tabs and Newline
#include<stdio.h>
/*int main()
{
	char text[500];int i=0,blank=0,tab=0,newline=0;
	printf("Enter ! to calculate the blanks, tabs and newline in Text");
	printf("Enter Text\n\n"); gets(text);
	do
	{
		if(text[i] ==' ')
		blank++;
		else if(text[i]=='\t')
		tab++;
		else if(text[i]=='\n')
		newline++;
		i++;
	}while(text[i]!='!'||text[i]=='\n');
	printf("In text, There are : \nBlanks = %i\nTabs = %i\nNewline = %i",blank,tab,newline);
}*/
/* Write a program to count blanks, tabs and newlines */
/*int main() {
    int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != '!') {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}*/


// 71. Palindrome checking
/*#include<string.h>
main()
{
	char string[100],x[100],y[100];
	printf("Enter String\n");gets(string);
	strcpy(y,string);
	strrev(string);
	if(strcmp(string,y)==0)
	{
		printf("\n\nReversed String ");puts(y);printf(" is Palindrome");
	}
	else
	{printf("\n\nReversed String ");puts(string);printf(" is not Palindrome");}
}*/



// 72. Convert a name into its ascii values
/*main()
{
	char string[100];int i;
	printf("Enter your name to convert to ascii value : ");gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c = %d    ",string[i],string[i]);
	}
}*/


// 73.Calculating string length without strlen function
/*int main()
{
	int i=0,count=0;char string[500*1000];
	printf("Enter Text\n\n");gets(string);
	do
	{
		count++;
		i++;
	}while(string[i]!='\0');
	printf("\n\nThe string length is %i",count);
}*/


// 74.Comparing 2 strings without strcmp function
/*int main()
{
	int c[100],j=0,i,k=0; char string1[100],string2[100];
	printf("1st string : ");gets(string1);
	printf("2nd string : ");gets(string2);
	for(i=0;string1[i]||string2[i]!='\0';i++)
	{
		if(string1[i]==string2[i]){
			c[i]=0;
		}
		j++;
		
	}
	
	for(i=0;i<j-1;i++)
	{
		if(c[i]==0)
		k++;	
	}
	
	if(k==j-1)
	printf("String 1 and String2 equal");
	else
	printf("String 2 and String1 is not equal");	
}*/



// 75. Copying one string to another another string without using string copy
/*main()
{
	char string[100],stringcpy[100];int i;
	printf("Enter string : ");gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		stringcpy[i]=string[i];
	}
	stringcpy[i]='\0';
	printf("\n\nNew string after copying is (%s)",stringcpy);
}*/

// 76. String Concatenation without using strcat function
/*main()
{
	char string1[100],string[199],string2[199],k[100];int i,y,j;

	printf("Enter 1st string : ");gets(string1);
	printf("Enter 2nd string : ");gets(string2);
	for(i=0;string1[i]!='\0';i++);
	for(j=0;string2[j]!='\0';j++){
		string1[i]=string2[j];
		i++;
	}
	string1[i]='\0';
		printf("the concatation string is %s",string1);	
}*/


// 77. Pattern replacement
/*int main()
{
	
}*/


// 78. Finding Vowel
/*int main()
{
	int vol=0,cons=0,space=0,tab=0,num=0,consonant=0,i=0; char text[100];
	
	printf("Enter TEXT\n");gets(text);
	do{
	if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='U'||text[i]=='O')
	vol++;
	else if(text[i]==' ')
	space++;
	else if(text[i]=='\t')
	tab++; 
	else if(text[i]>=48&&text[i]<=57)
	num++;
	else
	consonant++;
	i++;
	}while(text[i]!='\0');
	printf("\n\nTEXT has\n%i Consonant\n%i Vowel\n%i number\n%i tab\n%i space",consonant,vol,num,tab,space);
}*/


// 79.Sorting in alphabetical order

main()
{
	int i,q,j;char cha[100],ord[100];
	printf("Enter the quantity of letter : ");scanf("%i",&q);
	for(i=1;i<=q;i++)
	{
		printf("%i/.",i);scanf(" %c",&cha[i]);
	}
	
	for(i=1;i<=q;i++)
	{
		for(j=i+1;j<=q;j++)
		{
			if(cha[i]>=cha[j])
			{
				ord[i]=cha[i];
				cha[i]=cha[j];
				cha[j]=ord[i];
			}
				
		}
	}
	printf("After sorting : ");
	for(i=1;i<=q;i++)
	{
		printf("\n%i/.",i);printf(" %c",cha[i]);
	}
}

/*#include<string.h>
main(){
	int q,i; struct {char word[100];}n[100];
	printf("Enter quantity of word  ");scanf("%i",&q);printf("\n\n");
	for(i=1;i<=q;i++)
	{
		printf("%i/.",i);scanf("%s",n[i].word);
	}
	printf("The output after sorting");
	for(i=1;i<=q;i++)
	{
		for(j=1;j)
	}
}*/


// 80. Searching sub string in a string
/*#include<string.h>
main(){
	char text[999];int i,j,s;
	printf("Enter Text\n\n");gets(text);
	printf("Enter substring to find : "); scanf("%c",&s);
	for(i=0;text[i]!='\0';i++){
		if(text[i]==s)
		j++;
	}
	printf("%d",j);
}*/


// 81. Find the frequency of a character in a string
/*int main()
{
	char string[100],cha;int i,count=0;
	printf("Enter string\n");gets(string);
	printf("\nEnter character to find : ");scanf("%c",&cha);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==cha)
		count++;
	}
	printf("\nThe total of char %c in string %s is %i",cha,string,count);
}*/


// 82. Remove characters in string except alphabets
/*int main()
{
	char text[100],k[100]; int i,j=0;
	printf("Enter text\n");gets(text);
	
	for(i=0;text[i]!='\0';i++)
	{
		if((text[i]>='a'&&text[i]<='z')||(text[i]>='A'&&text[i]<='Z'))
		{
			k[j]=text[i];
			j++;
		}	
	}
	k[j]='\0';
	printf("%s",k);
}*/


// 83. Reverse the given string
/*int main()
{
	int i=0;char string[100],k[i];
	printf("Enter string\n");gets(string);
	do
	{
		k[i]=string[i];
		i++;
	}while(string[i]!='\0');
	k[i]='\0';
	i--;
	printf("The oupt of reverse string\n");
	do
	{
		printf("%c",k[i]);
		i--;
	}
	while(i>=0);
}*/
/*#include<string.h>
int main()
{
	char string[100];
	printf("Enter string : ");gets(string);
	printf("After Reverse : %s",strrev(string));
}*/


























