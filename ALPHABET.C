#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a character to check alphabet or not ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("\n %c is an alphabet",ch);
	}
	else
	{
		printf("\n %c is not an alphabet",ch);
	}
	getch();
}
