#include<stdio.h>

int main()
{
	int n1,n2,i,j;
	
	//input size of array
	printf("Enter size of first array:");
	scanf("%d",&n1);
	
	int a[n1];
	//Input elements of first array
	printf("Enter elements of First array:\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter size of second array:");
	scanf("%d",&n2);
		int b[n2];
	//Input elements of second array
	printf("Enter elements of Second array:\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	int c[n1 + n2];
	for(i=0;i<n1;i++)
	{
	}c[i]=a[i];
	for(j=0;j<n2;j++)
	{
	}c[j]=b[j];
	
	//output the merged array
	printf("Merged array is:");
	for(i=0;i<n1 + n2;i++);
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}