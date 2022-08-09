#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[] = {8, 15, 27, 39, 45, 77, 123, 150, 279, 300, 444};
    int item, midpoint;
    int n = 10;
    int lowerBound = 0, upperBound = ( n - 1 );

    printf("Enter a number to search for: ");
    scanf("%d", &item);

    int found = 0;

    while ( !found && ( lowerBound <= upperBound ) )
    {
        midpoint = ( lowerBound + upperBound ) / 2;

        if ( item == list[midpoint] )
        {
            found = 1;
        }
        else if ( item < list[midpoint] )
        {
            // Throw away the top half of the list.
            upperBound = midpoint - 1;
        }
        else
        {
            //Throw away the bottom half of the list.
            lowerBound = midpoint + 1;
        }
    }

    if (!found)
        printf("Sorry, the number %d does not appear in the list.", item);
    else
    {
        printf("The number %d appears at index %d of the list.\n", item, midpoint);
        printf("list[10] = {");
        for (int i = 0; i < n; ++i)
        {
            if( i != ( n - 1 ) )
            {
                printf("%d, ", list[i]);
            }
            else
            {
                printf("%d", list[i]);
            }
        }
        printf("}\n");
    }

    return 0;
}
