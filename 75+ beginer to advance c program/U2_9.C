#include<conio.h>
#include<stdio.h>

 int main()
{
	float r,d,c,a;
	clrscr();
	printf("Entet The Redios Of Circle:");
	scanf("%f",&r);
	d=2*r;
	c=2*3.14*r;
	a=3.14*(r*r);
	printf("\nDiameter OF Circle=%f",d);
	printf("\nCircumference OF Circle=%f",c);
	printf("\nArea OF Circle=%f",a);
	getch();
	return 0;
}
