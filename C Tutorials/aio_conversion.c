// multi conversion program. Other conversion programs will be added in future. 
#include <stdio.h>
#include <conio.h>

int main()
{
    int choice;
    printf("This program converts values.Please choose from below:\n\n");
    printf("Select 1 for kilometers to miles.\n");
    printf("Select 2 for inches to foot.\n");
    printf("Select 3 for centimeters to inches.\n");
    printf("Select 4 for pound to kilograms.\n");
    printf("Select 5 for inches to meters.\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        float km, miles;
        printf("Welcome to Kilometers to miles conversion program.\n");
        printf("Please enter any number (in km) you want to convert to miles:\n");
        scanf("%f", &km);

        miles = km / 1.609;
        printf("%f km = %.2f miles", km, miles);
        break;
    }
    case 2:
    {
        float inches, foot;
        printf("Welcome to Inches to foot conversion program.\n");
        printf("Please enter any number (in Inches) you want to convert to foot:\n");
        scanf("%f", &inches);
        foot = inches / 12;
        printf("%f Inches = %.2f foot", inches, foot);

        break;
    }
    case 3:
    {
        float cm, inches;
        printf("Welcome to cm to inches conversion program.\n");
        printf("Please enter any number (in cm) you want to convert to inches:\n");
        scanf("%f", &cm);
        inches = cm / 2.54;

        printf("%f cm = %.2f inches", cm, inches);

        break;
    }
    case 4:
    {
        float pound, kg;
        printf("Welcome to pound to kg conversion program.\n");
        printf("Please enter any number (in pounds) you want to convert to kg:\n");
        scanf("%f", &pound);

        kg = pound / 2.205;
        printf("%f pound = %.2f kg", pound, kg);

        break;
    }
    case 5:
    {
        float inches, m;
        printf("Welcome to inches to m conversion program.\n");
        printf("Please enter any number (in inches) you want to convert to m:\n");
        scanf("%f", &inches);

        m = inches / 39.37;

        printf("%f inches = %.2f m", inches, m);
        break;
    }

    default:
        printf("Please enter anything between 1-5");
        break;
    }
    return 0;
}
