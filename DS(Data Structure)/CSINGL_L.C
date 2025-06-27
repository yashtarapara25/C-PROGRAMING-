//Circular singly linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct yash node;

struct yash
{
	int data;
	node *next;
};
int count=0;

node *temp;
node *last=NULL;
node *ers;

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
	temp=(node*)malloc(sizeof(node));

	printf("\nEnter Value : ");
	scanf("%d",&temp->data);

	if(last==NULL)
	{
		temp->next=temp;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
	}
	last=temp;
	count++;
	printf("\nValue Inserted..!!");
}
void dis()
{
	if(last==NULL)
	{
		printf("\nRecord Not Found ...!!");
	}
	else
	{
		int sr=1;
		do
		{

			temp=temp->next;
			printf("\n%d] : %d",sr++,temp->data);

		}while(last!=temp);
	}
}
void del()
{
	if(last==NULL)
	{
		printf("\nRecord Not Found..!!");
	}
	else
	{
		int dv, flag=0;

		printf("\nEnter Delete Value :");
		scanf("%d",&dv);
		do
		{
			if(dv==temp->next->data)
			{
				count--;
				ers=temp->next;
				temp->next=ers->next;

				if(ers==last)
				{
					if(last==temp)
					{
						last=NULL;
						break;

					}
					else
					{
						last=temp;

					}
					flag=1;
					printf("\nValue %d Removed ...!!",dv);
					free(ers);
				}

			}
			temp=temp->next;

		}while(temp!=last);
		if(flag==0)
		{
			printf("\nValue %d NOT Found ..!!",dv);
		}
	}
}
void ser()
{
	if(last==NULL)
	{
		printf("\nRecord Not Found ...!!");
	}
	else
	{
		int sr=1,sv,flag=0;
		printf("\nEnter Serch Value :");
		scanf("%d",&sv);
		do
		{

			temp=temp->next;
			printf("\n%d] : %d",sr++,temp->data);
			if(sv==temp->data)
			{
				printf("<---Value %d Found ..!!",sv);
				flag=1;
			}

		}while(last!=temp);
		if(flag==0)
		{
			printf("\nValue %d Not Found",sv);
		}

	}
}
void updt()
{
	if(last==NULL)
	{
		printf("\nRecord Not Found ...!!");
	}
	else
	{
		int uv,flag=0;
		printf("\nEnter Value You Want be Update :");
		scanf("%d",&uv);
		do
		{
			temp=temp->next;
			if(uv==temp->data)
			{
				printf("\nEnter New Value :");
				scanf("%d",&temp->data);
				flag=1;
			}

		}while(last!=temp);
		if(flag==0)
		{
			printf("\nValue %d Not Found",uv);
		}
		else
		{
			printf("\nValue %d Updated..!!",uv);
		}

	}
}

