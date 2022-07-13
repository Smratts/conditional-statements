// Program to display a number if it is negative
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%i", &number);
    // true if number is less than 0
    if (number < 0)
     {
        printf("You entered %i \n", number);
    }
    printf("The if statement is easy.");
    return 0;
}
