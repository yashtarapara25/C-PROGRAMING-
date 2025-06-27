#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Any Number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\n\nThis Number Is Even");
    }
    else
    {
        printf(" \n\nThis Number Is Odd");
    }
    getch();
    return 0;
}