#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&num);
	if(num<0)
	printf("You entered negative number ");
	else
	printf("You entered positive number ");
	getch();
}