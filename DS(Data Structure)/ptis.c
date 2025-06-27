//insection sort with pointer,dynamic memory allocation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,n,*ptr,j,temp;
    clrscr();
    
    printf("Enter Number OF Elements : ");
    scanf("%d",&n);
    
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d Value : ",i+1);
        scanf("%d",ptr+i);
    }
    for(i=1;i<n;i++)
    {
        temp=*(ptr+i);
        j=i-1;
        while(temp<*(ptr+j) && j>=0)
        {
            *(ptr+j+1)=*(ptr+j);
            j--;
        }
        *(ptr+j+1)=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d) : %d",i+1,*(ptr+i));
    }
    getch();
}
