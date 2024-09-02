#include<stdio.h>

int main()
{
	int r,c,i,j;
	
	printf("Enter the array's row:");
	scanf("%d",&r);
	printf("Enter the array's column:");
	scanf("%d",&c);
	
	printf("\n");
	
	int a[r][c];
	int max;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		printf("\n");
	}
	
	printf("Largest number is : %d",max);
}