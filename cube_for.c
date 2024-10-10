#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("\n Enter a no to find its cube ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d is cube",i*i*i);
	}
	return 0;
	
}
