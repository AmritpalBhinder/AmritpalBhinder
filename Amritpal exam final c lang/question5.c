#include<stdio.h>
//Write a C Program to print total number of days in a month using switch case.
int main()
{
	
	char choice;
	printf("Enter the month:");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case'1':printf("In January total no of days is 31.");
				break;
		case'2':printf("In Feburary total no of days is 27.");
				break;
		case'3':printf("In March total no of days is 31.");
				break;
		case'4':printf("In April total no of days is 30.");
				break;
		case'5':printf("In May total no of days is 31.");
				break;
		case'6':printf("In June total no of days is 30.");
				break;
		case'7':printf("In July total no of days is 31.");
				break;
		case'8':printf("In August total no of days is 31.");
				break;
		case'9':printf("In September total no of days is 30.");
				break;
		case'10':printf("In October total no of days is 31.");
				break;
		case'11':printf("In November total no of days is 30.");
				break;
		case'12':printf("In December total no of days is 31.");
				break;
	}
}