#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    clrscr();
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
