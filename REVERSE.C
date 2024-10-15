#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r=0,rem;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&num);
	int orgnum=num;
	do{
		rem=num%10;
		r=r*10+rem;
		num=num/10;
	}
	while(num!=0);
	{
		printf("\n Orignal No. = %d",orgnum);
		printf("\n Reversed No. = %d",r);
	}
	getch();
}