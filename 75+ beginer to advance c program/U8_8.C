#include<conio.h>
#include<stdio.h>

int main()

{
	int a[5],i,sum=0;
	float ave;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter Value [%d] :",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	ave=sum/5.0;
	printf("\nAverage = %f",ave);

	getch();
	return 0;
}
