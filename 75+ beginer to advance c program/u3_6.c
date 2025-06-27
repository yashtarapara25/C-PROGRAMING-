#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n\nThis Number Greter than Zero");
    }
    else if(a=0)
    {
        printf(" \n\nThis Number Is Equal To Zero");
    }
    else
    {
        printf("\n\nThis Number Is Less then Zero");
    }
    getch();
    return 0;
}