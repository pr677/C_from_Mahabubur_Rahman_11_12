/*
Finding Greatest Common Divisor-GCD of two of numbers                           
find_gcd_from_two_numbers.c
practice32.c 
The GCD of 2 and 3 is 1. 
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integer numbers separated by space: ");
    scanf("%d %d", &a, &b);

    // Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The GCD is %d\n", a);

    return 0;
}




