#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b;
    clrscr();
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Secound Number:");
    scanf("%d",&b);
    printf("\nAdditon=%d",(a+b));
    printf("\nSubstraction =%d",(a-b));
    printf("\nMultipllication=%d",(a*b));
    printf("\nDivison=%d",(a/b));
    getch();
    return 0;
}
