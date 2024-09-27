#include<stdio.h>
#include<conio.h>
void main()
{     
	clrscr();
	int num;
	printf("\n Enter number to check even/odd: ");
	scanf("%d",&num);
	if(num%2==0)
	{
	  printf("\n even num");
	}
	else
	{
		printf("\n Odd num");
	}
       getch();
}
