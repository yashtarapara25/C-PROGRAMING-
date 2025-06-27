#include<conio.h>
#include<stdio.h>

int main()
{

	int array[50],n,i;
	clrscr();

	printf("Enter the number :");
	scanf("%d",&n);


	printf("Enter %d elements :\n",n);

	for(i=0;i<n;i++)
	{

		scanf("%d",&array[i]);

	}

	printf("\n negative elements in the arary are :\n");
	for(i=0;i<n;i++)
	{
		if(array[i]<0)
		{
			printf("%d",array[i]);
		}
	}
	getch();
	return 0;
}
