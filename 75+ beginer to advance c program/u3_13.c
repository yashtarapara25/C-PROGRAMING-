#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b,c,d,o;
    //char o;
    clrscr();
    printf("\t\t\t\tGENERAL KNOWLADGE TEST \n");
    printf("\nQ-1: Which Is The Largest City Of India?");
    getch();
    printf("\na.Mumbai\t \t \t");
    getch();
    printf("b.Delhi\n");
    getch();
    printf("c.Rajesthan\t \t \t");
    getch();
    printf("d.Chenai\n");
    getch();    
    printf("\nChoose Your Option=>");
    scanf("%d",&o);
    
    if(o==2)
    {
        printf("\nYou Choose Right Option");
    }    
    else
    {
        printf("\nYou Choose Wrong Option\n");
        printf("b Is Right Option ");
    }
    //q-2
    getch();
    printf("\n\n\nQ-2: Which Is The Largest State Of India?");
    getch();
    printf("\na.Mumbai\t \t \t");
    getch();
    printf("b.Delhi\n");
    getch();
    printf("c.Rajesthan\t \t \t");
    getch();
    printf("d.Chenai\n");
    getch();    
    printf("\nChoose Your Option=>");
    scanf("%d",&o);
    
    if(o==3)
    {
        printf("\nYou Choose Right Option");
    }    
    else
    {
        printf("\nYou Choose Wrong Option\n");
        printf("c Is Right Option ");
    }
    getch();
    return 0;
}
