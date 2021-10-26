// simple interest program
#include <stdio.h>
int main()
{
    float p, r, t, si;

    printf("Enter principal amount:\n");
    scanf("%f", &p);

    printf("Enter rate:\n");
    scanf("%f", &r);

    printf("Enter time:\n");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Your Simple Interest is: %.3f\n", si);

    return 0;
}
