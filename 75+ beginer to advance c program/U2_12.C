#include<conio.h>
#include<stdio.h>

 int main()
{
	int a,b,c;
	clrscr();
	printf("Entet First Nummber:");
	scanf("%d",&a);
	printf("Entet Secound Number:");
	scanf("%d",&b);
	printf("\nBefore Swpaing\n a=%d\n b=%d");
	c=a;
	a=b;
	b=c;
	printf("\n\nAfter Swaping\n a=%d\n b=%d");

	getch();
	return 0;
}
