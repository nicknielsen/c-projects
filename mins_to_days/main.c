/*
Author: Nick Nielsen
Date: 2/17/22
Purpose: This program accepts a number of minutes from the terminal, then converts that number from minutes to days and prints the result.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    double minutesPerDay = 1440.0, minutesToDays;
    printf("Enter any number: ");
    scanf("%d", &minutes);

    minutesToDays = minutes / minutesPerDay;

    printf("%d minute\(s\) is equal to %lf day\(s\).", minutes, minutesToDays);

    return 0;
}
