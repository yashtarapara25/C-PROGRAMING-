//Circular doubly linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct yash node;

struct yash
{
	int data;
	node *pre;
	node *next;
};
int count=0;

node *temp;
node *last=NULL;

void add();
void dis();
void del();
void ser();
void updt();

void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("[1] Add Data");
		printf("\n[2] Display Data");
		printf("\n[3] Delete Data");
		printf("\n[4] Count Data");
		printf("\n[5] Serch Data");
		printf("\n[6] Update Data");
		printf("\n[7] Exit ");

		printf("\nEnter Your Choice :");
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
				del();
				break;
			case 4:
			printf("Total Record : %d",count);
			break;

			case 5:
				ser();
				break;
			case 6:
				updt();
				break;

			case 7:
				exit(0);

			default :
			printf("\nInvalid choice..!!");
		}
		getch();
	}


}
void add()
{
	temp=(node *)malloc(sizeof(node));

	printf("\nEnter Value :");
	scanf("%d",&temp->data);
	if(last==NULL)
	{
		temp->next=temp;
		temp->pre=last;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;

	}
	last=temp;
	count++;
	printf("\nValue inserted..!!");
}
void dis()
{
	if(last==NULL)
     {
	printf("\nRecored Not found..!!");
     }
     else
     {
	int sr=1;
	do
	{
		 temp=temp->next;
		printf("\n%d] : %d",sr++,temp->data);

	}while(temp!=last);
     }

}
void del()
{}
void ser()
{}
void updt()
{}