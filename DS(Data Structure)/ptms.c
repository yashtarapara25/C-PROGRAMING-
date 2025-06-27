//Merge sort with pointer,dynamic memory allocation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,x,y,z,*ptrx,*ptry,j,temp,*ptrz;
    clrscr();
    
    printf("Enter Number OF Elements[x] : ");
    scanf("%d",&x);
    printf("Enter Number OF Elements[x] : ");
    scanf("%d",&y);
    
    ptrx=(int*)malloc(x*sizeof(int));
    ptry=(int*)malloc(y*sizeof(int));
    ptrz=(int*)malloc(x+y*sizeof(int));
    
    
    printf("\n Value OF X......\n");
    for(i=0;i<x;i++)
    {
        printf("Enter %d Value : ",i+1);
        scanf("%d",ptrx+i);
    }
    printf("\n Value OF Y......\n");
    for(j=0;j<y;j++)
    {
        printf("Enter %d Value : ",j+1);
        scanf("%d",ptry+j);
    }
    i=0,j=0,z=0;
    while(i<x&&j<y)
    {
        
        if(*(ptrx+i)<*(ptry+j))
        {
        
               *(ptrz+z)=*(ptrx+i); 
               i++;
        }
        else
        {
                *(ptrz+z)=*(ptry+j);
                j++;
        }  
        z++;      
    }
    while (i<x)
    {
            *(ptrz+z)=*(ptrx+i);
            i++;
            z++;
    }
    while (j<y)
    {
            *(ptrz+z)=*(ptry+j);
            j++;
            z++;
    }
    for(i=0;i<(x+y);i++)
    {
        printf("\n%d) : %d",i+1,*(ptrz+i));
    }
    getch();
}
