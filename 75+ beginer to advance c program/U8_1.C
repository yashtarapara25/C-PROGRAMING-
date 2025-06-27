#include<conio.h>
#include<stdio.h>

int main()
{
	int a[5],i,j=1;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter Value [%d] :",i+1);
		scanf("%d",&a[i]);
		j++;

	}

	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
	return 0;
}
