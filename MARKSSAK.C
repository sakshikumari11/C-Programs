#include<stdio.h>
#include<conio.h>
void main()
{
	int math,phy,chem,total,mathphy;
	clrscr();
	printf("\n Enter a number of Math = ");
	scanf("%d",&math);
	printf("\n Enter a number of Phy = ");
	scanf("%d",&phy);
	printf("\n Enter a number of Chem = ");
	scanf("%d",&chem);
	if(math>=65 && phy>=55 && chem>=50 && (math+phy+chem>=180) || (math+phy>=140))
	{
		printf("\n You are Eligible ");
	}
	else
	{
		printf("\n You are not Eligible ");
	}
	getch();
}

