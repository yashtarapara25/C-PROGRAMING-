#include<conio.h>
#include<stdio.h>

int main()
{
    //int a,b,c,d;
    char a;
    clrscr();
    printf("Enter Any Character: ");
    scanf("%c",&a);
    
    printf("\n%c",toupper(a));
    
    getch();
    return 0;
}
