// this program find location of element in array
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], i, num;
    printf("This program will find the location of element in an array using linear search.\nPlease enter any 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Please enter the number you want to search for:\n");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            printf("This number exist in the array at arr[%d] index.\n", arr[i]-1);
        }
        // else if ((num!==arr[i]) && (i==9))
        // {
        //     printf("The number %d doesn't exist in this array. Maybe you didn't entered this when I asked you to enter it. Have a nice day");
        // }
    }

    return 0;
}
