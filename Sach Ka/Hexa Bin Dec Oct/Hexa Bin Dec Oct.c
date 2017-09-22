#include<stdio.h>
#include<conio1.h>
#include<stdlib.h>
#include<math.h>
void bd();void  bh();void bo();
void db();void doc();void dh();
void hb();void hd();void ho();
void ob();void od();void oh();
main()
{
	long long int choice; char restart;
		A:
	printf("\t\t\t\t\t***** Computer number convertor *****\n\n");
	printf("\n\n\t\t1/. Binary\n\t\t2/. Decimal\n\t\t3/. Hexadecimal\n\t\t4/. Octal");
	printf("\n\n\t\tYour Choice : ");scanf("%i",&choice);
	clrscr();
	switch(choice)
	{
		case 1: Binarypoint:
				printf("\n\n\t\t1/. Binary-Decimal\n\t\t2/. Binary-Hexadecimal\n\t\t3/. Binary-Octal");
				printf("\n\n\t\tYour Choice : ");scanf("%i",&choice);
				clrscr();
				switch(choice)
				{
					case 1: printf("\n\t\tBinary-Decimal");bd();goto end;
					case 2: printf("\n\t\tBinary-Hexadecimal");bh();goto end;
					case 3: printf("\n\t\tBinary-Octal");bo();goto end;
					default: clrscr();goto Binarypoint;
				}
		case 2: Decimalpoint:
				printf("\n\n\t\t1/. Decimal-Binary\n\t\t2/. Decimal-Hexadecimal\n\t\t3/. Decimal-Octal");
				printf("\n\n\t\tYour Choice : ");scanf("%i",&choice);
				clrscr();
				switch(choice)
				{
					case 1: printf("\n\t\t1/.Decimal-Binary");db();goto end;
					case 2: printf("\n\t\t2/. Decimal-Hexadecimal");dh();goto end;
					case 3: printf("\n\t\t2/. Decimal-Octal");doc();goto end;
					default: clrscr();goto Decimalpoint;
				}
		case 3: Hexadecimalpoint:
				printf("\n\n\t\t1/. Hexadecimal-Binary\n\t\t2/. Hexadecimal-Decimal\n\t\t3/. Hexadecimal-Octal");
				printf("\n\n\t\tYour Choice : ");scanf("%i",&choice);
				clrscr();
				switch(choice)
				{
					case 1: printf("\n\t\t1/. Hexadecimal-Binary");hb();goto end;
					case 2: printf("\n\t\t2/. Hexadecimal-Decimal");hd();goto end;
					case 3: printf("\n\t\t3/. Hexadecimal-Octal");ho();goto end;
					default: clrscr();goto Hexadecimalpoint;
				}
		case 4: Octalpoint:
				printf("\n\n\t\t1/. Octal-Binary\n\t\t2/. Octal-Decimal\n\t\t3/. Octal-Hexadecimal");
				printf("\n\n\t\tYour Choice : ");scanf("%i",&choice);
				clrscr();
				switch(choice)
				{
					case 1: printf("\n\t\t1/. Octal-Binary");ob();goto end;
					case 2: printf("\n\t\t2/. Octal-Decimal");od();goto end;
					case 3: printf("\n\t\t3/. Octal-Hexadecimal");oh();goto end;
					default: clrscr();goto Octalpoint;
				}
		default:clrscr();goto A;
	}
	end:
	gotoxy(15,10);printf("Press r to start again");
	restart=getch();
	if(restart=='r')
	{
		clrscr();
		goto A;

	}
	else
	{
		gotoxy (15,8);printf("BYE BYE");
		exit(1);
	}
}




void bd()
{
	long long int binary=0,re=0,x=0,i=0,decimal=0,y=0;
	AA:
	gotoxy (10,3);printf("Enter Binary number : ");scanf("%lld",&binary);y=binary;
	do
	{
		re=binary%10;
		if(re==1)
		{
			x=pow(2,i);
			decimal+=x;
		}
		else if(re==0)
		{
			decimal+=0;
		}
		else
		{gotoxy (10,3);printf("Not Binary number Input again");delay(800);clrscr();goto AA;}
		i++;
		binary/=10;
	}while(binary>0);
	gotoxy (10,3);printf("%lld Binary number = %lld Decimal number",y,decimal);
}


