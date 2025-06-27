#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter  Any  Number:");
    scanf("%d",&a);
    if(a%5==0)
    {
       printf("\n\nThis Number Is Devided By 5");
    }
    else if(a%11==0)
    {
        printf(" \n\n%This Number Is Devided By 11" );
    }
    else
    {
        printf("\n\nThis Number Is Not Devided By 5 Or 11");
    }
    getch();
    return 0;
}