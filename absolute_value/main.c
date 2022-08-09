#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float absoluteValueOf(float a);
int main()
{
    int userNumber;
    printf("Enter a number: ");
    scanf("%d", &userNumber);

    printf("%.0f", absoluteValueOf(userNumber));

    return 0;
}

float absoluteValueOf(float a)
{
    if (a < 0)
    {
        a *= -1.0;
    }
        return a;
}
