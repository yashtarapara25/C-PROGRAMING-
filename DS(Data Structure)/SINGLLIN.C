//singly linkd list

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
node *first=NULL;
node *last;
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
	temp=(node *)malloc(sizeof(node));

	printf("Enter Value :");
	scanf("%d",&temp->data);
	temp->next=NULL;

	if(first==NULL)
	{
		first=temp;
	}
	else
	{

		last->next=temp;

	}
	last=temp;
	count++;
	printf("\nValue inserted succesfully..!!");
}

void dis()
{
	if(first==NULL)
	{
		printf("\nRecord Not Found..!!");
	}
	else
	{
		int sr=1;

		temp=first;

		while(temp!=NULL)
		{
			printf("\n%d] : %d",sr++,temp->data);
			temp=temp->next;

		}
	}
}
void del()
{
	if(first==NULL)
	{
		printf("\nRecord Not found..!!");
	}
	else
	{

		int flag=0,dv;
		printf("\nEnter Delete Value :");
		scanf("%d",&dv);

		temp=first;

		if(first->data==dv)
		{
			ers=first;
			first=first->next;
			count--;
			free(ers);
			printf("Value %d Removed...!!",dv);
			flag=1;

		}
		else
		{
			while(temp!=NULL)
			{
				if(dv==temp->next->data)
				{
					ers=temp->next;
					temp->next=ers->next;

					if(last==ers)
					{
						temp=last;
					}
					count--;
					free(ers);
					printf("Value %d Removed..!!",dv);
					flag=1;
				}

				temp=temp->next;

			}
			if(flag==0)
			{
				printf("Value %d Not Found ..!!",dv);
			}
		}
	}
}
void ser()
{
	if(first==NULL)
	{
		printf("\nRecord Not Found..!!");
	}
	else
	{
		int sv,flag=0,sr=1;

		printf("\nEnter serch value:");
		scanf("%d",&sv);

		temp=first;


			while(temp!=NULL)
			{
				printf("\n%d] : %d",sr++,temp->data);
				if(sv==temp->data)
				{
					printf("<---Value %d Found ..!!",sv);
					flag=1;
				}
				temp=temp->next;
			}
			if(flag==0)
			{
				printf("\nValue %d Not Found ..!! ",sv);
			}

	}
}
void updt()
{
		int uv,flag=0;

		printf("\nEnter Value You Want Be Update :");
		scanf("%d",&uv);

		temp=first;


			while(temp!=NULL)
			{

				if(uv==temp->data)
				{
					printf("\nEnter New Value :");
					scanf("%d",&temp->data);
					flag=1;
				}
				temp=temp->next;
			}
			if(flag==0)
			{
				printf("\nValue %d Not Found ..!! ",uv);
			}
			else
			{
				printf("\n Value %d Updated..!!",uv);
			}



}
