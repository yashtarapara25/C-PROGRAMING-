#include<conio.h>
#include<stdio.h>

int main()
{
	int a[10],i,pt=0,nt=0;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] :",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<10;i++)
	{

		if(a[i]>0)
		{
		    pt++;
		}
		else
		{
		    nt++;
		}
	}
	printf("\nPositive Number Total is %d  :",pt);
	printf("\nNegative Number Total is %d :",nt);

	getch();
	return 0;
}
