#include<conio.h>
#include<stdio.h>

int main()
{
    char a[20],b[20];
    clrscr();
    printf("Enter Name:");
    scanf("%s",&a);
    printf("Enter Name:");
    scanf("%s",&b);
    if(strcmp(a,b))
    {
        printf("\nboth are not same");
    }
    else
    {
        printf("\nboth are same");
    }
    getch();
    return 0;
}