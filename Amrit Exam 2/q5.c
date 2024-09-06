#include<stdio.h>
//WAP that prints the perimeter of a rectangle to take its height and width as input.
int main()
{
	int h,w;
	
	printf("Enter value of height:");
	scanf("%d",&h);
	printf("Enter value of width:");
	scanf("%d",&w);
	
	printf("Perimeter of rectangle: %d",(h+w)*2);
}