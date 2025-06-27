#include<conio.h>
#include<stdio.h>

int main()
{
    
    int a,b,ch;
    clrscr();
    printf("\t\t\t\t    CALCULATER \n");
    printf("\n\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.divison");
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&ch);
    printf("\n\nEnter First Number:");
    scanf("%d",&a);
    printf("Enter Secound Number:");
    scanf("%d",&b);
    
    switch(ch)
    {
        case 1:
        printf("\nAdition =%d",(a+b));
        break;
        
        case 2:
        printf("\nSubstraction =%d",(a-b));
        break;
        
        case 3:
        printf("\nMultiplication =%d",(a*b));
        break;
        
        case 4:
        printf("\nDivison =%d",(a/b));
        break;
        
        default:
        printf("\nSelect Between 1 to 4 Number.......");
    }
    
    getch();
    return 0;
}
