#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    clrscr();
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b); 
    printf("Enter Third Number:");
    scanf("%d",&c); 
    if(a>b)
    {
        if(a>c)
        {
        printf("\n\nFirst Number Is Maximum");
        }
        else 
        {
        printf("\n\nThird  Number Is Maximum");
        }
    }
    
    else
    {
       if(b>c)
        {
        printf("\n\nSecound Number Is Maximum");
        }
       else 
        {
        printf("\n\nThird  Number Is Maximum");
        } 
        
    }
    getch();
    return 0;
}