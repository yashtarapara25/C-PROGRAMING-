#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    clrscr();
    printf("Enter Name:");
    scanf("%s",&a);
    
    printf("\n\n%s",strlwr(a));
    getch();
    return 0;
}