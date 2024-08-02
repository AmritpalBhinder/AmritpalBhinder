#include<stdio.h>
//Develop a Program to find the sum of a number's first and last digits.

int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	int ld=n%10;
	
	printf("last digit:%d\n",ld);
	while(n>9)
	{
		n=n/10;
	}
	
	printf("first digit: %d \n\n",n);
	printf("sum of first and last digit:%d",ld+n);
}