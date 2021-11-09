#include <stdio.h>
#include <conio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want factorial for: ");
    scanf("%d", &num);
    printf("Factorial of %d is = %d", num, factorial(num));
    return 0;
}
