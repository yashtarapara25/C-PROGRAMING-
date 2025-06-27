#include<conio.h>
#include<stdio.h>

 int main()
{
	int i,sum=0;
    clrscr();
    for(i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    printf("\n Sum=%d",sum);
	getch();
	return 0;
}
    