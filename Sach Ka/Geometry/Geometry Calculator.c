#include<stdio.h>
/*Program to find the substace of geometry function*/
main()
{
	float input1, input2, input3,input4,input5,perimeter,area;int number;char a;
	start: system("cls");
	printf("IDOT GEOMETRY SIMPLE CALCUATOR \nREMEMBER: input your number in proper dimension\nChose your geometry : ");
	printf("\n\nChose the cartogories.\nEnter a for 2D area and perimter\nEnter b for 3D Volume\nYOUR CHOISE: "); scanf("%c",&a);
	
	if(a=='a')
	{
			printf("\n\n2D calculating area and perimeter :-)");
			printf("\n\nEnter number 1 for Square");
			printf("\nEnter number 2 for Rectangle");
			printf("\nEnter number 3 for Triangle");
			printf("\nEnter number 4 for Parallel Ogram");
			printf("\nEnter number 5 for Trapezoid");
			printf("\nEnter number 6 for Circle");
			printf("\nEnter number 7 for Sector of Circle");
			printf("\n\nYOUR CHOISE: "); scanf("%d",&number);
	
				switch(number)
					{
						case 1: printf("\n\nSQUARE");
								printf("\n\nEnter the side number : "); scanf("%f",&input1);
								area=input1*input1;
								perimeter=4*input1;
								printf("\nArea=%.2f \nperimeter=%.2f",area,perimeter);
								break;
					
						case 2: printf("\n\nRECTANGLE");
								printf("\n\nEnter the length number : "); scanf("%f",&input1);
								printf("\nEnter the width number : "); scanf("%f",&input2);
								area=input1*input2;
								perimeter=2*(input1+input2);
								printf("\n\nArea=%.2f \nperimeter=%.2f",area,perimeter);
								break;
					
						case 3: printf("\n\nTRAINGLE");
								printf("\n\nEnter the height number : "); scanf("%f",&input1);
								printf("\nEnter the base number : "); scanf("%f",&input2);
								area=(input1*input2)/2;
								printf("\nArea=%.2f",area);
								printf("\n\nWanna find perimeter \n1 for YES\n2 for NO\nYOUR CHOISE: ");scanf("%d",&number);
								if(number==1){
										printf("\nEnter the number for all side of traingle to find perimeter\n");
										scanf("%f",&input1);scanf("%f",&input2);scanf("%f",&input3);
										perimeter=input1+input2+input3;
										printf("\n\nPerimeter=%.2f",perimeter);
										break;
								}
								else
								break;
					
						case 4: printf("\n\nPARALLEL OGRAM");
								printf("\n\nEnter the height number : "); scanf("%f",&input1);
								printf("\nEnter the base number : "); scanf("%f",&input2);
								area=input1*input2;
								printf("\nArea=%.2f",area);
								printf("\n\nWanna find perimeter \n1 for YES\n2 for NO\nYOUR CHOISE: ");scanf("%d",&number);
								if(number==1)
								{
									printf("\nEnter a side of parallel ogram : ");scanf("%f",&input3);
									perimeter=(input3+input2)*2;
									printf("\nPerimeter=%.2f",perimeter);
									break;
								}
								else
								break;
						
						case 5: printf("\n\nTRAPEZOID");
								printf("\n\nEnter the height number : "); scanf("%f",&input1);
								printf("\nEnter the small base number : "); scanf("%f",&input2);
								printf("\nEnter the big base number : "); scanf("%f",&input3);
								area=input1*(input2+input3)*1/2;
								printf("\n\nArea=%.2f",area);
								printf("\n\nWanna find perimeter \n1 for YES\n2 for NO\nYOUR CHOISE: ");scanf("%d",&number);
								if(number==1)
								{
									printf("\nEnter the each 2 sides between base of Trapezoid\n");
									scanf("%f",&input4);
									scanf("%f",&input5);
									perimeter=input4+input5+input2+input3;
									printf("\nPerimeter=%.2f",perimeter);
									break;
								}
								else
								break;
						
						case 6: printf("\n\nCIRCLE");
								printf("\n\nEnter the radius of circle : ");scanf("%f",&input1);
								area=input1*input1*3.14; perimeter=2*3.14*input1;
								printf("\nArea=%.2f",area);printf("\nPerimeter=%.2f",perimeter);break;
								
						case 7: printf("\n\nSECTOR OF CIRCLE");
								printf("\n\nEnter the radius of Sector : "); scanf("%f",&input1);
								printf("\nEnter the angle of Sector in degree : "); scanf("%f",&input2);
								area=input2*input1*input1*0.5;
								printf("\nArea=%.2f",area);break;
						default:
							printf("Wrong input");
							
					}
		printf("\n\nPress a or b to start again : ");scanf("%d",&number);
		goto start;
	}


	else if(a=='b')
	{
				printf("\n\n3D volume and surface calculating :-)");
			printf("\n\nEnter number 1 for CUBE");
			printf("\nEnter number 2 for RECTANGULAR SOLID");
			printf("\nEnter number 3 for SPHERE");
			printf("\nEnter number 4 for CYLINDER");
			printf("\nEnter number 5 for GENERAL CONE OR PYRAMID");
			printf("\nEnter number 6 for FRUSTUM OF A CONE");
			printf("\nEnter number 7 for SQUARE PYRAMID");
			printf("\n\nYOUR CHOISE: "); scanf("%d",&number);
					switch(number)
					{
						case 1: printf("\n\nCUBE");
								printf("\nEnter side number of CUBE");scanf("%f",&input1);
								area=input1*input1*input1;
								perimeter=input1*input1*6;
								printf("\nVolume = %.2f \narea = %.2f",area,perimeter);break;
						
						case 2: printf("\n\nRECTANGULAR SOLID");
								printf("\nEnter width number : ");scanf("%f",&input1);
								printf("\nEnter length number : ");scanf("%f",&input2);
								printf("\nEnter height number : ");scanf("%f",&input3);
								area=input1*input2*input3;
								perimeter=(input1*input2*2)+(input1*input3*2)+(input2*input3*2);
								printf("\nVolume = %.2f \n area = %.2f",area,perimeter);break;
						
						case 3: printf("\n\nSPHERE");
								printf("\nEnter radius number : ");scanf("%f",&input1);
								area=input1*input1*input1*3.14*4/3;
								perimeter=4*3.14*input1*input1;
								printf("\nVolume = %.2f\nSurface Area = %.2f",area,perimeter);break;
						
						case 4: printf("\n\nCYLINDER");
								printf("\nEnter radius of CYLINDER : ");scanf("%f",&input1);
								printf("\nEnter height of CYLINDER : ");scanf("%f",&input2);
								area=3.14*input1*input1*input2;
								perimeter=(2*3.14*input1*input2)+(2*3.14*input1*input1);
								printf("\nVolume = %.2f\n Surface Area = %.2f",area,perimeter);break;
						
						case 5: printf("\n\nGENERAL CONE OR PYRAMID");
								printf("\nEnter area of base number : ");scanf("%f",&input1);
								printf("\nEnter area of height number : ");scanf("%f",&input2);
								area=1/3*input1*input2;
								printf("\nVolume = %.2f",area);break;
					
						case 6: printf("\n\nFRUSTUM OF A CONE");
								printf("\nEnter top radius : ");scanf("%f",&input1);
								printf("\nEnter base radius : ");scanf("%f",&input2);
								printf("\nEnter height : ");scanf("%f",&input3);
								printf("\nEnter slant height : ");scanf("%f",&input4);
								area=input3*1.047*(input1*input1+input1*input2+input2*input2);
								perimeter=3.14*input4*(input1+input2)+(3.14*input1*input1)+(3.14*input2*input2);
								printf("\nVolume = %.2f\nSurface area = %.2f",area,perimeter);break;
						
						case 7: printf("\n\nSQUARE PYRAMID");
								printf("\nEnter base side of PYRAMID : ");scanf("%f",&input1);
								printf("\nEnter height of PYRAMID : ");scanf("%f",&input2);
								area=1/3*input1*input1*input2;
								printf("\nVolume : ",area);
						default : 
						printf("Wrong input");
					}
					printf("\n\nPress a or b to start again : ");scanf("%d",&number);
					goto start;
	}	
	else
	printf("\n\nPress a or b to start again : ");scanf("%d",&number);
	goto start;

}


