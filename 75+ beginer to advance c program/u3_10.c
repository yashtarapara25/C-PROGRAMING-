#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,e;
    clrscr();
    printf("Enter First Student Age:");
    scanf("%d",&a);
    printf("Enter Secound Student Age:");
    scanf("%d",&b);
    printf("Enter Third Student Age:");
    scanf("%d",&c);
    printf("Enter Fourth Student Age:");
    scanf("%d",&d);
    printf("Enter Fifth Student Age:");
    scanf("%d",&e);
 
    // s1
    if(a>21)
    {
        printf("\n\nFirst Student Age is More than 21 Year");
    }
    else if(a<21)
    {
        printf(" \n\nFirst Student Age Is less than 21 Year");
    }
    else
    {
        printf("\n\nFirst Student Age Is  21 Year ");
    }   
    
    // s2
    if(b>21)
    {
        printf("\n\nSecound Student Age is More than 21 Year");
    }
    else if(b<21)
    {
        printf(" \n\nSecound Student Age Is  Less than 21 Year");
    }
    else
    {
        printf("\n\nSecound Student Age Is  21 Year ");
    }
    
     // s3
    if(c>21)
    {
        printf("\n\nThird Student Age is More than 21 Year");
    }
    else if(c<21)
    {
        printf(" \n\nThird Student Age Is  Less than 21 Year");
    }
    else
    {
        printf("\n\nThird Student Age Is  21 Year ");
    }
    
          // s4
    if(d>21)
    {
        printf("\n\nFourth Student Age is More than 21 Year");
    }
    else if(d<21)
    {
        printf(" \n\nFourth Student Age Is Less than 21 Year");
    }
    else
    {
        printf("\n\nForuth Student Age Is  21 Year ");
    }
    
        // s5
    if(e>21)
    {
        printf("\n\nFifth Student Age is More than 21 Year");
    }
    else if(e<21)
    {
        printf(" \n\nFifth Student Age Is  Less than 21 Year");
    }
    else
    {
        printf("\n\nFifth Student Age Is 21 Year ");
    }
    getch();
    return 0;
}