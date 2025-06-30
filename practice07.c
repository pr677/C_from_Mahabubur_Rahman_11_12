/* 
convert a value of centimeter to inch
length_cm2inch.c
practice7.c
*/

#include <stdio.h> 

int main (){
    
    float inch, cm;
    printf("Enter the value of length in centimeter:  ");
    scanf("%f",&cm);
    inch=cm/2.54;
    printf("%f centimeters = %f inches\n",cm,inch);
    

    return 0;
}

