#include<conio.h>
#include<stdio.h>

int main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
	printf("\n");
	}
	getch();
	return 0;
}