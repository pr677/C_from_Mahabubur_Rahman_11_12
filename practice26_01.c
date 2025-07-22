/*
Finding sum of  the series 1.5+2.5+3.5 ..... 
sum_of_1.5_series.c
practice26.c 
is not running 
need to correct.
*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 1.5; i <= N; i+1)   // Condition , copied from book  
    {
        sum = sum + i;
    }


}



