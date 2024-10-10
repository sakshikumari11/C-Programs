#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();
	printf("\n Enter a positive number ");
	scanf("%d",n);
	if(n>0)
	{
		i=n;
		while(i>0)
		{
			fact=fact*i;
			i--;
		}
	printf("\n Factorial=%d",fact);
	}
	else
	{
		printf("This is negative number ");
	}
	getch();
}