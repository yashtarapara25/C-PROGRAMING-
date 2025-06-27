#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b,c;
    clrscr();
    printf("Enter The Value Of A: ");
    scanf("%d",&a);
    printf("Enter The Value Of B: ");
    scanf("%d",&b);
    printf("\n Before Swaping\n A=%d\n B=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n After Swaping\n A=%d\n B=%d\n",a,b);
    getch();
    return  0;
}