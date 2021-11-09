#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, opt, ch;
    printf("This program will do basic arithmetic calculations on two numbers.\n");
    start:
    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    printf("Enter an options from the list below.\n");
    printf("1 for Addition.\n");
    printf("2 for Subtraction.\n");
    printf("3 for Multiplication.\n");
    printf("4 for Division.\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("The Addition of %d and %d is %d\n", a, b, a + b);
        break;

    case 2:
        printf("The Subtraction of %d and %d is %d\n", a, b, a - b);
        break;

    case 3:
        printf("The multiplication of %d and %d is %d\n", a, b, a * b);
        break;

    case 4:
        printf("The divide of %d and %d is %d\n", a, b, a / b);
        break;

    default:
        printf("Please enter a valid input from the list above.\n");

        break;
    }
    printf("Wanna Try again??\nPress '1' for Yes and '2' for No: ");
    scanf("%d", &ch);
    if (opt == 1)
    {
        goto start;
    }
    else if (opt == 2)
    {
        printf("Program terminated!! Have a nice day");
    }
    return 0;
}
