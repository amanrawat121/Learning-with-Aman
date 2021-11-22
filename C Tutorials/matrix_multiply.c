#include <stdio.h>
int main()
{
    int r, c, i, j, k, a[100][100], b[100][100], mult[100][100];
    printf("This program will multiply the matrices you entered.\n");
    printf("Please enter the rows for first matrix: ");
    scanf("%d", &r);
    printf("Please enter the columns for first matrix: ");
    scanf("%d", &c);

    // first matrix start here
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Matrix 1: Please enter the element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");

    // second matrix start here.
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Matrix 2: Please enter the element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The resultant matrix would be: \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mult[i][j]=0;
           for ( k = 0; k < c; k++)
           {
               mult[i][j]+= a[i][k]*b[k][j];

           }
           
        }
        
    }
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mult[i][j]);   
        }
        
    }
    
    
    return 0;
}
