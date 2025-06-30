/*
Program to add two integer number 
add_avg_2int.c 
practice1.c 
*/

#include <stdio.h>
int main()
{ 
    int value1, value2,sum;

    float Avg;
    printf("Enter the value 1 : ");
    scanf("%d",&value1);
    printf("Enter the value 2 : ");
    scanf("%d",&value2);
    sum = value1+value2;
    Avg = sum/2;
    printf("\nvalue1 = %d",value1);
    printf("\nvalue2 = %d",value2);
    printf("\nsum = %d",sum);
    printf("\nAverage = %.2f",Avg);
    return 0;
}

