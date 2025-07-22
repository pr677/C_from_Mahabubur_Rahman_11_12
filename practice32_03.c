/*
Finding Greatest Common Divisor-GCD of two of numbers                           
find_gcd_from_two_numbers.c
practice32.c 
Naive/Brute Force Method.  The GCD of 2 and 3 is 1. 
Check all numbers from 1 to the smaller of the two inputs, and find the largest one that divides both.
Pros:
Very simple to understand
Cons:
Inefficient for large numbers (O(min(a, b)) time)
*/

#include <stdio.h>

int main() {
    int a, b, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD is %d\n", gcd);

    return 0;
}





