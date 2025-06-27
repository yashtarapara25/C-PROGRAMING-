//binary search with pointer,dynamic memory allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,n,*ptr,l,h,m,flag=0,sv;
    clrscr();
    
    printf("Enter Number OF Elements : ");
    scanf("%d",&n);
    
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d Value : ",i+1);
        scanf("%d",ptr+i);
    }
    printf("Enter Serch Value : ");
    scanf("%d",&sv);
    l=0;
    h=n-1;
    while(l<=h)
    {
      m=(l+h)/2;
      if(sv==*(ptr+m))
      {
          printf("Value %d Found ...",sv);
          flag=1;
          break;
      }
      else if(sv<*(ptr+m))
      {
          h=*(ptr+m)-1;
          
      }
      else 
      {
          l=*(ptr+m)+1;
          
      }
    }
    if(flag==0)
    {
        printf("Value %d NOT Found ...",sv);
    }
    getch();
}
