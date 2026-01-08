/* 
Programme to add & avg two floating number 
add_avg_2float.c
practice2.c 
*/
#include <stdio.h>
 int main(){
    float value1,value2,sum;
    float avg;
    printf ("Enter the value 1  : ");
    scanf("%f",&value1);
    printf("Enter the value 2  : ");
    scanf("%f",&value2);
    sum = value1+value2;
    avg = sum/2;
    printf("\n value1=%f",value1);
    printf("\n value2= %f",value2);
    printf("\n sum=%f",sum);
    printf("\n avg=%.2f",avg);
    return 0;
}
