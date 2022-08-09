#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, cels;
    int step, lower, upper;

    step = 20.0;
    lower = 0;
    upper = 300.0;

    // Print the table header.
    printf("Fahrenheit to Celsius Conversions\n");

    fahr = lower;

    while (fahr <= upper)
    {
        // Celsius = (5/9)(Fahrenheit - 32)
        cels = 5.0 * (fahr - 32.0) / 9.0;

        // Print each Fahrenheit temperature its the corresponding Celsius temperature.
        // Each item will be right-justified.
        printf("%3.0f %6.1f\n", fahr, cels);

        // Add 20 to the current value of "fahr."
        fahr = fahr + step;
    }

    return 0;
}
