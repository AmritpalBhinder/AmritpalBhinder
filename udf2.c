#include<stdio.h>

void divisible(int n)
{

	printf("Enter any number:");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("Value is divisible by 3 & 5 both.");
	}
	else if(n%3==0)
	{
		printf("Value is divisible by 3 only.");
	}
	else if(n%5==0)
	{
		printf("Value is divisible by 5 only.");
	}
	else
	{
		printf("Value is not divisible by 3 & 5 both.");
	}
}
void main()
{
	divisible(15);
}