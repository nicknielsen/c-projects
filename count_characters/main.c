#include <stdio.h>
#include <stdlib.h>

int countCharacters(char *string);

int main()
{
    char message[] = "Hello, World!";


    printf("There are %d characters in the string \"%s\"\n", countCharacters(message), message);
    return 0;
}


int countCharacters(char *string)
{
    int count;
    char *end, *start;

    end = start = string;
    while (*string)
    {
        *end++ = *string++;
    }

    count = end - start;

    return count;
}
