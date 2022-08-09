#include <stdio.h>
#include <stdlib.h>

void swap (int *, int *);

int main()
{
    int items[10];

    printf("Enter 10 random numbers: \n");
    for(int i = 0; i < 10; ++i)
    {
        printf("%d: ", (i+1));
        scanf("%d", &items[i]);
    }

    int * itemsP = items;

    // Print all the values of the array using pointer dereferencing.
    for(int k = 0; k < 10; ++k)
    {
        printf("%d ", items[k]);
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; ++j)
        {
            if ( *(items + j) > *(items + j + 1) )
            {
                swap( (itemsP + j) , (itemsP + j + 1) );
            }

        }
    }


    for(int k = 0; k < 10; ++k)
    {
        printf("%d ", items[k]);
    }


    return 0;
}

// This function swaps the values at a and b.
void swap (int * a, int * b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
