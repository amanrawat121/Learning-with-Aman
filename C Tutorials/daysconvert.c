// convert days into weeks, months, year
// not perfect you can do it too. please try
#include <stdio.h>
int main()
{
    int days, weeks, months, year;
    printf("Enter the days:\n");
    scanf("%d", &days);

    weeks = days / 7;
    months = days / 30;
    year = days / 365;

    printf("There are %d weeks, %d months and %d years in %d days", weeks, months, year, days);

    return 0;
}
