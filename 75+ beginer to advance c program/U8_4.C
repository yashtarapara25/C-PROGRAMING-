#include<conio.h>
#include<stdio.h>

int main()
{
	int a1[10],a2[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] :",i+1);
		scanf("%d",&a1[i]);

	}

	for(i=0;i<10;i++)
	{
		a2[i]=a1[i];
	}

	for(i=0;i<10;i++)
	{
		printf("\n%d",a2[i]);
	}
	getch();
	return 0;
}
