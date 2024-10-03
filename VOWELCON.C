#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter an alphabet to check vowel or consonant ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n %c is vowel",ch);
	}
	else
	{
		printf("\n %c is consonant",ch);
	}
	getch();
}
