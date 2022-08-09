#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int number);

int main()
{
    int number, sum;

    scanf("%d", &number);

    sum = sumOfDigits(number);



    printf("%d\n", sum);
    return 0;
}


int sumOfDigits(int number)
{
    int sum, digit;

    if (number)
    {
        digit = number % 10;
        //printf("current digit: %d\n", digit);
        number /= 10;
        //printf("digits left to sum: %d\n", number);
        sum = digit + sumOfDigits(number);
        //printf("current sum: %d + %d = %d\n", digit, sumOfDigits(number), sum);
    }

    return sum;
}

