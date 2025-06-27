#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    clrscr();
    printf("Enter The Cost Prize:");
    scanf("%d",&a);
    printf("\nEnter The Selling Prize:");
    scanf("%d",&b);
    if(a<b)
    {
        printf("\n\n %d Rs profit",(b-a));
    }
    else
    {
        printf(" \n\n%d Rs Lose",(a-b));
    }
    getch();
    return 0;
}