/* 
Finding the smallest of three integer numbers 
smallest_of3int.c
practice15.c
the input in the book is 34 45 26 but output says "23 is the smallest number".
here && is "logical and operator" for writing two conditions together 
*/

#include <stdio.h> 

int main(){

    int x, y, z;
    printf("Enter the three integer numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x<y && x<z)                            // when x<y and also x<z 
    printf("%d is the smallest number ",x);
    else if (y<x && y<z)                      // when y<x and also y<z 
    printf("%d is the smallest number ",y);
    else                                      // otherwise 
    printf("%d is the smallest number ",z);

    return 0; 
}








