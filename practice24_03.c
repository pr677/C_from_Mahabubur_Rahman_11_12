/*
Finding sum of  the series 5 + 10 + 15 + ... + N = ..... 
sum_of_five_series.c
practice24.c 
actual series of 5 . following " practice24_01.c " .
THIS IS FOR 5 SERIES. THE INPUT SHOULD BE MULTIPLE OF 5. 
*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter last number of the series: ");
    scanf("%d", &N);

    printf("5 + 10 + 15 + ... up to %d = ", N);

    for (i = 5; i <= N; i += 5) {
        sum += i;
    }

    printf("%ld\n", sum);

    return 0;
}






