/* 
convert a value of inch to centimeter
length_inch2cm.c
practice6.c
*/

#include <stdio.h> 

int main (){

    float inch, cm;
    printf("Enter the value of length in inch :  ");
    scanf("%f",&inch);
    cm=inch*2.54;
    printf("%f inches= %f centimetres\n",inch,cm);
    


    return 0;
} 

