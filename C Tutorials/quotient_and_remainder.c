#include <stdio.h>
int main()
{
    int a, b, q, r;
    printf("This program will print quotient & remainder after divide.\nPlease enter the numbers in A/B format.\n");
    printf("Enter A:\n");
    scanf("%d", &a);
    printf("Enter B:\n");
    scanf("%d", &b);
    q = a / b;
    r = a % b;
    printf("%d/%d has a quotient: %d and remainder: %d", a, b, q, r);
    return 0;
}
