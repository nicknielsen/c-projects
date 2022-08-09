#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
    struct point * next;
};

struct point * createPoint(int x, int y);
struct point * append(struct point *, struct point *);
void printPoint(struct point *);
void freePoint(struct point *);



//// MAIN ////
int main()
{
    struct point * pt1 = createPoint(1, 2);
    struct point * pt2 = createPoint(1, 4);
    struct point * pt3 = createPoint(1, 6);
    struct point * pt4 = createPoint(1, 8);

    struct point * index, * end;
    index = end = pt1;

    printf("struct point size in bytes: %d\n", (int) sizeof(struct point));
    end = append(pt1, pt2);
    end = append(pt2, pt3);
    end = append(pt3, pt4);


    while(index){
        if(index->next == NULL){
            printPoint(index);
            break;
        }
        printPoint(index);
        index = index->next;
    }


    freePoint(pt1);
    freePoint(pt2);
    freePoint(pt3);
    freePoint(pt4);
    return 0;
}

//// END OF MAIN ////




// Create a point structure.
struct point * createPoint(int arg_x, int arg_y){
    struct point * ptr = (struct point *) malloc(sizeof(struct point));
    ptr->x = arg_x;
    ptr->y = arg_y;
    ptr->next = NULL;
    return ptr;
}

//// Append a structure to a linked list as a new node.
struct point * append(struct point * index, struct point * add){
    index->next = add;
    return add;
}

//// Print out a point.
void printPoint(struct point * ptr){
    printf("(%d, %d) / next addr: %p\n", ptr->x, ptr->y, ptr->next);
}

//// Free the memory allocated for a point.
void freePoint(struct point * ptr){
    if (ptr){
        free(ptr);
    } else {
        printf("Point structure not found!");
    }
}
