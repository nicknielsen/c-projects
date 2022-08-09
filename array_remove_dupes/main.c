#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int arr[50];
    int length;
    int size;
};

void remove_dupes(struct Array *arr)        // Removes duplicates from an array structure
{                                           //   and replaces them with 0.
    int i,j;
    for (i=0; i < arr->length; i++)
    {
        for(j=i+1; j <= arr->length; j++)
        {
            if (arr->arr[i] == arr->arr[j])
            {
                arr->arr[j] = 0;
            }
        }
    }
}

void replace_dupes(struct Array *arr, int x) // Finds numbers that appear more than once in
{                                            //     an array structure and turns them all into
    int i,j,tmp;                             //     the number provided by the "x" argument.
    for (i=0; i < arr->length; i++)
    {
        tmp = arr->arr[i];
        for(j=i+1; j <= arr->length; j++)
        {
            if (arr->arr[i] == arr->arr[j] || arr->arr[j] == tmp)
            {
                if (arr->arr[i] != x)
                    arr->arr[i] = x;
                arr->arr[j] = x;
            }
        }
    }
}

void display_array(struct Array arr)
{
    int i;
    for(i=0; i < arr.length; i++)
    {
        if(i==0)
        {
            printf("[%d", arr.arr[i]);
        }
        else if (i==(arr.length-1))
        {
            printf(" %d]\n", arr.arr[i]);
        }
        else printf(" %d", arr.arr[i]);

    }
}

int main()
{
    struct Array frank = {{1,3,68,6,9,68,54,68,22,57}, 10, 50};

    display_array(frank);
    replace_dupes(&frank, 69);
    remove_dupes(&frank);
    display_array(frank);


    return 0;
}
