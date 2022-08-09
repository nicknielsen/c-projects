/*
Author:
    Nick Nielsen

Date:
    Wednesday, February 16, 2022

Purpose:
        This program calculates the perimeter and area of a
        rectangle based on the user's input.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize all the program's variables.
    double height, width, perimeter, area;

    // Ask for the height of the user's rectangle.
    printf("Enter the height of your rectangle: ");

    // Store the data they enter into the variable height.
    scanf("%lf", &height);

    // Ask for the width of their rectangle.
    printf("Enter the width of your rectangle: ");

    // Store the data they enter into the variable width.
    scanf("%lf", &width);

    // Calculate the perimeter of the rectangle.
    perimeter = 2.0 * (height + width);

    // Calculate the area of the rectangle.
    area = height * width;

    // Print out the perimeter and area values.
    printf("Perimeter: %.1lf\n", perimeter);
    printf("Area: %.1lf\n", area);

    return 0;
}
