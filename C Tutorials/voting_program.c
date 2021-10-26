// this program will verify eligible voters to vote.
#include <stdio.h>

int main()
{
    int age;
    printf("This program will check if a user can vote.\nPlease enter your age:\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are allowed to vote");
    }
    else if (age <= 10)
    {
        printf("You are a mere child. YOU CAN'T VOTE.");
    }
    else
    {
        printf("Sorry! You are underage hence you are not allowed to Vote!");
    }

    return 0;
}
