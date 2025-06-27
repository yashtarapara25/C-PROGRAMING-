#include<conio.h>
#include<stdio.h>

int main()
{
	int a[4][4],i,j,b=1;
	clrscr();

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("Enter %d Value :",b);
		scanf("%d",&a[i][j]);
		b++;
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n%d",a[i][j]);
		}
	}
	getch();
	return 0;
}
