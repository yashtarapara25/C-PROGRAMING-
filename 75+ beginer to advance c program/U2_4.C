#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b;
	clrscr();
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Secound Number:");
	scanf("%d",&b);

	printf("\n \nAdditon Is=%d",(a+b));
	printf("\n \nSubstraction Is=%d",(a-b));
	printf("\n \nMultiplication Is=%d",(a*b));
	printf("\n \nDivison Is=%d",(a/b));
	getch();
}
