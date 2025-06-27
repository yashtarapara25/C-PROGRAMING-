#include<conio.h>
#include<stdio.h>

 int main()
{
	int n,rev=0,rem;
    clrscr();
    printf("Enter One Number:");
    scanf("%d",n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf(" Reverse Number Is =%d",rev);
    getch();
	return 0;
}
    