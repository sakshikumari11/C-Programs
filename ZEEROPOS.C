#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter a character to check : ");
	scanf("%d",&num);
	if(num==0)
	{
			printf("%d is ZERO",num);

	}
	else if(num<0)
	{
			printf("%d is NEGATIVE",num);

	}
	else
	{
		printf("%d is POSITIVE",num);
	}
	getch();
}




