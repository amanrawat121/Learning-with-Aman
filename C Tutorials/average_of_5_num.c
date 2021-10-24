#include <stdio.h>

void main()
{
    int a, b, c, d, e, av;
    printf("This program will print average of max. 5 numbers.\nPlease enter first number:\n");
    scanf("%d", &a);
    printf("Please Enter second nummber:\n");
    scanf("%d", &b);
    printf("Please Enter third nummber:\n");
    scanf("%d", &c);
    printf("Please Enter fourth nummber:\n");
    scanf("%d", &d);
    printf("Please Enter fifth nummber:\n");
    scanf("%d", &e);

    av = (a + b + c + d + e) / 5;

    printf("The average of %d, %d, %d, %d and %d is %d", a, b, c, d, e, av);
}
