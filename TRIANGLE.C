#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3;
	clrscr();
	printf("\n Enter 3 sides of a triangle : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3)
	{
		printf("\n It is an Equivalent Tringle.");
	}
	else if(s1==s2 || s2==s3)
	{
		printf("\n It is an Isosceles Triangle.");
	}
	else
	{
		printf("\n It is a Scalene Triangle. ");
	}
	getch();
}

