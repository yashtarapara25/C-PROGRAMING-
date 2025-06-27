#include<conio.h>
#include <stdio.h>
#include <time.h>

int main() 
{
    int guess, number, attempts=0,x=1;

    srand(time(0));
    number = rand() % 100 + 1;  
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("|\t\t\t\t\Welcome to the Number Guessing Game!\t\t\t\t\t|\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    getch();
    printf("\n\n\t\t\t     I have selected a number between 1 and 100\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t    C A N  Y O U  G U E S S  I T?\n");

    
    do {
        printf("\nEnter Your %d Attempt:",x);
        scanf("%d", &guess);
        x++;
        attempts++;

        if (guess<number)
        {
            printf("Too low! Try again.\n");
        } 
        else if (guess>number)
        {
            printf("Too high! Try again.\n");
        }
        else 
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
        }

    } while(guess!=number);
     
    getch();
    return 0;
}