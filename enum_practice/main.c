/*
Author:
    Nick Nielsen
Date:
    Wednesday, February 16, 2022
Purpose:
    This program is a practice project for getting familiar with the enumeration data type, or "enum" for short.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize our enum values.
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    // Set variables equal to certain values of our enum type "Company."
    enum Company goog = GOOGLE;
    enum Company xero = XEROX;
    enum Company ebay = EBAY;

    printf("%d\n", xero); // Output: 2
    printf("%d\n", goog); // Output: 0
    printf("%d\n", ebay); // Output: 4

    return 0;
}
