#include<conio.h>
#include<stdio.h>

 int main()
{
	int h,b;
	float a;
	clrscr();
	printf("Entet Hight:");
	scanf("%d",&h);
	printf("Entet Base:");
	scanf("%d",&b);
	a=0.5*h*b;
	printf("\nArea=%f",a);
	getch();
	return 0;
}
