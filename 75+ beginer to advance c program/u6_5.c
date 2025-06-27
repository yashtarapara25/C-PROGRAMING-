#include<conio.h>
#include<stdio.h>

int main()
{
    char a[20],b[20];
    int i=0;
    clrscr();
    printf("Enter Name:");
    scanf("%s",&a);
    while(a[i] != 0)
    {
        (b[i] = a[i]);
        i++;
    }
    b[i] != 0;
    printf("\n\n%s",b);
    
    getch();
    return 0;
}