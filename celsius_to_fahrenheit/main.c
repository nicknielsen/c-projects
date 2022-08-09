#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, cels;
    int step, lower, upper;

    step = 4.0;
    lower = 0;
    upper = 100.0;

    // Print the table header.
    printf("Celsius to Fahrenheit Conversions\n");

    cels = lower;

    while (cels <= upper)
    {
        // Fahrenheit = (9 * Celsius) / 5 + 32
        fahr = (9 * cels) / 5 + 32;

        // Print each Celsius temperature its the corresponding Fahrenheit temperature.
        // Each item will be right-justified.
        printf("%3.0f %6.1f\n", cels, fahr);

        // Add 4 to the current value of "fahr."
        cels = cels + step;
    }

    return 0;
}
