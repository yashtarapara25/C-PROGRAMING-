#include<stdio.h>
#include<conio.h>

int main()
{
    int n,rev=0,rem;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("Revers number is =%d",rev);
    getch();
    return 0;
}