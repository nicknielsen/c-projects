#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[50];
    scanf("%s", word);
    int i, j, wordLength = 0;
    char swap;


    for ( i = 0; word[i] != '\0'; i++)
    {
        ++wordLength;
    }

    printf("%d\n", wordLength);


    for ( j = 0; j < wordLength - 1; j++)
    {
        for ( i = 0; i < wordLength - j - 1; i++)
        {
            if ( word[i] > word[i + 1])
            {
                swap = word[i];
                word[i] = word[i + 1];
                word[i + 1] = swap;
            }
        }
    }

    for ( i = 0; i < wordLength; i++)
    {
        printf("%c", word[i]);
    }

    int repeat = 0, repeatCounter = 0;

    for ( i = 0; i < wordLength; i++)
    {
        if ( word[i] == word[i + 1] && !repeat)
        {
            ++repeatCounter;
            repeat = 1;
        }
        else if (word[i] != word[i + 1])
        {
            repeat = 0;
        }
    }

    char is[] = "is";
    char are[] = "are";

    char plural[] = "s ";
    char singular[] = " ";

    printf("\nThere %s %d repeating character%sin the string you entered.", ( repeatCounter > 1) ? are : is, repeatCounter, ( repeatCounter > 1) ? plural : singular);


    return 0;
}
