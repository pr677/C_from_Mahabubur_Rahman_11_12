/*
Finding sum of  the series 1 + 1/2^2 + 1/3^2 + 1/4^2 .....N  = 
sum_of_harmonic_series.c
practice27.c 
better version .
program to print each step like a math series. 
This is actually a famous mathematical series known as the Basel problem. 

*/


#include <stdio.h>

int main() {
    int i, N;
    double sum = 0.0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\nSeries: ");

    for (i = 1; i <= N; i++) {
        printf("1/%d^2", i);
        if (i != N)
            printf(" + ");
        sum += 1.0 / (i * i);
    }

    printf(" = %.6lf\n", sum);

    return 0;
}





