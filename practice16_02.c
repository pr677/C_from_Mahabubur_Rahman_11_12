/* Finding whether a number is positive of negative 
find_pos_neg_num.c 
practice16.c */
#include <stdio.h>

int main() {
    int a;
    
    printf("Insert a number: ");
    scanf("%d", &a);

    if (a > 0)
        printf("The number is positive.\n");
    else if (a < 0)
        printf("The number is negative.\n");
    else
        printf("It is zero.\n");

    return 0;
}

