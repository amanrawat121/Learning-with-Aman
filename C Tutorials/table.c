#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number you want table for:\n");
    scanf("%d", &a);

    for ( b = 1; b <= 10; b++)
    {
        printf("%d * %d = %d\n", a, b, a*b);
    }
    
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the table you want for\n");
//     scanf("%d", &a);

//     for ( b = 1; b <=10; b++)
//     {
//         printf("%d * %d = %d\n", a, b, a*b);
//     }
    

//     return 0;
// }

