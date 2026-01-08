/*
Finding sum of  the series 1^2 + 2^2 + 3^2 + ... + N^2 = ..... 
sum_of_square_series.c
practice24.c 
books has error because it take 5 as first i, so there must be some kind of mistake .
it is actually a series of 5. 
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int i, N;
    long Sum=0;
    printf("\nEnter last number of the series: "); 
    scanf("%d", &N);
    printf("1^2 + 2^2 + 3^2 + ... + %d^2 = ");


    for ( i = 5; i <=N; i=i+5)     //Condition 
    {
        Sum = Sum +i;
    }
    printf("%ld", Sum);


    getch();
    
}







