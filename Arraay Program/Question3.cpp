#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	printf("Enter element of Array A:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter element of Array B:\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n");
	printf("Array C is :\n");
	for(i=0;i<n;i++)
	{
		printf("c[%d]= ",c[i]);
	}
	printf("\n");
}