void bh()
{
	long long int binary,i=0,x=0,hex=0,rp[100],j=0,k=0,y=0,hexa[100],re=0;
	BB:
		hex=0;j=0;k=0;rp[100];
	gotoxy (10,3);printf("Enter Binary number : ");scanf("%lld",&binary);y=binary;
	do
	{
		for(i=0;i<=3;i++)
		{
			re=binary%10;
				if(re==1)
			{
				x=pow(2,i);
				hex+=x;
				if(hex>=10)
				{
						switch(hex)
					{
						case 10 : rp[j]=65;j++;break;
						case 11 : rp[j]=66;j++;break;
						case 12 : rp[j]=67;j++;break;
						case 13 : rp[j]=68;j++;break;
						case 14 : rp[j]=69;j++;break;
						case 15 : rp[j]=70;j++;break;
						default : gotoxy (10,3);printf("Wrong Binary Number, Input again");delay(800);clrscr();goto BB;
					}
				}
				binary/=10;
			}
			else if(re==0)
			{
				hex+=0;
				binary/=10;
			}
			else
			{gotoxy (10,3);printf("Not Binary Number, Input again");delay(800);clrscr();goto BB;}

		}
			hexa[k]=hex;k++;hex=0;
	}while(binary>0);
	j--;
	k--;
	gotoxy (10,3);printf("%lld Binary = ",y);
	for(k=k;k>=0;k--)
	{
		if(hexa[k]>=10)
		{
			printf("%c",rp[j]);j--;
		}
		else printf("%lld",hexa[k]);
	}
	printf(" Hexadecimal");
}


void bo()
{
	long long int octal=0,binary,i=0,j=0,x=0,y=0,remainder=0,re[100];
	octal=0;
	CC:
		i=0;j=0;
		gotoxy (10,3); printf("Enter binary number : ");scanf("%lld",&binary);y=binary;
		do
		{
			for(i=0;i<=2;i++)
			{
				remainder=binary%10;
				if(remainder==1)
				{
					x=pow(2,i);
					octal=octal+x;
				}
				else if(remainder==0)
				{
					octal+=0;
				}
				else
				{
					gotoxy(10,4);printf("Not Binary number, Input again");delay(1000);clrscr();goto CC;
				}
				binary/=10;
			}
			re[j]=octal;octal=0;
			j++;
		}
		while(binary>0);
		j--;
		gotoxy (10,4);printf("%lld Binary = ",y);
		while(j>=0)
		{
			printf("%lld",re[j]);j--;
		}printf(" Octal");
}

void db()
{
	long long int decimal=0,b[100],i=0,remainder=0,x=0;
	gotoxy (10,3);printf("Enter Decimal number : ");scanf("%lld",&decimal);x=decimal;
	while(decimal>0)
	{
		remainder=decimal%2;
		if(remainder==1)
		b[i]=remainder;
		else
		b[i]=remainder;
		i++;
		decimal/=2;
	}
	gotoxy (10,5);printf("%lld Decimal = ",x);
	for(i=i-1;i>=0;i--)
	printf("%lld",b[i]);
	printf(" Binary");
}


void dh()
{
	long long int decimal,remainder,re[100],i=0,x=0;
		DD:
	gotoxy (10,3);printf("Enter Decimal number : ");scanf("%lld",&decimal);x=decimal;
	while(decimal>0)
	{
		remainder=decimal%16;
		decimal/=16;
		if(remainder<16)
		{
			switch(remainder)
			{
				case 10: re[i]=65;i++;break;
				case 11: re[i]=66;i++;break;
				case 12: re[i]=67;i++;break;
				case 13: re[i]=68;i++;break;
				case 14: re[i]=69;i++;break;
				case 15: re[i]=70;i++;break;
				default:
				re[i]=remainder;i++;break;
			}
		}
		else
		{
			gotoxy (10,5);printf("Wrong Decimal number Cannot Convert,Input again");delay(1000);goto DD;
		}
	}
	gotoxy (10,5);printf("%lld Decimal = ",x);
	for(i=i-1;i>=0;i--)
	{
		if(re[i]>=65&&re[i]<=70)
		printf("%c",re[i]);
		else
		printf("%lld",re[i]);
	}
	printf(" Hexadecimal");
}


