#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping : %d %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping : %d %d ",a,b);
	getch();
}
