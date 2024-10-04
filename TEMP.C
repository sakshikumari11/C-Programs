#include<stdio.h>
#include<conio.h>
void main()
{
	int temp;
	clrscr();
	printf("\n Enter your Temperature ");
	scanf("%d",&temp);
	if(temp<0)
	{
		printf("\n Freezing Weather");
	}
	else if(temp>0 && temp<=10)
	{
		printf("\n Very Cold Weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("\n Cold Weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("\n Normal Weather");
	}
	else if(temp>30 && temp<40)
	{
		printf("\n Hot Weather");
	}
	else
	{
		printf("\n Very Hot Weather");
	}
	getch();
}