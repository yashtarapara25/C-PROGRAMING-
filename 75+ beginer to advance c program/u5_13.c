#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    clrscr();
    
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
