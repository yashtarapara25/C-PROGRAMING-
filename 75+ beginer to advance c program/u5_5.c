#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char k='z';
    clrscr();
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",k);
            k--;
        }
        printf("\n");
    }
    getch();
    return 0;
}
