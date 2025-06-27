//using switch case print 1 to 10 number and 10 to 1 reverse number

#include<conio.h>
#include<stdio.h>

void main()
{
	int c,i;
	do{
	printf("Print One To Ten Number");
	printf("\nPrint Ten To One Number");

	printf("\n\nEnter A Choice :");
	scanf("%d",&c);

	switch(c)
	{
			case 1:
			for(i=1;i<10;i++)
			{
				printf(" %d ",i);
			}
			break;

			case 2:
			for(i=10;i>1;i--)
			{
				printf(" %d ",i);
			}
			break;
	}
	}while(c!=0);
	getch();
}