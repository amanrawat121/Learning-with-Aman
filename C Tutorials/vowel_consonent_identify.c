// this program will identify vowel & consonants for you.
#include <stdio.h>
int main()
{
    char vow;
    printf("Please enter a character to be identified as vowel or consonent:\n");
    scanf("%c", &vow);

    if (vow == 'a' || vow == 'A' || vow == 'e' || vow == 'E' || vow == 'i' || vow == 'I'|| vow == 'o' || vow == 'O' || vow == 'u' || vow == 'U')
    {
        printf("This is a vowel");
    }
    else
    {
        printf("This is a consonant");
    }

    return 0;
}
