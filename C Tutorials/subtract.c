#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number greater than your second number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);

    printf ("Subtracting %d from %d gives %d", b, a, a-b);


    return 0;
}
