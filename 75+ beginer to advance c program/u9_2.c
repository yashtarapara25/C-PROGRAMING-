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
}emp;

int main() 
{
    clrscr();
    printf("Enter Employee Number: ");
    scanf("%d", &emp.emp_no);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.emp_name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic_salary);
    
    
    clrscr();
    emp.DA = emp.basic_salary * 0.10; 
    emp.HRA = emp.basic_salary * 0.15; 
    emp.TA = emp.basic_salary * 0.05; 
    emp.PF = emp.basic_salary * 0.12;  
    emp.gross_salary = emp.basic_salary + emp.DA + emp.HRA + emp.TA - emp.PF;

    printf("Employee Number: %d\n", emp.emp_no);
    printf("Employee Name: %s\n", emp.emp_name);
    printf("Basic Salary: %f\n", emp.basic_salary);
    printf("DA: %f\n", emp.DA);
    printf("HRA: %f\n", emp.HRA);
    printf("TA: %f\n", emp.TA);
    printf("PF: %f\n", emp.PF);
    printf("Gross Salary: %f\n", emp.gross_salary);
       
    getch();    
    return 0;
}