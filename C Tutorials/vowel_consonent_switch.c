#include <stdio.h>
#include <conio.h>

int main()
{
    char alpha;
    printf("This program will identify Vowel and consonents.\nPlease enter any character:\n");
    scanf("%c", &alpha);

    switch (alpha)
    {
    case 'a':
        printf("%c is a Vowel", alpha);
        break;
    case 'e':
        printf("%c is a Vowel", alpha);
        break;
    case 'i':
        printf("%c is a Vowel", alpha);
        break;
    case 'o':
        printf("%c is a Vowel", alpha);
        break;
    case 'u':
        printf("%c is a Vowel", alpha);
        break;
    case 'A':
        printf("%c is a Vowel", alpha);
        break;
    case 'E':
        printf("%c is a Vowel", alpha);
        break;
    case 'I':
        printf("%c is a Vowel", alpha);
        break;
    case 'O':
        printf("%c is a Vowel", alpha);
        break;
    case 'U':
        printf("%c is a Vowel", alpha);
        break;

    default:
        printf("%c is a Consonant", alpha);
        break;
    }
    getch();
    return 0;
}
