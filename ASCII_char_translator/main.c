#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    printf("Press a character on your keyboard, then press Enter: ");


    while((c=getchar()) != EOF)
    {
        printf("The ASCII value of ");
        putchar(c);
        printf(" is %d.\n",c);
        break;
    }

    return 0;
}
