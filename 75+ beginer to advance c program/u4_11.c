#include<conio.h>
#include<stdio.h>

 int main()
{
	int i,sum=0;
    clrscr();
    for(i=1;i<=199;i+=2)
    {
        sum=sum+i;
    }
    printf("Total Of First 100 Odd Number =%d",sum);
	getch();
	return 0;
}
    