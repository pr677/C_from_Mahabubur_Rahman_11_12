//Program to Formula Calculation
//code for addition ,subtraction,multiplication and division of two integer number
//add_sub_mul_div_two_int_number.c
//practice3.c

#include <stdio.h>

int main() {
    int v1, v2;
    int Sub, Sum, Mul;
    float Div;

    printf("Enter the v1: ");
    scanf("%d", &v1);

    printf("Enter the v2: ");
    scanf("%d", &v2);

    Sum = v1 + v2;
    Sub = v1 - v2;
    Mul = v1 * v2;
    Div = v1 / (float)v2;

    printf("\n%d + %d = %d", v1, v2, Sum);
    printf("\n%d - %d = %d", v1, v2, Sub);
    printf("\n%d * %d = %d", v1, v2, Mul);
    printf("\n%d / %d = %.2f", v1, v2, Div);

    return 0;
}

