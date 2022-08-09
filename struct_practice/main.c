#include <stdio.h>
#include <stdlib.h>

int main()
{
// Define a new data structure, named "person", which contains a string (pointer to char) called name, and an integer called age.

    typedef struct
    {
        char *name;
        int age;
    } person;

    person nick;
    nick.name = "Nick";
    nick.age = 24;

    printf("Name: %s; Age: %d", nick.name, nick.age);

    return 0;
}
