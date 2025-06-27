#include<conio.h>
#include<stdio.h>

 int main()
{
	int p,r,n;
	float i;
	clrscr();
	printf("Entet principal:");
	scanf("%d",&p);
	printf("Entet Rate Of Intrest:");
	scanf("%d",&r);
	printf("Entet Number Of The year:");
	scanf("%d",&n);
	i=p*r*n/100;
	printf("\n\nIntrest=%f",i);
	getch();
	return 0;
}
