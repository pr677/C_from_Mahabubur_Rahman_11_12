/* Program to convert Fahrenheit temperature to Celsius */
// convert temperature from fahrenheit to celsius.c
// temp_fahrenheit2celsius.c
#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = 5 * (f - 32)/9 ;

    printf(" The temperature in celsius :  %.2f°F\n", c);
    return 0;
} 

