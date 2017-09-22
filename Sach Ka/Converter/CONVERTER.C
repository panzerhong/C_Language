#include<stdio.h>
main()
{
	float input1,input2,result; int choice;

  printf("\t\t\t\t\t---------------1280 CONVERTER---------------\n\n");
  printf("\t\t\t1. Last 5 conversions\n");
  printf("\t\t\t2. Temperature\n");
  printf("\t\t\t3. Weight\n");
  printf("\t\t\t4. Length\n");
  printf("\t\t\t5. Area\n");
  printf("\t\t\t6. Volume\n");
  printf("\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
  switch (choice)
  {
    case 1: printf("\n\t\t\t\tLast 5 conversions\n\n\t\t\t1.Acre-hectare\n\t\t\t2.square Mile-square kilometre\n\t\t\t3.Inch2-cm2\n\t\t\t4.Foot2-metre2\n\t\t\t5.Stone-kilo\n\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
            switch (choice)
            {
              case 1: printf("\t\t\tEnter Acre number : ");scanf("%f",&input1);
                      result=input1*0.4047;
                      printf("\t\t\t%f Acre = %f hectare",input1,result);break;
              case 2: printf("\t\t\tEnter Square Mile : ");scanf("%f",&input1);
                      result=input1*2.59;
                      printf("\t\t\t%f Square mile = %f Square hectare",input1,result);break;
              case 3: printf("\t\t\tEnter Square Inch quantity");scanf("%f",&input1);
                      result=input1*6.4516;
                      printf("\t\t\t%f Square inch = %f Square centimetre",input1,result);break;
              case 4: printf("\t\t\tEnter Square foot number : ");scanf("%f",&input1);
                      result=input1*0.0929;
                      printf("\t\t\t%f Square foot = %f Square metre",input1,result);break;
              case 5: printf("\t\t\tEnter Stone number : ");scanf("%f",&input1 );
                      result=input1*6.3502932;
                      printf("\t\t\t%f Stone = %f Kilogram",input1,result);break;
            	default:
            		printf("\t\t\tWrong input try again");break;
            }
  
    case 2: printf("\n\t\t\tTEMPERATURE\n\n\t\t\t1.Fahrenheit-Celsius\n\t\t\t2.Kelvin-Faharenheit\n\t\t\t3.Kelvin-celsius\n\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
    		switch (choice)
    		{
    			case 1: printf("\t\t\tEnter Fahrenheit number : ");scanf("%f",&input1);
    					result=(input1-32)*5/9;
    					printf("\t\t\t%f Fahrenheit = %f Celsius",input1,result);break;
    			case 2: printf("\t\t\tEnter Kelvin number : ");scanf("%f",&input1);
    					result=32+(input1-273.15)*9/5;
    					printf("\t\t\t%f Kelvin = %f Fahrenheit",input1,result);break;
    			case 3: printf("\t\t\tEnter Kelvin number : ");scanf("%f",&input1);
    					result=input1-273.15;
    					printf("\t\t\t%f Kelvin = %f Celsius",input1,result);break;
    			default: 
    				printf("\t\t\tWrong input try again");break;
    		}
  	case 3: printf("\n\t\t\tWEIGHT\n\n\t\t\t1.Pound-Kilogram\n\t\t\t2.Carat-Gram\n\t\t\t3.Ounce-Gram\n\t\t\t4.Troy oz-Gram\n\t\t\t5.Stone-Kilogram\n\n\t\t\tYOUR CHOICE :");scanf("%d",&choice);
  			switch (choice)
  			{
  				case 1: printf("\t\t\tEnter Pound number : ");scanf("%f",&input1);
  						result=input1*0.4536;
  						printf("\t\t\t%f Pound = %f Kilogram",input1,result);break;
  				case 2: printf("\t\t\tEnter Carat number : ");scanf("%f",&input1);
  						result=input1*0.2;
  						printf("\t\t\t%f Carat = %f Gram",input1,result);break;
  				case 3: printf("\t\t\tEnter Ounce number : ");scanf("%f",&input1);
  						result=input1*28.35;
  						printf("\t\t\t%f Ounce = %f Gram",input1,result);break;
  				case 4: printf("\t\t\tEnter Troy oz number : ");scanf("%f",&input1);
  						result=input1*28.35;
  						printf("\t\t\t%f Troy oz = %f Gram",input1,result);break;
  				case 5: printf("\t\t\tEnter Stone number : ");scanf("%f",input1);
				  		result=input1*6.3502932;
						printf("\t\t\t%f Stone = %f Kilogram",input1,result);break;
				default:
					printf("\t\t\tWrong input try again");break;
  			}
  	
  	case 4: printf("\n\t\t\tLENGTH\n\n\t\t\t1.Mile-Kilometre\n\t\t\t2.Yard-Metre\n\t\t\t3.Foot-Metre\n\t\t\t4.Foot-Centimetre\n\t\t\t5.Inch-Centimetre\n\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
  			switch(choice)
  			{
  				case 1:printf("\t\t\tEnter Mile number : ");scanf("%f",&input1);
  						result=input1*1.609;
  						printf("\t\t\t%f Mile = %f Kilometre",input1,result);break;
  				case 2: printf("\t\t\tEnter Yard number : ");scanf("%f",&input1);
  						result=input1*0.9144;
  						printf("\t\t\t%f Yard = %f Metre",input1,result);break;
  				case 3: printf("\t\t\ttEnter Foot number : ");scanf("%f",&input1);
  						result=input1*0.3048;
  						printf("\t\t\t%f Foot = %f Metre",input1,result);break;
  				case 4: printf("\t\t\tEnter Foot number : ");scanf("%f",&input1);
  						result=input1*30.48;
  						printf("\t\t\t%f Foot = %f Centrimetre",input1,result);break;
  				case 5: printf("\t\t\tEnter Inch number : ");
  						result=input1*2.5401;
  						printf("\t\t\t%f Inch = %f Centrimetre",input1,result);break;
  				default: 
  					printf("\t\t\tWrong input try again");break;

 			}
 			
 	case 5: printf("\n\t\t\tAREA\n\n\t\t\t1.Square Foot - Square metre\n\t\t\t2.Square Inch -Square Centremetre\n\t\t\t3.Square Yard - Square Metre\n\t\t\t4.Square Mile - Square Kilometre\n\t\t\t5.Acre - Hectare\n\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
 			switch(choice)
 			{
 				case 1: printf("\t\t\tEnter Square Foot number : ");scanf("%f",&input1);
 						result=input1*0.0929;
 						printf("\t\t\t%f Square Foot = %f Square Metre",input1,result);break;
 				case 2: printf("\t\t\tEnter Square Inch number : ");scanf("%f",&input1);
 						result=input1*6.4516;
 						printf("\t\t\t%f Square Inch = %f Square Centremetre",input1,result);break;
 				case 3: printf("\t\t\tEnter Square Yard number : ");
 						result=input1*0.8361274;
 						printf("\t\t\t%f Square Yard = %f Square ",input1,result);break;
 				case 4: printf("\t\t\tEnter Square Mile number : ");scanf("%f",&input1);
 						result=input1*2.59;
 						printf("\t\t\t%f Square Mile = %f Square kilometre",input1,result);break;
 				case 5: printf("\t\t\tEnter Acre number : ");scanf("%f",&input1);
 						result=input1*0.4047;
 						printf("\t\t\t%f Acre = %f Hectare",input1,result);break;
 				default:
 					printf("\t\t\tWrong input, Try again");break;
 			}
 	
	 case 6: printf("\n\t\t\tVOLUME\n\n\t\t\t1.Cubic Inch - Cubic Centimetre\n\t\t\t2.Cubic Foot - Cubic Metre\n\t\t\t3.Cubic Metre - Cubic Yard\n\t\t\t4.Gallon - Litre\n\n\t\t\tYOUR CHOICE : ");scanf("%d",&choice);
 			switch(choice)
 			{
 				case 1: printf("\t\t\tEnter Cubic Inch Number : ");scanf("%f",&input1);
 						result=input1*16.387064;
 						printf("\t\t\t%f Cubic Inch = %f Cubic Centre");break;
 				case 2: printf("\t\t\tEnter Cubic Foot number : ");scanf("%f",&input1);
 						result=input1*0.0283168;
 						printf("\t\t\t%f Cubic Foot = %f Cubic Metre",input1,result);break;
 				case 3: printf("\t\t\tEnter Cubic Metre number : ");scanf("%f",&input1);
 						result=input1*1.3079505;
 						printf("\t\t\t%f Cubic Foot = %f Cubic Yard",input1,result);break;
 				case 4: printf("\t\t\tEnter Gallon number : ");scanf("%f",&input1);
 						result=input1*3.78541;
 						printf("\t\t\t%f Gallon = %f Litre",input1,result);break;
 				default:
 						printf("\t\t\tWrong input try again");break;
 			}
	default : printf("\t\t\tWrong input try again");
	}
	printf("\t\t\n\nEnter anykey to start again : ");scanf("%d",&choice);
}
}
