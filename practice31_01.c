/*
Finding minimum of a group of numbers                           
find_min_from_numbers.c
practice31.c 
good to go
*/

#include <stdio.h>
#include <conio.h> 

void main()
{
    int s[10], n, i, min;
    printf("How many number ? ");
    scanf("%d", &n);
    printf("Enter %d integer numbers : \n", n); 
    for(i=0; i<n; i++)
    scanf("%d", &s[i]);
    min=s[0];
    for (i=1; i<n; i++)
    {
        if (s[i] < min)
        min=s[i];
        else
        min=min;
        
    }
printf("%d is the minimum of given numbers. ", min);
getch();


}




