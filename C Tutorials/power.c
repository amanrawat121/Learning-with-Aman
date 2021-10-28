#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, power;
    printf("Enter the number you want power for:\n");
    scanf("%d", &a);

    printf("Enter the power:\n");
    scanf("%d", &b);

    power = pow(a, b);

    printf("%d raise to power of %d is %d", a, b, power);
    return 0;
}
