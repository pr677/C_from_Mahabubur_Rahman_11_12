/* 
Program to convert celsius temperature to Fahrenheit 
temp_celsius2fahrenheit.c 
practice4.c
*/

#include <stdio.h>
int main (){
    float c, f; 
    printf("Enter temperature in Celcius : "); 
    scanf("%f", &c    );
    f= 9*c/5+32; 
    printf("The temperature in Fahrenheit is : %.2f", f);
}

