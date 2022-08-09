#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int syllables = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            ++syllables;
    }

    printf("%d\n", syllables);
    return 0;
}
