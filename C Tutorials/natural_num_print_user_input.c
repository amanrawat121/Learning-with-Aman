#include <stdio.h>
#include <conio.h>

int main()
{
    int i, num;
    printf("This program will take input from user and print natural number upto that number.\nPlease enter a number upto you want to print natural number: ");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        printf("%d\t", i);
    }
    
    
    return 0;
}

// Just put the value for i=0 on line 10 if you want to write this program for whole numbers ;)