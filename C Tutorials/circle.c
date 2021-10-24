// This program will print circumference, diameter and area by putting in the radius
#include <stdio.h>
#define PI 3.142857
int main()
{
    float radius, circumference, diameter, area;
    printf("This program will print circumference, diameter and area by putting in the radius.\nPlease enter the Radius:\n");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    diameter = 2 * radius;
    area = PI * radius * radius;

    printf("Circumference for this circle is: %f.\nDiameter for this circle is: %f\nArea for this circle is: %f", circumference, diameter, area);
    return 0;
}
