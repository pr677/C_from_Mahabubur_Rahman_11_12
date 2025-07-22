/*
Determining whether a number is even or odd
find_even_odd.c
practice11.c
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if ((n %2)==0)
    printf("The number is even. ");
    else
    printf("The number is odd. ");


    return 0;
}

