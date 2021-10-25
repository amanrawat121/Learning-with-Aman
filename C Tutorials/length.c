// This program will convert cm in m and km
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float cm, m, km;
    printf("This program will convert cm in m and km.\nPlease enter length in cm.\n");
    scanf("%f", &cm);

    m = cm / 100;
    km = cm / 100000;

    printf("%.2f cm = %f m \n", cm, m);
    printf("%.2f cm = %f km\n", cm, km);
    return 0;
}
