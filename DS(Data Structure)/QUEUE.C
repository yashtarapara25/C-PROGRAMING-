#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int x[size],front=0,rear=0;

void add();
void dis();
void del();

void main()
{
	while(1)
	{
		int ch;
		clrscr();
		printf("\n[1] Add Data");
		printf("\n[2] Display Data");
		printf("\n[3] Count Data");
		printf("\n[4] Delet Data");
		printf("\n[5] Exit");

		printf("\n\nEnter Your Choice :");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			add();
			break;

			case 2:
			dis();
			break;

			case 3:
			printf("\n Total Record : %d",rear-front);
			break;

			case 4:
			del();
			break;

			case 5:
			exit(0);

			default :
			printf("\nInvalid Choice....");
		}
		getch();
	}

}
void add()
{
	if(rear>size-1)
	{
		printf("Queue Is Full...");
	}
	else
	{
		printf("Enter Value :");
		scanf("%d",&x[rear]);
		printf("Value Inserted Successfully....");
		rear++;

	}

}
void dis()
{
	if(rear==0)
	{
		printf("Queue Is Empty...");

	}
	else
	{
		int i;
		for(i=front;i<rear;i++)
		{
			printf("\n %d",x[i]);
		}
	}


}
void del()
{

	if(rear==0)
	{
		printf("Queue Is Empty...");
	}
	else
	{
		front++;
		printf("Value Delete Successfuly...");

		if(front==rear)
		{
			front=0;
			rear=0;
		}

	}

}