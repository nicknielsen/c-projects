#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Press enter.");

    int c;

    c = (getchar() != EOF);

    printf("\n(getchar() != EOF) = %d\n",c);

    return 0;
}
