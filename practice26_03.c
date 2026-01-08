/*
Finding sum of  the series 1.5+2.5+3.5 ..... = 
sum_of_1.5_series.c
practice26.c 
better version . customizable. 
flexible version of your C program where the user can enter:
-Start value of the series
-Step size (increment)
-End value (last number to include in the series)


one of the output of this code is: 
..........................................
Enter the start value of the series: 1
Enter the step size (increment): .5
Enter the end value of the series: 7 

Series: 1.0 + 1.5 + 2.0 + 2.5 + 3.0 + 3.5 + 4.0 + 4.5 + 5.0 + 5.5 + 6.0 + 6.5 + 7.0 = 52.00
.........................................

*/

#include <stdio.h>

int main() {
    float start, step, end;
    float sum = 0.0;

    printf("Enter the start value of the series: ");
    scanf("%f", &start);

    printf("Enter the step size (increment): ");
    scanf("%f", &step);

    printf("Enter the end value of the series: ");
    scanf("%f", &end);

    printf("\nSeries: ");

    float current = start;
    int first = 1;

    while (current <= end) {
        if (!first)
            printf(" + ");
        printf("%.1f", current);
        sum += current;
        current += step;
        first = 0;
    }

    printf(" = %.2f\n", sum);

    return 0;
}





