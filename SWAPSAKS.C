#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;
	clrscr();
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping : %d %d \n",a,b);
	t=a;
	a=b;
	b=t;
	printf("After swapping : %d %d ",a,b);
	getch();
}
