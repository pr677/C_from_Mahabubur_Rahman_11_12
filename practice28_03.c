/*
Finding sum of  the series 2^2 + 4^2 + 6^2 ... N^2    
sum_of_even_square_series.c
practice28.c 
is not running , ld returned 1 exit status .
According to Gpt : - But the reason your code is not running and gives: 
ld returned 1 exit status
better version
---- good with printf version ---- 
*/


#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    // Loop through even numbers from 2 up to N
    for (i = 2; i <= N; i += 2) {
        printf("%d^2", i);
        sum += i * i;

        if (i + 2 <= N)
            printf(" + ");
    }

    printf(" = %ld\n", sum);

    return 0;
}



