#include <stdio.h>
int main()
{
    int opt;
    printf("Welcome to the Master data conversion program.\nThis will convert given data value.\nPlease select your choice.");
    printf("Enter 1 to convert Bit to Byte\n");
    printf("Enter 2 to convert Bit to KiloByte\n");
    printf("Enter 3 to convert Bit to MegaByte\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
    {
        float bit, byte;
        printf("Welcome in Bit to Byte Converter program.\nPlease enter any value in Bit:\n");
        scanf("%f", &bit);
        byte = bit / 8;
        printf("%.3f Bit = %.3f Byte", bit, byte);
        break;
    }

    case 2:
    {
        float bit, kilobyte;
        printf("Welcome in Bit to KiloByte Converter program.\nPlease enter any value in Bit:\n");
        scanf("%f", &bit);
        kilobyte = bit / (8 * 1024);
        printf("%.3f Bit = %.3f KiloByte", bit, kilobyte);
        break;
    }

    case 3:
    {
        float bit, megabyte;
        printf("Welcome in Bit to MegaByte Converter program.\nPlease enter any value in Bit:\n");
        scanf("%f", &bit);
        megabyte = bit / (8 * 1024 * 1024);
        printf("%.3f Bit = %.3f MegaByte", bit, megabyte);
        break;
    }

    default:
    {
        printf("Please Enter a valid choice.");
        break;
    }
    }
    return 0;
}
