/*
Finding area of isosceles triangle
triangle_area.c 
practice8.c
*/

#include <stdio.h>

 int main (){
    float base, height, area;
    printf("Enter the base of the triangle (in centimeter) : ");
    scanf("%f", &base);
    printf("Enter the height of the triangle (in centimeter): ");
    scanf("%f", &height);
    area=(base*height)/2 ;
    printf("The area of triangle is : %f square centimeter ", area); 
    return 0; 
}

