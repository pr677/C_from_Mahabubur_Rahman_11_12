/*
Finding Area of a triangle having three sides
triangle_area_from_3sides.c
practice9.c
*/

#include <stdio.h> 
#include <math.h>
int main()
{
    float a, b, c, s,area;
    printf("Enter sides of the triangle periodically (in cm): ");
    scanf("%f %f %f", &a, &b, &c); 
    s = (a+b+c) / 2;
    area=sqrt (s*(s-a) * (s-b) * (s-c)); 
    printf("Perimeter of the triangle: %f cm ", 2*s); 
    printf("\nArea of the triangle: %f sq cm", area);
    return 0;
}


