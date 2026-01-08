/*
Finding sum of  the series 2^2 + 4^2 + 6^2 ... N^2 =   
sum_of_even_square_series.c
practice28.c 
corrected version for editor. 
*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 2; i <= N; i += 2) {
        sum += i * i;
    }

    printf("Sum of even squares up to %d^2 = %ld\n", N, sum);

    return 0;  // 🔁 This fixes the linker (ld) error
}



