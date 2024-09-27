#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t;
	clrscr();
	printf("\n Enter the value of P : ");
	scanf("%f",&p);
	printf("\n Enter the value of R : ");
	scanf("%f",&r);
	printf("\n Enter the value of T : ");
	scanf("%f",&t);
	printf("\n Compound Interest =%f ",p*r*t/100);
	getch();
}

