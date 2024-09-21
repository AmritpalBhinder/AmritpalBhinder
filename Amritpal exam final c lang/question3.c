#include<stdio.h>
//Write a Program in C to find a cube of any number using User Define Function.
void cube()
{
	int n;
	printf("Enter any Number:");
	scanf("%d",&n);
	printf("%d",n*n*n);
}
int main()
{
	cube();
}