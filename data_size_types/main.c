/*
Author: Nick Nielsen
Date: 2/17/22
Purpose: This program prints out the number of bytes this machine uses to store basic data types in C.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Memory sizes of each data type for this machine (in bytes):\n");
    printf("int: %lu\n", sizeof(int));
    printf("char: %lu\n", sizeof(char));
    printf("float: %lu\n", sizeof(float));
    printf("long: %lu\n", sizeof(long));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    return 0;
}
