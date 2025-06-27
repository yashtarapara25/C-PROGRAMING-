#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    clrscr();
    printf("Enter First Intiger Number:");
    scanf("%d",&a);
    printf("\nEnter Secound Intiger Number:");
    scanf("%d",&b);
    if(a==b)
    {
        printf("\n\nThey Are Equal");
    }
    else
    {
        printf(" \n\nThey Are Not Equal");
    }
    getch();
    return 0;
}