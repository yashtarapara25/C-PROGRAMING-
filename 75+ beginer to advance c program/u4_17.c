#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a=0,b=1,c;
    clrscr();
    
    for(i=1;i<=11;i++)
    {
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
    }
    getch();
    return 0;
}
