#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Any Number:");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("\n\nThis Number Is Positive");
    }
    else
    {
        printf(" \n\nThis Number Is Negative");
    }
    getch();
    return 0;
}