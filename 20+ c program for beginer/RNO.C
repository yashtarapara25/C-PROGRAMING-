#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int l,h,r;
	clrscr();
	printf("---------------------------------RANDOME NUMBER---------------------------------");
	printf("| \t\t\t\t\t\t\t\t\t       |");
	printf("\n  Enter Lower Limit :");
	scanf("%d",&l);
	printf("\n|------------------------------------------------------------------------------|");
	printf(" \n  Enter Higher Limit :");
	scanf("%d",&h);
	printf("\n|------------------------------------------------------------------------------|");
	srand(time(0));
	r=(rand()%(l-h+1))+l;

	printf("\n\t\t\t\tRANDOME NUMBER = %d",r);
	printf("\n| \t\t\t\t\t\t\t\t\t       |");
	printf("--------------------------------------------------------------------------------");


	getch();
}