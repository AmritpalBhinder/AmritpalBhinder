#include<stdio.h>

void main()
{
	int i,n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Length of an array:%d",n);
	
}