#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int number = 0;
    int * pnumber = NULL;

    number = 10;
    printf("number's address in memory: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n",(void*)&pnumber);
    printf("pnumber's size in memory: %d bytes\n", (int)sizeof(pnumber));
    printf("pnumber's value (same as number's address in memory): %p\n", pnumber);
    printf("the value pointed to by pnumber (same as number's value): %d\n", *pnumber);

    return 0;
}
