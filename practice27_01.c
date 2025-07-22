/*
Finding sum of  the series 1 + 1/2^2 + 1/3^2 + 1/4^2 .....N   = 
sum_of_harmonic_series.c
practice27.c 
is not running 
Incorrect loop increment: 
    for (i = 1; i <= N; i+1)  // ❌ WRONG 
This does not increment i because i + 1 just computes the value and discards it.
You should use double for sum and make sure the division is floating point: 
    double sum = 0.0;
    sum += 1.0 / (i * i);

*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 1; i <= N; i+1)   // Condition , copied from book  
    {
        sum = sum + i/(i*i);
    }


}




