#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a=0,r;
    int c;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        a=(r*r*r)+a;
        n=n/10;
        
    }
    if(c==a)
    {
        printf("\n\nArmstrong Number");
    }
    else
    {
     printf("\n\nNot Armstrong Number");
    }
    getch();
    return 0;
}
