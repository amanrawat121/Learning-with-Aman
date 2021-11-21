#include <stdio.h>
int main()
{
    int i, num, sum = 0, total;
    printf("Enter the total numbers:\n");
    scanf("%d", &total);

    printf("Enter %d numbers:\n", total);
    for (i = 0; i < total; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("The Average for the number you just entered is: %d", sum / total);
    return 0;
}
