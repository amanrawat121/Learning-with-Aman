// this program will calculate the area & perimeter of a rectangle with given length and breadth
#include <stdio.h>
int main()
{
    float l, b, area, perimeter;

    printf("This program will print area and perimeter of a rectangle.\nPlease enter the length:\n");
    scanf("%f", &l);
    printf("Please enter the breadth:\n");
    scanf("%f", &b);

    area = l*b;
    perimeter = l+l+b+b;

    printf("Area of the rectangle: %.2f\nPerimeter of the rectangle: %.2f", area, perimeter);

    return 0;
}
