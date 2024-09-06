#include<stdio.h>
//WAP to print a multiplication table of any number Using for loop.
int main()
{
	int i,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Mulitiplication of n:\n");
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	printf("\n");
}