void doc()
{
	long long int decimal=0,remainder=0,b[100],i=0,x=0;
	gotoxy (10,3);printf("Enter Decimal number : ");scanf("%lld",&decimal);x=decimal;
	while(decimal>0)
	{
		remainder=decimal%8;
		b[i]=remainder;
		decimal/=8;
		i++;
	}
	gotoxy (10,5);printf("%lld Decimal = ",x);
	for(i=i-1;i>=0;i--)
	{
		printf("%lld",b[i]);
	}
	printf(" Octal");
}

void hb()
{
	char hexa[100];long long int num[100],i=0,j=0,rd[100],k=0;
	EE:
	gotoxy (10,5);printf("Enter Hexadecimal : ");scanf("%s",&hexa);
	for(i=0;hexa[i]!='\0';i++)
	{
		switch(hexa[i])
			{
				case 'A' : num[i]=10;break;
				case 'B' : num[i]=11;break;
				case 'C' : num[i]=12;break;
				case 'D' : num[i]=13;break;
				case 'E' : num[i]=14;break;
				case 'F' : num[i]=15;break;
				case 'a' : num[i]=10;break;
				case 'b' : num[i]=11;break;
				case 'c' : num[i]=12;break;
				case 'd' : num[i]=13;break;
				case 'e' : num[i]=14;break;
				case 'f' : num[i]=15;break;
				case '0' : num[i]=0;break;
				case '1' : num[i]=1;break;
				case '2' : num[i]=2;break;
				case '3' : num[i]=3;break;
				case '4' : num[i]=4;break;
				case '5' : num[i]=5;break;
				case '6' : num[i]=6;break;
				case '7' : num[i]=7;break;
				case '8' : num[i]=8;break;
				case '9' : num[i]=9;break;
				default:
					gotoxy (10,5);printf("The letter of Hexadecimal is not more than F, Try again");delay(1000);clrscr();goto EE;
		}
	}
	num[i]='\0';
	gotoxy (10,5);printf("%s Hexadecimal = ",hexa);
	for(i=0;num[i]!='\0';i++)
	{
		j=0;
		for(k=0;k<4;k++)
		{
			rd[j]=num[i]%2;
			j++;
			num[i]/=2;
		}
		for(j=j-1;j>=0;j--)
		{
			printf("%lld",rd[j]);
		}
		printf(" ");
	}
	printf(" Binary");
}

