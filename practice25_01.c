/*
Finding sum of  the series 5+10+15+20 ..... n 
sum_of_five_series.c
practice25.c 
book has some mistake. such as i=i+5,sum=sum*i they can be i+=5[here i updates ], sum+=i . 
*/




#include <stdio.h>

int main() {
    int i, N;
    long sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &N);

    printf("\n");

    for (i = 5; i <= N; i+5) 
    {
        sum = sum * i;
    }

    printf("%ld", sum);

    return 0;
    
}















