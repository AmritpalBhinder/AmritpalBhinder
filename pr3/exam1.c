#include<stdio.h>
//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using do-while loop.

void main()
{
	char ch='A';
	
	do
	{
		printf("%c ",ch);
		ch+=4;
	}while(ch<='Z');
}