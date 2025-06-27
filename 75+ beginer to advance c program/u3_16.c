#include<conio.h>
#include<stdio.h>

int main()
{
    char ch;
    clrscr();
    printf("Enter Any Character: ");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case 'a':
        printf("\nCharecter Is Vowel");
        break;
        
        case 'e':
        printf("\nCharecter Is Vowel");
        break;
        
        case 'i':
        printf("\nCharecter Is Vowel");
        break;
        
        case 'o':
        printf("\nCharecter Is Vowel");
        break;
        
        case 'u':
        printf("\nCharecter Is Vowel");
        break;
        
        default:
        printf("\nCharacter Is Consonat");
    }
    
    getch();
    return 0;
}
