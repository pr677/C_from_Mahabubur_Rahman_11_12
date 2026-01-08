/*
Finding Greatest Common Divisor-GCD of two of numbers                           
find_gcd_from_two_numbers.c
practice32.c 
Binary GCD Algorithm (Stein's Algorithm)
This uses bitwise operations instead of division/modulus.  The GCD of 2 and 3 is 1. 
Pros:
Very fast (especially for big integers)
No division or modulus operations
Cons:
 Bit tricky 
*/

#include <stdio.h>

int binaryGCD(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    // both even
    if ((a & 1) == 0 && (b & 1) == 0)
        return 2 * binaryGCD(a >> 1, b >> 1);

    // a even, b odd
    else if ((a & 1) == 0)
        return binaryGCD(a >> 1, b);

    // a odd, b even
    else if ((b & 1) == 0)
        return binaryGCD(a, b >> 1);

    // both odd
    else if (a > b)
        return binaryGCD((a - b) >> 1, b);
    else
        return binaryGCD((b - a) >> 1, a);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD is %d\n", binaryGCD(a, b));

    return 0;
}







