#include<stdio.h>
#include<conio.h>

int main()
{
    char i,j;
    clrscr();
    
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf(" %c ",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
