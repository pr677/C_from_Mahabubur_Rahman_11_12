/*
Finding the smallest number between two integer numbers
smallest_from2int.c
practice13.c
*/

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the two integer numbers : ");
    scanf("%d %d",&a,&b);
    if (a<b)
    printf("A is less than b.");
    else if(b<a)
    printf("B is less than A");
    else
    printf("These numbers are equal.");

    
    return 0;

}

