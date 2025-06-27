#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    clrscr();
    printf("Enter Natural Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        
    }
    printf("\n\nSum=%d",sum);
    getch();
    return 0;
}