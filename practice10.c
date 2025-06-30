/*
Finding Area of a circle 
circle_area.c
practice10.c
*/

#include <stdio.h> 
int main(int argc, char const *argv[])
{
    float radius, area;
    printf("Enter radius of the circle (in cm) : ");
    scanf("%f", &radius);
    area= (22/7)*(radius*radius);
    printf("Area of the circle is : %f square cm", area);
    return 0;
}

