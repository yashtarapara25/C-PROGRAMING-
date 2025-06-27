#include<conio.h>
#include<stdio.h>
 
int sum();
int main()
{
    int a[3],i;
    float b;
    for(i=0;i<3;i++)
    {
      printf("Enter %d Number :",i+1);
      scanf("%d",&a[i]);
      b=a[i];   
    }
    printf("Avarage = %f",b);
    getch();
    return 0;
}
int avg(int x,int y,int z)
{
    float w;
    w=x+y+z/3.0;
    return w;
}
