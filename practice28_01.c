/*
Finding sum of  the series 2^2 + 4^2 + 6^2 ... N^2   = 
sum_of_even_square_series.c
practice28.c 
is not running , ld returned 1 exit status .
According to Gpt : - But the reason your code is not running and gives: 
ld returned 1 exit status
is due to a missing return 0; in main(). This causes the linker to fail when compiling with strict settings (e.g., in GCC).
logic bug: 
Your loop statement:
    for (i = 2; i <= N; i + 2)
does not increment i — it should be:
    for (i = 2; i <= N; i += 2)
*/

#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 2; i <= N; i+2)   // Condition , copied from book  
    {
        sum = sum +i*i;
    }


}



