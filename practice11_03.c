/*
Determining whether a number is divided by 3 or not 
find_even_odd.c
practice11.c
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if ((n %3)==0)
    printf("The number is divided by 3. ");
    else
    printf("The number is not divided by 3. ");


    return 0;
}

