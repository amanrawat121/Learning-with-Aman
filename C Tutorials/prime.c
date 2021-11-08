#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, isPrime = 1;
    printf("Enter a number to check if this is prime or not: ");
    scanf("%d", &num);

    // Conditions for composite number
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
// Composite number condition ended
    if (num == 0 || num == 1)
    {
        printf("This is neither a prime nor a composite number");
    }
    else if (isPrime == 1)
    {
        printf("Entered number is a prime number");
    }
    else
    {
        printf("Entered number is not a prime number");
    }
    
    

    return 0;
}
