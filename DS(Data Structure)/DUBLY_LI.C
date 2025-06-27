//Doubly linked list

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
node *first=NULL;
node *last;

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
	last->next=NULL;
	if(first==NULL)
	{
		temp->pre=NULL;
		first=temp;
	}
	else
	{
		last->next=temp;
		temp->pre=last;
	}
	last=temp;
	count++;
	printf("\nValue inserted..!!");
}
void dis()
{
     if(first==NULL)
     {
	printf("\nRecored Not found..!!");
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
	printf("\nRecored Not found..!!");
     }
     else
     {
	int dv,flag=0;
	printf("\nEnter Delete Value :");
	scanf("%d",&dv);

	temp=first;
	if(dv==first->data)
	{
		if(first==last)
		{
			first=NULL;
			free(last);
		}
		else
		{
			first=first->next;
			first->pre=NULL;
			free(first->pre);
		}
		flag=1;
	}
	else
	{
		temp=first->next;
		if(dv==temp->data)
		{
			temp->pre->next=temp->next;
			if(last==dv)
			{
				temp=last->pre;

			}
			else
			{
				temp->next->pre=temp->pre;
			}
			free(temp);
			flag=1;

		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("\nValue %d Not Found...",dv);
	}
	else
	{
		printf("\nValue %d Removed ..!!",dv);
		count--;
	}

     }

}
void ser()
{
     if(first==NULL)
     {
	printf("\nRecored Not found..!!");
     }
     else
     {
	int sr=1,sv,flag=0;

	printf("\nEnter Value :");
	scanf("%d",&sv);

	temp=first;

	while(temp!=NULL)
	{

		printf("\n%d] : %d",sr++,temp->data);
		if(sv==temp->data)
		{
		       printf("<----Value Found ...!!");
		       flag=1;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("\nValue %d Not Fond...!! ",sv);
	}
     }

}
void updt()
{
      if(first==NULL)
     {
	printf("\nRecored Not found..!!");
     }
     else
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
		printf("\nValue %d Not Fond...!! ",uv);
	}
	else
	{
		printf("\nValue %d Removed ...!!",uv);
	}
     }
}

