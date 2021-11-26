#include <stdio.h>
int main()
{
    int i, total, arr[100];
    printf("This program will reverse the content of an array.\nPlease enter the total elements:\n");
    scanf("%d", &total);
    printf("Enter numbers:\n");
    for ( i = 0; i < total; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The original array was:\n");
    for ( i = 0; i < total; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("The new array is:\n");
    
    for ( i = total-1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}
