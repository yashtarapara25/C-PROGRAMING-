#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],i,m=0;
    clrscr();
    for(i=0;i<=4;i++)
    {
        printf("Enter %d number:",i + 1);
        scanf("%d",&a[i]);
            
            
        if(i==0)
        {
        m=a[i];
        }
    
        if(m>a[i])
        {
    
        m=a[i];        
       }
    
    }
    printf("\n\nMinimum Value Is : %d",m);
    
}