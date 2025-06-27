#include<conio.h>
#include<stdio.h>

 int main()
{
	float l,b,p;
	clrscr();
	printf("Entet length:");
	scanf("%f",&l);
	printf("Entet Breadth:");
	scanf("%f",&b);
	p=2*(l+b);
	printf("\nPremeter Of Rectangle=%f",p);
	getch();
	return 0;
}
