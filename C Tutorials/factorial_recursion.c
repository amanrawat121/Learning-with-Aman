#include <stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("Please enter a number:\n");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial for %d is %d.", num, factorial);
    return 0;
}

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * (fact(num - 1)));
    }
}