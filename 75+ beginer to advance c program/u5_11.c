#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    clrscr();
    
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
