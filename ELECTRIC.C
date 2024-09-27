#include<stdio.h>
#include<conio.h>
void main()
{
	int id,unit,bill;
	char name[25];
	clrscr();
	printf("\n Enter the name of user :  ");
	scanf("%c",name);
	printf("\n Enter the id of user :  ");
	scanf("%d",id);
	printf("\n Enter the unit of user :  ");
	scanf("%d",unit);
	if(unit<=199)
	{
		printf("Your bill is %d",unit*1.20)
	}
	else if(unit>=200 && unit<400)
	{
		printf("Your bill is %d",unit*1.50)
	}
	else if(unit>=400 && unit<600)
	{
		printf("Your bill is %d",unit*1.80)
	}
	else if(unit>=600)
	{
		printf("Your bill is %d",unit*2.0)
	}
getch();
}
