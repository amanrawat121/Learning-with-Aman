#include <stdio.h>
#include <conio.h>

int main()
{
    int num_rows, rows, columns;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &num_rows);

    for (rows = 1; rows <= num_rows; rows++)
    {
        for (columns = 0; columns < rows; columns++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (rows = num_rows-1; rows >= 1; rows--)
    {
        for (columns = 0; columns < rows; columns++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
