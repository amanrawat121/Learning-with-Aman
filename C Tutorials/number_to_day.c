#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("This Program will tell you day according to number.\nPlease enter any number between 1-7:\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("This is Monday.");
        break;
    case 2:
        printf("This is Tuesday.");
        break;
    case 3:
        printf("This is Wednesday.");
        break;
    case 4:
        printf("This is Thursday.");
        break;
    case 5:
        printf("This is Friday.");
        break;
    case 6:
        printf("This is Saturday.");
        break;
    case 7:
        printf("This is Sunday.");
        break;
    
    default:
        printf("Plase enter any number between 1-7");
        break;
    }

    getch();
    return 0;
}
