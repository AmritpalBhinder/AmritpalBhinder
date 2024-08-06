#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	printf("Enter value of d:");
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
			if(c>d)
			{
				printf("c is max.");
			}
			else
			{
				printf("d is max.");
			}
			if(c>b)
			{
				printf("c is max.");
			}
			else
			{
				printf("b is max.");
			}
			if(c>a)
			{
				printf("c is max.");
			}
			else
			{
				printf("a is max.");
			}
		}
	}
}