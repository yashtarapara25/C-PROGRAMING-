#include<conio.h>
#include<stdio.h>

struct std
    {
        int rno;
        char name[20];
        int m1,m2,m3;
        int sum;
        float ave;
        char grade;
    }s1;

int main()
{
    clrscr();
    printf("Student Roll Number:");
    scanf("%d",&s1.rno);
    printf("Enter A Name :");
    scanf("%s",&s1.name);
    printf("Enter First Subject Mark");
    scanf("%d",&s1.m1);
    printf("Enter Second Subject Mark :");
    scnaf("%d",&s1.m2);
    printf("Enter Third Subject Mark :");
    scanf("%d",&s1.m3); 
    
    clrscr();
    printf("Roll Number Is :%d",s1.rno);
    printf("Student Name Is :%s",s1.name);
    printf("First Subject Mark :%d",s1.m1);
    printf("Secound Subject Mark :%d",s1.m2);
    printf("Third Subject Mark :%d",s1.m3);
    s1.sum=s1.m1 + s1.m2 + s1.m3;
    printf("Sum=%d",s1.sum);
    s1.ave=s1.sum/3.0;
    printf("Average=%d",s1.ave);
    
    if(s1.ave>=90)
    {
        printf("Grade = A+");
    }
    else if(s1.ave>80)
    {
        printf("Grade = A");
    }
    else if(s1.ave>70)
    {
        printf("Grade = b+");
    }
    else if(s1.ave>60)
    {
        printf("Grade = b");
    }
    else if(s1.ave>50)
    {
        printf("Grade = c+");
    }
    else if(s1.ave>40)
    {
        printf("Grade = c");
    }
    else if(s1.ave>33)
    {
        printf("Grade = d");
    }
     else
    {
        printf("You Are Fail !!");
    }
    
    getch();
    return 0;
        
    
}