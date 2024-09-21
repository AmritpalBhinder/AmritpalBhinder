#include<stdio.h>
//Write a C Program find the third angle of a triangle if two angles are given.
int main()
{
	int a,b,c;
	
	printf("Enter first side:");
	scanf("%d",&a);
	printf("Enter second side:");
	scanf("%d",&b);
	printf("Third side angle  :180-(%d+%d) = %d",a,b,c,c=180-(a+b));
}