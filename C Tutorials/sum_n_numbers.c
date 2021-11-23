#include <stdio.h>
int main()
{
    int i, sum = 0, total, num;
    printf("Enter total numbers you want sum for:\n");
    scanf("%d", &total);
    printf("Enter numbers one by one: \n");
    for (i = 0; i < total; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("The total of numbers you just entered is: %d", sum);
    return 0;
}
