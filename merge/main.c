#include <stdio.h>
#include <stdlib.h>

struct Array
{

    int A[10];

    int size;

    int length;
};

void Display(struct Array *arr) // Displays the current array elements.
{

    int i;

    printf("\nCurrent array elements:\n");

    for (i = 0; i < arr->length; i++)

        printf("%d ", arr->A[i]);

    printf("\n");
}

void Append(struct Array *arr, int x) // Adds an element to the array
{

    if (arr->length < arr->size)

        arr->A[arr->length++] = x; // Combines appending the element to the array (arr->A[arr->length]) with incrementing length (arr->length++) in one line of code.
}

void Swap(struct Array *arr, int is, int id) // Swaps two elements in an array using pointers.
{

    int it;
    it = arr->A[is];
    arr->A[is] = arr->A[id];
    arr->A[id] = it;
}

struct Array * Merge(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    struct Array *arr3 = (struct Array*) malloc(sizeof(struct Array));

    i=j=k=0;

    while(i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for(;i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    for ( ; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = arr1->length + arr2->length;
    arr3->size = arr1->size + arr2->size;

    return arr3;
};


int main()
{

    struct Array arr1 = {{2, 5, 8, 12, 25}, 10, 5};

    struct Array arr2 = {{1, 6, 9, 16, 30}, 10, 5};

    struct Array * pt_arr3 = Merge(&arr1, &arr2);

    Display(pt_arr3);

    return 0;
}
