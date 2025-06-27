#include<conio.h>
#include<stdio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Number:");
    scanf("%d",&a);
    printf("\nSqure=%d",(a*a));
    printf("\ncube=%d",(a*a*a));
    getch();
    return 0;
}