#include<conio.h>
#include<stdio.h>

int main()
{
	int a[3][3],i,j,b=1;
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter Value [%d][%d] :",i+1,j+1);
		scanf("%d",&a[i][j]);
		b++;
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n%d",a[i][j]);
		}
	}
	getch();
	return 0;
}
