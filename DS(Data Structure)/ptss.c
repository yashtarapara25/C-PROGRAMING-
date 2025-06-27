//selection sort with pointer,dynamic memory allocation

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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d) : %d",i+1,*(ptr+i));
    }
    getch();
}
