#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a character to check : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("\n %c is an alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n %c is digit",ch);
	}
	else
	{
		printf("\n %c is special character",ch);
	}
	getch();
}
