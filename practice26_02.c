/*
Finding sum of  the series 1.5+2.5+3.5 ..... = 
sum_of_1.5_series.c
practice26.c 
CORRECTED version .
in previous i was declared as int, but you're using 1.5
    int i;       // ❌ can't store decimals like 1.5
so should use float or double instead.
The loop : 
    i + 1   // ❌ does nothing
wrong data type: 
    long sum = 0;  // ❌ not suitable for floating point
so should use: 
    float sum = 0.0;  // or double for higher precision

*/


#include <stdio.h>

int main() {
    float i, N;
    float sum = 0.0;

    printf("Enter the last number of the series: ");
    scanf("%f", &N);  // Use %f for float input

    printf("\nSeries: ");

    for (i = 1.5; i <= N; i += 1.0) {
        printf("%.1f", i);
        if (i + 1.0 <= N)
            printf(" + ");
        sum += i;
    }

    printf(" = %.2f\n", sum);

    return 0;
}





