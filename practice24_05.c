/*
Finding sum of  the series 1^2 + 2^2 + 3^2 + ... + N^2 = ..... 
sum_of_square_series.c
practice24.c 
This is actual square series code. 
As the printf has 1^2 + 2^2 + 3^2 ... + N^2 = . So the last number of the series should be at least 4

code for print each square step (1^2 = 1, 2^2 =4, etc) . 
this code can even print from 1 square to N square. 
If we input 1, it will display : Sum of squares from 1^2 to 1^2 = 1   .
For convenient print, please write number higher than 1 . It does not scan floating number. 

RUNABLE CODE. 

*/


#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\nSquare Series Steps:\n");

    for (i = 1; i <= N; i++) {
        int square = i * i;
        printf("%d^2 = %d\n", i, square);
        sum += square;
    }

    printf("\nSum of squares from 1^2 to %d^2 = %ld\n", N, sum);

    return 0;
}





















