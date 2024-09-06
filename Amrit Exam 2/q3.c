#include<stdio.h>
//WAP to input any character and check whether it is alphabet, digit or special character.
int main()
{
	char choice,i,c,s;
	printf("Enter your choice:");
	scanf("%c",&choice);
	printf("Enter your choice:");
	scanf("%d",&i);
	printf("Enter your choice:");
	scanf("%c",&s);
	
	if(choice==c)
	{
		printf("This result in alphabet.");		
	}
	else if(choice==i)
	{
		printf("This result in digit.");
	}
	else if(choice==s)
	{
		printf("This result in character.");
	}
	else
	{
		printf("Enter valid input.");
	}
}