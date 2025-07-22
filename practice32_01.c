/*
Finding Greatest Common Divisor-GCD of two of numbers
find_gcd_from_two_numbers.c
practice32.c 
what kind of GCD it is showing is not actual, such as for 2 and 3 is showing : The GCD of 2 and 3 is 6. 
So it might be for Least Common Denominator-LCD .  It is also called LCM (Least Common Multiple) sometimes. 
*/

#include <stdio.h>
#include <conio.h> 

int main()
{
    int i, j, k;
    printf("Enter the two integer numbers using separate by space: ");
    scanf("%d %d", &i, &j);
    if(i>j)
    k=i;
    else
    k=j;
    again:if(k%i==0 && k%j==0)
    printf("The GCD of %d and %d is %d", i, j, k);
    else
    {
        k=k+1;
        goto again;
    }
getch();

}




