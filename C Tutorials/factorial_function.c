#include <stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("Please enter a number:\n");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d is %d", num, factorial);
    return 0;
}
// factorial = num*factorial(number-1)
// actual function for factorial calculation
int fact(int num)
{
    int i;
    for (int i = num - 1; i >= 1; i--)
    {
        num = num * i;
    }
    return (num);
}