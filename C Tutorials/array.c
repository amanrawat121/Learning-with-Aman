#include <stdio.h>
#include <conio.h>

int main()
{
    int i, opt, arr[10];
a:
    printf("This program will print your array.\nPlease enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your entered elements in array will look like below:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
b:
    printf("\nWanna try again? Enter 1 for Yes and 2 for No\n");
    scanf("%d", &opt);
    if (opt == 1)
    {
        goto a;
    }
    else if (opt == 2)
    {
        printf("Program terminated. Have a nice day\n");
    }
    else
    {
        printf("Please select from 1 and 2 only\n");
        goto b;
    }

    return 0;
}
