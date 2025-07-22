/*
Finding Factorial of a given number                          
find_factorial.c
practice29.c 
*/

#include <stdio.h>
#include <conio.h> 

void main()
{
    int i, x;
    long fact=1;
    printf("\nEnter a positive integer: ");
    scanf("%d", &x);
    if (x==0)
    printf("\nFactorial of %d is: %ld", x, fact);
    else
    {
        for ( i=2; i<=x; i++)
        fact= fact*i;
        printf("\nFactorial of %d is: %ld", x, fact);
    }
getch();    

}










