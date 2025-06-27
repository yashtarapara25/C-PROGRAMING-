//switch case using find maximum number and minimum number

#include<conio.h>
#include<stdio.h>

void main()
{
	int c,i,a[10],n,mx,mn;
	clrscr();
	do{
	printf("1.Print Maximum");
	printf("\n2.Print Minimum");

	printf("\n\nEnter A Choice :");
	scanf("%d",&c);


	printf("Enter First Number :");
	scanf("%d",&a[0]);
	printf("Enter Secound Number :");
	scanf("%d",&a[1]);

	switch(c)
	{
			case 1:
			if(a[0]>a[1])
			{
				printf("Maximum Number Is %d",a[0]);
			}
			else
			{
				printf("Maximum Number Is %d",a[1]);
			}
			break;

			case 2:
			if(a[0]<a[1])
			{
				printf("Minimum Number Is %d",a[0]);
			}
			else
			{
				printf("Minimum Number Is %d",a[1]
				);
			}
			break;


	}
	}while(c!=0);
	getch();
}