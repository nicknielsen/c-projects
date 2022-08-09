#include<stdio.h>
struct Array
{

    int A[10];

    int size;

    int length;

};

void
Display (struct Array arr)
{

    int i;

    printf ("\nCurrent array elements:\n");

    for (i = 0; i < arr.length; i++)

        printf ("%d ", arr.A[i]);

    printf("\n");

}


void
Append (struct Array *arr, int x)
{

    if (arr->length < arr->size)

        arr->A[arr->length++] = x;

}


void
Insert (struct Array *arr, int index, int x)
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

void Delete(struct Array *arr, int index)
{
    int i;
    for(i = index; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
}

int Search_FtB(struct Array *arr, int key)
{
    int i;
    for(i = 0; i < arr->length; i++)
    {
        if(arr->A[i] == key)
            return i;
    }

    return -1;
}

void Swap(struct Array *arr, int is, int id)
{

    int it;
    it = arr->A[is];
    arr->A[is] = arr->A[id];
    arr->A[id] = it;
}

int Improve_Search_FtB(struct Array *arr, int key)
{
    int i;
    for(i = 0; i < arr->length; i++)
    {
        if(arr->A[i] == key){
            Swap(arr, i, 0);
            return i;
        }
    }
    return -1;

}

int Search_And_Move_Forward(struct Array *arr, int key)
{
    int i;
    for(i=0; i < arr->length; i++)
    {
        if(arr->A[i] == key)
        {
            Swap(arr, i, i-1);
            return i;
        }
    }
    return -1;
}


int
main ()
{

    struct Array arr1 = { {2, 3, 4, 5, 6}, 10, 5 };

    Append (&arr1, 10);

    Insert (&arr1, 0, 12);

    Display (arr1);
    printf("\n");

    Delete(&arr1, 2);

    Display (arr1);

    printf("\nSearch key %d found at index %d (negative if not found). No search improvements made.\n", 4, Search_FtB(&arr1, 4));

    Display (arr1);

    printf("\nSearch key %d found at index %d (negative if not found). Moved to index 0.\n", 5, Improve_Search_FtB(&arr1, 5));

    Display (arr1);

    printf("\nSearch key %d found at index %d (negative if not found). Moved forward one index.\n", 12, Search_And_Move_Forward(&arr1, 12));

    Display(arr1);

    return 0;

}
