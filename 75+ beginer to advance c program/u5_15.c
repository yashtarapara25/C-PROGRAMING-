#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    clrscr();
    for(i='a';i<='e';i++)
    
    {
       for(j=i;j<='e';j++)
        {
            printf(" %c",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
