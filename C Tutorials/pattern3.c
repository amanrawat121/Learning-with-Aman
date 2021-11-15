#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, j;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}