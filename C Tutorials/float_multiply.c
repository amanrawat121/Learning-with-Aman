#include <stdio.h>
int main()
{
    float a, b;
    printf("This program will multiply any two float numbers.\nPlease enter the first number:\n");
    scanf("%f", &a);
    printf("Please enter second number:\n");
    scanf("%f", &b);

    printf("%f * %f = %f:\n", a, b, a*b);
    return 0;
}
