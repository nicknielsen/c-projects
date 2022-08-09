#include <stdio.h>
struct Array
{

    int A[10];

    int size;

    int length;
};

void Display(struct Array arr) // Displays the current array elements.
{

    int i;

    printf("\nCurrent array elements:\n");

    for (i = 0; i < arr.length; i++)

        printf("%d ", arr.A[i]);

    printf("\n");
}

void Append(struct Array *arr, int x) // Adds an element to the array
{

    if (arr->length < arr->size)

        arr->A[arr->length++] = x; // Combines appending the element to the array (arr->A[arr->length]) with incrementing length (arr->length++) in one line of code.
}

void Insert(struct Array *arr, int index, int x) // Inserts an element at the specified index of an array.
{

    int i;

    if (index >= 0 && index <= arr->length)

    {

        for (i = arr->length; i > index; i--)

            arr->A[i] = arr->A[i - 1];

        arr->A[index] = x;

        arr->length++;
    }
}

void Delete(struct Array *arr, int index) // Deletes the element of an array at a specific index.
{
    int i;
    for (i = index; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1]; // Replaces the element at index i with the following index's element.
    }
    arr->length--;
}

int Search_FtB(struct Array *arr, int key) // Scans the array for a search key.
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
            return i; // Returns the index the search key is found at.
    }

    return -1; // Returns invalid index if the search key is not found.
}

void Swap(struct Array *arr, int is, int id) // Swaps two elements in an array using pointers.
{

    int it;
    it = arr->A[is];
    arr->A[is] = arr->A[id];
    arr->A[id] = it;
}

int Improve_Search_FtB(struct Array *arr, int key) // Scans an array for a search key. If found, the search key swaps places with the first element of the array.
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(arr, i, 0);
            return i;
        }
    }
    return -1;
}

int Search_And_Move_Forward(struct Array *arr, int key) //Scans for a search key. If found, the search key swaps places with the element in front of it.
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(arr, i, i - 1);
            return i;
        }
    }
    return -1;
}

void Reverse_In_Place(struct Array *arr)
{
    int i, j;
    for (i=0, j=arr->length-1; i<j; i++, j--)
    {
        if (i >= j)
            return;
        Swap(arr,i,j);
    }
}

void Copy_Reverse(struct Array *arr)
{
    int i, j;
    //Create an array B.
    int temp[arr->size];

    //Copy the elements from A to B in reverse order.
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        temp[j] = arr->A[i];
    }

    //Copy the elements from B to A

    for (i = 0; i <= arr->length; i++)
    {
        arr->A[i] = temp[i];
    }
}

struct Array * Merge(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    struct Array *arr3;

};


int main()
{

    struct Array arr1 = {{2, 5, 8, 12, 25}, 10, 5}; // arr1.A = {2, 3, 4, 5, 6}

    struct Array arr2 = {{1, 6, 9, 16, 30}, 10, 5}; // arr1.A = {2, 3, 4, 5, 6}

    Append(&arr1, 10); // arr1.A = {2, 3, 4, 5, 6, 10}

    Insert(&arr1, 0, 12); // arr1.A = {12, 2, 3, 4, 5, 6, 10}

    Display(arr1);
    printf("\n");

    Delete(&arr1, 2); // arr1.A = {12, 2, 4, 5, 6, 10}

    Display(arr1);

    printf("\nSearch key %d found at index %d (negative if not found). No search improvements made.\n", 4, Search_FtB(&arr1, 4));

    Display(arr1);

    printf("\nSearch key %d found at index %d (negative if not found). Moved to index 0.\n", 5, Improve_Search_FtB(&arr1, 5));

    Display(arr1);

    printf("\nSearch key %d found at index %d (negative if not found). Moved forward one index.\n", 12, Search_And_Move_Forward(&arr1, 12));

    Display(arr1);

    Reverse_In_Place(&arr1);

    Display(arr1);

    Copy_Reverse(&arr1);

    Display(arr1);

    return 0;
}
