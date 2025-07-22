/*
Finding Least Common Denominator-LCD of two of numbers                           
find_lcd_from_two_numbers.c
practice33.c
good to go. 
it exactly same code of practice32.c 
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
    printf("The LCD of %d and %d is %d", i, j, k);
    else
    {
        k=k+1;
        goto again;
    }
getch();

}




