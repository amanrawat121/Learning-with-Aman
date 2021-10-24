#include <stdio.h>
int main(int argc, char const *argv[])
{
    float c, f;
    printf("This is a program to convert Celcius to Farenheit.\nPlease Enter temperature in Celcius:\n");
    scanf("%f", &c);

    f = (9 * c)/5 + 32;

    printf("It's %.2f Farenheit, Enjoy! ", f);
        return 0;
}
