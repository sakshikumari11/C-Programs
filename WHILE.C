#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,p=1;
	clrscr();
	while(i<=5)
	{
		p=p*i;
		i++;
	}
	printf("\n %d is product ",p);
	getch();
}
