#include<conio.h>
#include<stdio.h>

 int main()
{
	int a,b;
	clrscr();
	printf("Entet Nummber Of Chirs:");
	scanf("%d",&a);
	printf("Entet Total cost:");
	scanf("%d",&b);
	printf("The Cost Of Each Chair:%d",(b/a));

	getch();
	return 0;
}
