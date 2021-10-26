#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("This Program check for the biggest number from any 3 you entered.\nPlease enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    printf("Enter third number:\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("The greatest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The greatest number is %d", b);
    }
    else if (c > a && c > b)
    {
        printf("The biggest number is %d", c);
    }
    else if (a = b = c)
    {
        printf("All three numbers are equal");
    }
    getch();
    return 0;
}
