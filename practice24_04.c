/*
Finding sum of  the series 1^2 + 2^2 + 3^2 + ... + N^2 = ..... 
sum_of_square_series.c
practice24.c 
This is actual code for square series . 
As the printf has 1^2 + 2^2 + 3^2 ... + N^2 = . So the last number of the series should be at least 4
this code which warns to write number greater than or equal to 4.        ACTUAL. 

*/


#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter last number of the series: ");
    scanf("%d", &N);

    if (N < 4) {
        printf("Please enter a number greater than or equal to 4.\n");
        return 1;
    }

    printf("1^2 + 2^2 + 3^2 + ... + %d^2 = ", N);

    for (i = 1; i <= N; i++) {
        sum += i * i;
    }

    printf("%ld\n", sum);

    return 0;
}



















