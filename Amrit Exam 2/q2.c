#include<stdio.h>
//WAP to find out max from 4 numbersusing nested if.

int main()
{
	int a,b,c,d;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max.");
			}
			else
			{
				printf("d is max.");
			}
		}
		else
		{
			if(d>c)
			{
				printf("d is max.");
			}
			else
			{
				printf("c is max.");
			}
			if(d>b)
			{
				printf("d is max.");
			}
			else
			{
				printf("b is max.");
			}
		}
		
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is max.");
			}
			else
			{
				printf("d is max.");
			}
		}
		else
		{
			if(d>c)
			{
				printf("d is max.");
			}
			else
			{
				printf("c is max.");
			}
		}
	}
}