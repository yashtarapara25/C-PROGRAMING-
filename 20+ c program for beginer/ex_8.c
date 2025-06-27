#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d;
    char x[30];
    clrscr();
    printf(" First Product Name:");
    scanf("%s",&x);
    printf("\n       Product Quntity:");
    scanf("%d",&a);
    printf("\n       Product Rate:");
    scanf("%d",&b);
        printf("\n \n Secound Product Name:");
    scanf("%s",&x);
    printf("\n         Product Quntity:");
    scanf("%d",&c);
    printf("\n         Product Rate:");
    scanf("%d",&d);
    printf("\n \n \t \t \t \t Total Amount=%d",(a*b+c*d));
    getch();
    return 0;
}