#include <stdio.h>
int main()
{
    int rows, columns, i, j, a[10][10], b[10][10], sum[10][10];
    printf("This program will add two matrices.\nPlease enter the number of rows (1-10):\n");
    scanf("%d", &rows);
    printf("Please enter the number of columns (1-10):\n");
    scanf("%d", &columns);

    printf("Matrix 1: Please enter the elements of first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 2: Please enter the elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }
    printf("The sum of two matrices is:\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        
    }
    

    return 0;
}
