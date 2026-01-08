/*
Finding Greatest Common Divisor-GCD of two of numbers                           
find_gcd_from_two_numbers.c
practice32.c 
Recursive Euclidean Method (as a variation)
Just a different form — still Euclidean, but recursive.
This uses the rule:
                gcd(a,b)=gcd(b,amodb)
Until b=0, then the result is a.
*/

#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &num1, &num2);

    // Handle negative input (optional)
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Call recursive GCD function
    int result = gcd(num1, num2);

    // Output result
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}












