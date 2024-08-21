#include<stdio.h>
#include<conio.h>

void main()

{
	int BaseSalary, GrossSalary, HRA, DA, TA;
	BaseSalary=100;
	HRA=10;
	DA=5;
	TA=8;
	
	printf("Enter your Base Salary:\n");
	printf("Enter your HRA:\n");
	printf("Enter your DA:\n");
	printf("Enter your TA:\n");
	scanf("%d,&Basesalary\n");
	scanf("%d,&HRA\n");
	scanf("%d,&DA\n");
	scanf("%d,&TA\n");
	
	
	printf("Gross Salary = %d",BaseSalary*10/100,HRA*10/100,DA*5/100,TA*8/100);
}