    #include<stdio.h>
#include<conio.h>

int main()
{
    int i,sum=0;
    float ave;
    clrscr();
    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("\n\nSum=%d",sum);
    ave=sum/10.0;
    printf("\nAverage=%f",ave);
    getch();
    return 0;
}