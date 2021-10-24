#include <stdio.h>
int main()
{
    float kg, g, mg;
    printf("This Program will help you in conversion of Weight.\nPlease Enter any mumber in Kilograms:\n");
    scanf("%f", &kg);
    g = kg * 1000;
    mg = g * 10;

    printf("%.2f Kg is:\n%.2f grams.\n%.2f mg. Enjoy!", kg, g, mg);

        return 0;
}
