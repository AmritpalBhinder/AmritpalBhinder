#include<stdio.h>
//WAP to create a Simple Calculator using a Switch case.
int main()
{
	int a,b;
	char choice;
	
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter your choice:");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '1':printf("Sum of %d + %d : %d",a+b);
				scanf("%d",&a);
				break;
		case '2':printf("Substraction of %d - %d: %d",a-b);
				 break;
		case '3':printf("Multiplication of %d * %d :%d",a*b);
				 break;
		case '4':printf("Press 4 for / :",a/b);
				 break;
		case '5':printf("Press 5 for %:",a%b);
				 break;
		default:printf("\nEnter valid input!");		 	 		 
	}	
	
	
}