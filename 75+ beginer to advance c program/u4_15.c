#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,a=0,flag=0;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1
        }
    }
    if(flag==0)
    {
    printf("\n\nPrime Number\n");
    }
    else
    {
        printf("\n\nNot Prime Number");
    }
    getch();
    return 0;
}