/*
Finding sum of  the series 1^2 + 2^2 + 3^2 + ... + N^2 = ..... 
sum_of_square_series.c
practice24.c 
This is actual square series code.   ACTUAL. 
As the printf has 1^2 + 2^2 + 3^2 ... + N^2 = . So the last number of the series should be at least 4
*/



#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter last number of the series: ");
    scanf("%d", &N);

    printf("1^2 + 2^2 + 3^2 + ... + %d^2 = ", N);

    for (i = 1; i <= N; i++) {
        sum += i * i;
    }

    printf("%ld\n", sum);

    return 0;
}







