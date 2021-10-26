// this program will check even and odd numbers
#include <stdio.h>
int main()
{
    int a;
    printf("This Program will check even or odd number.\nPlease enter a number to check:\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("This is a even number.");
    }
    else
    {
        printf("This is a odd number.");
    }
    

    return 0;
}
