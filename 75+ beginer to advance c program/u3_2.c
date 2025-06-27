#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    clrscr();
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Secound Number:");
    scanf("%d",&b);
    if(a<b)
    {
        printf("\n\nFirst Number Is Minimum");
    }
    else
    {
        printf(" \n\nSecound Number Is Minimum");
    }
    getch();
    return 0;
}