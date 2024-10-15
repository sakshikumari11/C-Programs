#include<stdio.h>
#include<conio.h>
void main()
{
	int num,l=0,digit;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&num);
	do{
		int digit=num%10;
		if(digit>l)
		{
			l=digit;
		}
		else
		{
			num/=10;
		}
	}
	while(num>0);
	{
		printf("\n The largest digit is %d",l);

	}
	getch();
}