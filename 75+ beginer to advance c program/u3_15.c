#include<conio.h>
#include<stdio.h>

int main()
{
    char ch;
    clrscr();
    printf("Enter Any Character: ");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\nCharecter Is Vowel");
    }
    else
    {
        printf("\nCharacter Is Consonat");
    }
    
    getch();
    return 0;
}
