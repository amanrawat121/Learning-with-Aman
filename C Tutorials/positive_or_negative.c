#include <stdio.h>
int main()
{
    int num;
    printf("This program will identify positive or negative number.\nPlease enter a number:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d is a negative number.", num);
    }
    else if (num == 0)
    {
        printf("Zero is neither positive nor negative.");
    }
    else
    {
        printf("%d is a positive number.", num);
    }

    return 0;
}
