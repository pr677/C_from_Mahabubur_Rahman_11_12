/*
Determining whether a number is divided by both 2 and 3 or not 
find_multiple_of_both_2and3.c 
practice11.c
*/

#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility
    if (number % 2 == 0 && number % 3 == 0) 
        printf("The number is divisible by both 2 and 3.\n");
     else 
        printf("The number is not divisible by 2 or 3.\n");

    return 0;
}
