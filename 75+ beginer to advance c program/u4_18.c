#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,a=0,b=1,c;
    clrscr();
    printf("Enter Any Number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
    }
    getch();
    return 0;
}
