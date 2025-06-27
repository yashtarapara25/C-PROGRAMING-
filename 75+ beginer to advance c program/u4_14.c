#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,f=1;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is =%d\n",n,f);
    getch();
    return 0;
}