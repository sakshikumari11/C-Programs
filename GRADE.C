#include<stdio.h>
#include<conio.h>
void main()
{
	char gr;
	clrscr();
	printf("\n Enter a grade : ");
	scanf("%c",&gr);
	if(gr=='E')
	{
		printf("\n Excellent");
	}
	else if(gr=='V')
	{
		printf("\n Very Good");
	}
	else if(gr=='G')
	{
		printf("\n Good");
	}
	else if(gr=='A')
	{
		printf("\n Average");
	}
	else if(gr=='F')
	{
		printf("\n Fail");
	}
	else
	{
		printf("\n Wrong Input");
	}
	getch();
}