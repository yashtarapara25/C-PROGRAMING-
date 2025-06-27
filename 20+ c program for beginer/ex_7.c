#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d;
    clrscr();
    printf("Empolyer Id:");
    scanf("%d",&a);
    printf("\nTotal Worked Hours In Month:");
    scanf("%d",&b);
    printf("\nAmountf Per Hours:");
    scanf("%d",&c);
    printf("\n \nOne Month Salary=%d",(d=b*c));
    getch();
    return 0;
}