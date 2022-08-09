#include <stdio.h>
#include <stdlib.h>

#define M2FT 3.2808
#define G2LB 0.002205

double metersToFeet(double meters);

double gramsToPounds(double grams);

double celsiusToFahrenheit(double celsius);

int main()
{
    int numberOfConversions, i;
    double metric;
    char unit = 'x';

    // 1. Enter the number of units you want to convert.
    printf("Enter the number of units you'd like to convert: ");

    scanf("%d", &numberOfConversions);

    // 2. Enter the unit you'd like to convert in the format "123.456 m" for conversion from meters to feet.

    for ( i = 0; i < numberOfConversions; ++i)
    {
        printf("Enter the number you'd like to convert followed by its metric unit: ");
        scanf("%lf %c", &metric, &unit);

        switch (unit)
        {
            case 'm':
                printf("%lf ft\n", metersToFeet(metric));
            break;

            case 'g':
                printf("%lf lbs\n", gramsToPounds(metric));
            break;

            case 'c':
                printf("%lf f\n", celsiusToFahrenheit(metric));

        }

    }

    // 3. Print the converted unit to the console.

    // 4. Repeat steps 2 and 3 for as many inputs as specified in step 1.


    return 0;
}

double metersToFeet(double meters)
{
    double feet = meters * M2FT;
    return feet;
}

double gramsToPounds(double grams)
{
    double pounds = grams * G2LB;
    return pounds;
}

double celsiusToFahrenheit(double celsius)
{
    double fahrenheit = 32 + 1.8 * celsius;
    return fahrenheit;
}
