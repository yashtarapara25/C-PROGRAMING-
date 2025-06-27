#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Your Age:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("\n\nYou Are Eliigible To Cast");
    }
    else
    {
        printf(" \n\nYou Are Not Eligeble To Cast");
    }
    getch();
    return 0;
}