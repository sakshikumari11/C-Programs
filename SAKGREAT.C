#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("%d is greatest",a);
	}
	if(b>=c && b>=a)
	{
		printf("%d is greatest",b);
	}
	else
	{
		printf("%d is greatest",c);
	}

	getch();
}