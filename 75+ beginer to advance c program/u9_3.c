#include<stdio.h>
#include<conio.h>


struct emp
{
    int emp_no;             
    char emp_name[50];      
    float basic_salary;     
    float DA;              
    float HRA;              
    float TA;               
    float PF;              
    float gross_salary;     
}emp[2];

int main() 
{
    int  i;
    clrscr();
    for(i=0;i<2;i++)
    {
    
    printf("Enter %d Employee Number: ",i+1);
    scanf("%d", &emp[i].emp_no);

    printf("Enter %d Employee Name: ",i+1);
    scanf("%s", emp[i].emp_name);

    printf("Enter Basic Salary:");
    scanf("%f", &emp[i].basic_salary);
    
    printf("\n\n");
    }
    
    clrscr();
    for(i=0;i<2;i++)
    {
    emp[i].DA = emp[i].basic_salary * 0.10; 
    emp[i].HRA = emp[i].basic_salary * 0.15; 
    emp[i].TA = emp[i].basic_salary * 0.05; 
    emp[i].PF = emp[i].basic_salary * 0.12;  
    emp[i].gross_salary = emp[i].basic_salary + emp[i].DA + emp[i].HRA + emp[i].TA - emp[i].PF;
    
    printf("%d Employee Number: %d\n",i+1, emp[i].emp_no);
    printf("%dEmployee Name: %s\n",i+1,emp[i].emp_name);
    printf("Basic Salary: %f\n", emp[i].basic_salary);
    printf("DA: %f\n", emp[i].DA);
    printf("HRA: %f\n", emp[i].HRA);
    printf("TA: %f\n", emp[i].TA);
    printf("PF: %f\n", emp[i].PF);
    printf("Gross Salary: %f\n\n\n", emp[i].gross_salary);
    }  
    getch();    
    return 0;
}