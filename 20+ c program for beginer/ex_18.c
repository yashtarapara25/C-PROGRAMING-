#include<stdio.h>
#include<conio.h>

int main()
{
    int i,sum=0;
    clrscr();
    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
        
    }
    printf("\n\nSum=%d",sum);
    getch();
    return 0;
}