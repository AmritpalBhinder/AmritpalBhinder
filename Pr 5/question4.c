#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the array's row and column size:");
	scanf("%d",&n);
	
	
	printf("\n");
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j<0;j<n;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		 
		}
		printf("\n");
	}	

	int sumrow , sumcol;
	
	for(i=0; i<n; i++)
	{
		sumrow = sumcol =0 ;
		
		for(j=0; j<n; j++)
		{
			
			sumrow = sumrow + a[i][j];
			sumcol = sumcol + a[j][i];
			 
		}
		printf("\nsum of row : %d \n sum of column : %d ",sumrow,sumcol);
		printf("\n");
		
	}
	
}