#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,t,p;
    clrscr();
    printf("Enter First Subject Mark:");
    scanf("%d",&a);
    printf("Enter Secound Subject Mark:");
    scanf("%d",&b);
    printf("Enter Third Subjct Mark:");
    scanf("%d",&c);
    t=a+b+c;
    p=t/3;
    printf("\n\nTotal=%d",t);
    printf("\nPercentege=%d\n",p);
    
    if(p>=70)
    {
        printf("Distinction");
    }
    else  if(p>=60 & p<70)
    {
        printf("First Class");
    }
    else  if(p>=50 & p<60)
    {
        printf("Secound Class");
    }
    else  if(p>=40 & p<50)
    {
        printf("Third Class");
    }
    else
    {
        printf("fail");
    }
    
    
    getch();
    return 0;
}