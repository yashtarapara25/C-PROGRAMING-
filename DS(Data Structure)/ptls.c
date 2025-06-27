//liner search with pointer,dynamic memory allocation

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void nl();
void main()
{

    int i,n,*ptr,sv,flag=0;
    clrscr();
    printf("Enter Number OF Elements  : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    nl();
    
    for(i=0;i<n;i++)
    {
        printf("Enter %d Value : ",i+1);
        scanf("%d",ptr+i);
    }
    nl();
    printf("Enter Serch Value : ");
    scanf("%d",&sv);
    nl();
    for(i=0;i<n;i++)
    {
         printf("\n\t%d) : %d",i+1,*(ptr+i));
         if(sv==*(ptr+i)) 
         {
             printf("<---Value[%d] Found... ",sv);
             flag=1;
         }  
    }
    nl();
    if (flag==0)
    {
        printf("\nValue %d NOT Found ...",sv);
    }
    getch();

}
void nl()
{
    printf("\n\n");
}