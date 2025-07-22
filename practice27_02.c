/*
Finding sum of  the series 1 + 1/2^2 + 1/3^2 + 1/4^2 .....N  = 
sum_of_harmonic_series.c
practice27.c 
corrected full code.
*/

#include <stdio.h>

int main() {
    int i, N;
    double sum = 0.0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 1; i <= N; i++) {
        sum += 1.0 / (i * i);
    }

    printf("Sum of the series 1 + 1/2^2 + 1/3^2 + ... + 1/%d^2 = %.6lf\n", N, sum);

    return 0;
}





