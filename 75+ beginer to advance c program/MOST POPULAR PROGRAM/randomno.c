#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int lower, upper, random_number;
    clrscr();
    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    if (upper <= lower)
    {
        printf("Invalid range. Upper limit must be greater than lower limit.\n");
        return 1;
    }
    srand(time(0));
    random_number=(rand()%(upper-lower+1))+lower;
    
    printf("Random number between %d and %d is: %d\n", lower, upper, random_number);
    
    getch();
    return 0;
}