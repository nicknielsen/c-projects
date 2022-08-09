#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr2D[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int r, c;

    // Print all the elements of the array.
    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr2D[r][c]);
        }
    }

    printf("\n\n");

    // Print only the even numbers.
    for (r = 0; r < 3; ++r)
    {
        for (c = 0; c < 3; c++)
        {
            if (arr2D[r][c] % 2 == 0)
                printf("%d ", arr2D[r][c]);
        }
    }

    printf("\n\n");

    // Print only the odd numbers.
    for (r = 0; r < 3; ++r)
    {
        for (c = 0; c < 3; c++)
        {
            if (arr2D[r][c] % 2 != 0)
                printf("%d ", arr2D[r][c]);
        }
    }

    printf("\n\n");


    // Change the integer values in arr2D to floats and print them.

    for (r = 0; r < 3; ++r)
    {
        for (c = 0; c < 3; ++c)
        {
            printf("%.1f ", (float)arr2D[r][c]);
        }
    }

    printf("\n\n");

    return 0;
}