void hd()
{

	char hexa[100];long long int i=0,j=0,num[100],x=0,decimal=0,k=0;
	EE:
	gotoxy(10,3);printf("Enter Hexadecimal number : ");scanf("%s",hexa);

		for(i=0;hexa[i]!='\0';i++)
	{
			switch(hexa[i])
			{
				case 'A' : num[i]=10;break;
				case 'B' : num[i]=11;break;
				case 'C' : num[i]=12;break;
				case 'D' : num[i]=13;break;
				case 'E' : num[i]=14;break;
				case 'F' : num[i]=15;break;
				case 'a' : num[i]=10;break;
				case 'b' : num[i]=11;break;
				case 'c' : num[i]=12;break;
				case 'd' : num[i]=13;break;
				case 'e' : num[i]=14;break;
				case 'f' : num[i]=15;break;
				case '0' : num[i]=0;break;
				case '1' : num[i]=1;break;
				case '2' : num[i]=2;break;
				case '3' : num[i]=3;break;
				case '4' : num[i]=4;break;
				case '5' : num[i]=5;break;
				case '6' : num[i]=6;break;
				case '7' : num[i]=7;break;
				case '8' : num[i]=8;break;
				case '9' : num[i]=9;break;
				default:
					gotoxy (10,5);printf("Hexadecimal cannot accept special symbol, Try again");delay(1000);clrscr();goto EE;
			}
	}
	k=--i;
	for(j=0;j<=k;j++)
	{
		x=pow(16,j);
		decimal=decimal+(x*num[i]);
		i--;
	}
	gotoxy (10,5);printf("%s Hexadecimal = %lld decimal",hexa,decimal);

}
void ho()
{

	char hexa[100];long long int num[100],i=0,k=0,x=0,j,decimal=0,rd[100];
	EE:
	gotoxy (10,3);printf("Enter Hexadecimal Number : ");scanf("%s",hexa);
		for(i=0;hexa[i]!='\0';i++)
	{
			switch(hexa[i])
			{
				case 'A' : num[i]=10;break;
				case 'B' : num[i]=11;break;
				case 'C' : num[i]=12;break;
				case 'D' : num[i]=13;break;
				case 'E' : num[i]=14;break;
				case 'F' : num[i]=15;break;
				case 'a' : num[i]=10;break;
				case 'b' : num[i]=11;break;
				case 'c' : num[i]=12;break;
				case 'd' : num[i]=13;break;
				case 'e' : num[i]=14;break;
				case 'f' : num[i]=15;break;
				case '0' : num[i]=0;break;
				case '1' : num[i]=1;break;
				case '2' : num[i]=2;break;
				case '3' : num[i]=3;break;
				case '4' : num[i]=4;break;
				case '5' : num[i]=5;break;
				case '6' : num[i]=6;break;
				case '7' : num[i]=7;break;
				case '8' : num[i]=8;break;
				case '9' : num[i]=9;break;
				default:
					gotoxy (10,5);printf("Hexadecimal cannot accept special symbol, Try again");delay(1000);clrscr();goto EE;
			}
	}
	k=--i;
	for(j=0;j<=k;j++)
	{
		x=pow(16,j);
		decimal=decimal+x*num[i];
		i--;
	}
	j=0;
	while(decimal!=0)
	{
		rd[j]=decimal%8;
		decimal/=8;
		j++;
	}
	gotoxy (10,5);printf("%s Hexadecimal = ",hexa);
	for(j=j-1;j>=0;j--)
	printf("%lld",rd[j]);
	printf(" Octal");
}
void ob()
{
	long long int octal=0,remain=0,i=0,red[100],x=0,y=0,j=0,deci=0;
	GG:
	gotoxy (10,3);printf("Enter Octal number : ");scanf("%lld",&octal);y=octal;
	while(octal>0)
	{
		remain=octal%10;
		if(remain<8)
		{
			x=pow(8,i);
			i++;
			deci+=remain*x;
			octal/=10;
		}
		else
		{
			gotoxy (10,5);printf("Wrong Octal number, Try again");delay(1000);clrscr();goto GG;
		}
	}
	i=0;
	while(deci>0)
	{
		remain=deci%2;
		red[i]=remain;
		i++;
		deci/=2;
	}
	i--;
	gotoxy (10,5);printf("%lld Octal =",y);
	while(i>=0)
	{
		printf("%lld",red[i]);
		i--;
	}printf(" Binary");
}

void od()
{
	long long octal=0,y=0,remainder=0,x=0,decimal=0,i=0;
	HH:
	gotoxy (10,3);printf("Enter Octal number : ");scanf("%lld",&octal);y=octal;
	while(octal>0)
	{
		remainder=octal%10;
		if(remainder<8)
		{
			x=pow(8,i);
			i++;
			decimal+=remainder*x;
			octal/=10;
		}
		else
		{
			gotoxy (10,5);printf("Wrong Octal number, Try again");delay(100);clrscr();goto HH;
		}
	}
	gotoxy (10,5);printf("%lld Octal = %lld Decimal",y,decimal);
}

void oh()
{
	long long int y=0,remainder=0,octal=0,decimal=0,x=0,i=0,num[100];
	II:
	gotoxy (10,3);printf("Enter Octal number : ");scanf("%lld",&octal);y=octal;
	while(octal>0)
	{
		remainder=octal%10;
		if(remainder<8)
		{
			x=pow(8,i);
			decimal+=remainder*x;
			i++;
			octal/=10;
		}
		else
		{
			gotoxy (10,5);printf("Wrong Octal number, Try again");delay(1000);clrscr();goto II;
		}
	}
	i=0;
	while(decimal>0)
	{
		num[i]=decimal%16;
		if(num[i]>=10&&num[i]<=15)
		{
			switch(num[i])
			{
				case 10: num[i]=65;break;
				case 11: num[i]=66;break;
				case 12: num[i]=67;break;
				case 13: num[i]=68;break;
				case 14: num[i]=69;break;
				case 15: num[i]=70;break;
			}
		}
		decimal/=16;
		i++;
	}
	gotoxy (10,5);printf("%lld Octal = ",y);
	for(i=i-1;i>=0;i--)
	{
		if(num[i]>=65&&num[i]<=70)
		printf("%c",num[i]);
		else
		printf("%lld",num[i]);
	}
	printf(" Hexadecimal");
}
