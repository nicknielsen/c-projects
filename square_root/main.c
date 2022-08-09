#include <stdio.h>
#include <stdlib.h>

float squareRoot(float x);
int goodEnough(float guess, float x);
float improveGuess(float guess, float x);
float average(float x, float y);
float square(float x);
float absoluteValueOf(float a);


int main()
{
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    float sqrtOfNumber = squareRoot(number);

    printf("\nThe square root of %.2f is %.2f.\n", number, sqrtOfNumber);


    return 0;
}

float squareRoot(float x)
{
    float guess;
    /*
    while (goodEnough(guess, x) == 0)
    {
        improveGuess(guess, x);
        printf("\nguess = %f\n", guess);
    }
    */

    for (guess = 1.0; goodEnough(guess, x) == 0; guess = improveGuess(guess, x));
        // TEST PRINT: printf("\nguess = %f\n", guess);


    return guess;
}

int goodEnough(float guess, float x)
{
    float test = square(guess) - x;
    if (absoluteValueOf(test) < 0.001)
        return 1;
    else
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


float square(float x)
{
    x = x * x;
    return x;
}

float average(float x, float y)
{
    float average = (x + y)/2;
    return average;
}

float improveGuess(float guess, float x)
{
    float quotient = x / guess;

    float improvedGuess = average(guess, quotient);

    // TEST PRINT: printf("\nimproved guess: %f\n", improvedGuess);

    return improvedGuess;

}
