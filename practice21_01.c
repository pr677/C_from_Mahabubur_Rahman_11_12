/*
Finding sum of  the series 1+3+5 ..... 
sum_of_odd_series.c
practice21.c 

 can scan 1 as N. but print 1+3+5+...+1=1  , can scan 3 as N. but print 1+3+5+...+3=4  , can scan 5 as N. but print 1+3+5+...+5=9  ,  
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int i, N;
    long Sum=0;
    printf("\nEnter last number of the series: ");
    scanf("%d", &N);
    printf("1 + 3 + 5 + ... + %d = ", N);

    for (i=1; i<=N; i=i+2)                 // Condition 
    {
        Sum = Sum + i;
    }                                     // End of for 
    printf("%ld", Sum);
    getch();

}




