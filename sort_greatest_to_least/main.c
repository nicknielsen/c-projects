#include <stdio.h>
#include <stdlib.h>

int main()
{
    int items[10], temp;

    printf("Enter 10 random numbers: \n");
    for(int i = 0; i < 10; ++i)
    {
        printf("%d: ", (i+1));
        scanf("%d", &items[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (items[j] < items[j+1])
            {
                temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }

        }
    }


    for(int k = 0; k < 10; ++k)
    {
        printf("%d ", items[k]);
    }


    return 0;
}
