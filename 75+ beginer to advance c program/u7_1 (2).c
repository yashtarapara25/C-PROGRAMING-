#include<conio.h>
#include<stdio.h>
 
int sum();
int main()
{
    int a,b; 
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("\n\nSum  = %d",sum(a,b));
    getch();\
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}
