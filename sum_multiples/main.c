#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit, sum = 0, i = 0;

    //1. Get a number for the upper limit.

    printf("Enter a number: ");

    scanf("%d", &limit);

    while (i < limit)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            sum += i;
        }
        i++;
    }

    printf("The sum of all the multiples of 3 and 5 that are less than %d is %d.\n", limit, sum);

    return 0;
}
