#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int arraySum(int *array, const int n);

int main(void)
{
    int values[10000];

    for (int i = 0; i < 10000; ++i)
    {
        values[i] = i + 1;
    }

    struct timeval start, end;

    gettimeofday(&start, NULL);

    arraySum(values, 10000);

    gettimeofday(&end, NULL);

    double time_taken = end.tv_sec + end.tv_usec / 1e6 -
                        start.tv_sec - start.tv_usec / 1e6; // in seconds

    printf("time program took %f seconds to execute\n", time_taken);

    return 0;
}

int arraySum(int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n;

    for( ; array < arrayEnd; ++array)
    {
        sum += *array;
    }

    return sum;
}
