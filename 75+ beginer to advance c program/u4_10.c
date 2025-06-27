#include<conio.h>
#include<stdio.h>

 int main()
{
	int i,sum=0;
    clrscr();
    for(i=2;i<=200;i+=2)
    {
      sum=sum+i;   
    }
    printf("Total Of First 100 Even Number =%d",sum);
	getch();
	return 0;
}
    