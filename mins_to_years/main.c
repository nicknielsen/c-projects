/*
Author: Nick Nielsen
Date: 2/17/22
Purpose: This program accepts a number of minutes from the terminal, then converts that number from minutes to years and prints the result.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    double minutesPerYear = 525600.0, minutesToYears;
    printf("Enter any number: ");
    scanf("%d", &minutes);

    minutesToYears = minutes / minutesPerYear;

    printf("%d minute\(s\) is equal to %lf year\(s\).", minutes, minutesToYear);

    return 0;
}
