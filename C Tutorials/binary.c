#include <stdio.h>
int main()
{
    int arr[5], i, num, mid, min, max;
    printf("This program will perform binary search.\n");
    printf("Enter the numbers one by one (5 numbers only)\nPlease be sure that number are either in ascending or descending order:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Please enter a number to find:\n");
    scanf("%d", &num);
    min = 0;
    max = 4;
    mid = (min + max) / 2;
    for (i = 0; i < 5; i++)
    {
        if (arr[mid] == num)
        {
            printf("Number=%d is present at %d", num, mid + 1);
            break;
        }
        else if (arr[mid] > num)
        {
            max = mid - 1;
            mid = (min + max) / 2;
        }
        else if (arr[mid] < num)
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }

    return 0;
}
