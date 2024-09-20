#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int s=6,l=4,b=5,h=5;
	float r=2;
	printf("\n area of square %d",s*s);
	printf("\n Perimeter of square %d",4*s);
	printf("\n area of rectangle %d",l*b);
	printf("\n perimeter of a rectangle %d",2*(l+b));
	printf("\n area of circle %f", 3.14*r*r);
	printf("\n perimeter of circle %f",2*3.14*r);
	printf("\n area of triangle %d",(l*h)/2);
	getch();
}