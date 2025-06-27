#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b,c;
    clrscr();
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.divison\n");
    printf("\n\nEnter First Number:");
    scanf("%d",&a);
    printf("Enter Secound Number:");
    scanf("%d",&b);
    printf("\n\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
    {
    printf("\nAdditon=%d",(a+b));
    }
    else if(c==2)
    {
    printf("\nSubstraction =%d",(a-b));
    }
    else if(c==3)
    {
    printf("\nMultipllication=%d",(a*b));
    }
    else if(c==4)
    {
    printf("\nDivison=%d",(a/b));
    }
    else
    {
        printf("\nYou Can Choose Only 1 To 4 Number");
    }
    getch();
    return 0;
}
