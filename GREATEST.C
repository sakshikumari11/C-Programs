#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		printf("%d is greatest",a);
	}
	else
	{
		printf("%d is greatest",b);
	}
	getch();
}
