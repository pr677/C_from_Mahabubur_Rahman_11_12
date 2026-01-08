/*
Finding sum of  the series 1+3+5 ..... 
sum_of_even_series.c
practice23.c 
    can scan 1 as N, but print 2+4+6+...+1=0 ;
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int i, N;
    long Sum=0;
    printf("\nEnter last number of the series: ");
    scanf("%d", &N);
    printf("2 + 4 + 6+ ... + %d = ", N);

    for (i=2; i<=N; i= i+2)              //Condition 
    {
        Sum = Sum +i;
    }                      // End of for 
    printf("%ld", Sum);

    getch();



}






