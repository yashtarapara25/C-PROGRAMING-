#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter Any Year:");
    scanf("%d",&a);
    if(a%400==0 || a%4==0&a%100!=0)
    {
        printf("\n\nThis Year Is LeapYear");
    }
    else
    {
        printf(" \n\nThis Year Is Not LeapYear");
    }
    getch();
    return 0;
}