/*
Finding sum of  the series 1^2 + 2^2 + 3^2 + ... + N^2 = ..... 
sum_of_square_series.c
practice24.c 
This is actual square series code.  
-----------  BEST CODE for practice24.c  -----------
As the printf has 1^2 + 2^2 + 3^2 ... + N^2 = . So the last number of the series should be at least 4

code for print each square step (1^2 = 1, 2^2 =4, etc) . 
this code can even print from 1 square to N square. 
this code is for output in a single line: 1^2 + 2^2 + 3^2 + 4^2 = 30 
perfect code for 1 square to N square. Single-Line Square Series Code: . 
this code is not in HSC book the for loop in book was actually meant for 5+10+15+20+.....n series .
THIS IS PERFECT CAN EVEN PRINT ONLY 1^2=1 AS WELL TAKE 0 AS INPUT . 
*/


#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 1; i <= N; i++) {
        printf("%d^2", i);
        if (i != N)
            printf(" + ");
        sum += i * i;
    }

    printf(" = %ld\n", sum);

    return 0;
}
















