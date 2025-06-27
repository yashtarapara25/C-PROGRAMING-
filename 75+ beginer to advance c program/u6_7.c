#include<conio.h>
#include<stdio.h>

int main()
{
    char a[20],b[20];
    clrscr();
    printf("Enter Name:");
    scanf("%s",&a);
    printf("Enter last Name:");
    scanf("%s",&b);
    
    printf("\n\n%s",strcat(a,b));
    getch();
    return 0;
}