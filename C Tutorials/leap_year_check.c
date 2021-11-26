#include <stdio.h>
int main()
{
    int year;
    printf("This program will check for a leap year.\nPlease enter any year:\n");
    scanf("%d", &year);
    if (year > 1000)
    {
        if (year % 4 == 0)
        {
            printf("%d is a leap year. ThankYou!", year);
        }
        else
        {
            printf("%d is not a leap year.", year);
        }
    }
    else
    {
        printf("Please enter a number greater than 1000.");
    }

    return 0;
}
