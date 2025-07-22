/*
Finding sum of  the series 5+10+15+20 ..... n = 
sum_of_five_series.c
practice25.c 
correct version. 
*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 5; i <= N; i += 5) {
        printf("%d", i);
        sum += i;

        if (i + 5 <= N) {
            printf(" + ");
        }
    }

    printf(" = %ld\n", sum);

    return 0;
}

