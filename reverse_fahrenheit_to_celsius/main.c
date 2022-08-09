/*
Author: Nick Nielsen
Date: 2/17/22
Purpose: This program prints a table of fahrenheit to celsius conversions in reverse, starting at 300 degrees, using a for statement.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
