#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum=0;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum Of Number =%d",sum);
    getch();
    return 0;
}