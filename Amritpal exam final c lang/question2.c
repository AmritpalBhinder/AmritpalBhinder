#include<stdio.h>
//C Program to find sum of elements of a matrix.
int main()
{
	int r,c,sum=0,n,i,j;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter row:");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	  sum = r + c;
	printf("Sum of matrix:%d ",r,c,r+c);
}