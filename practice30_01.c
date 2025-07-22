/*
Finding maximum of a group of numbers                           
find_max_from_numbers.c
practice30.c 
*/

#include <stdio.h>
#include <conio.h> 

void main()
{
    int s[10], n, i, max;
    printf("How many number ? ");
    scanf("%d", &n);
    printf("Enter %d integer numbers : \n", n); 
    for(i=0; i<n; i++)
    scanf("%d", &s[i]);
    max=s[0];
    for (i=1; i<n; i++)
    {
        if (s[i] > max)
        max=s[i];
        else
        max=max;
        
    }
printf("%d is the maximum of given numbers", max);
getch();


}
