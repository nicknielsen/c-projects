#include <stdio.h>
#include <string.h>

int main()
{

    char word[50];
    char pigword[50];
    char dash = '-';
    char ayword[50];

    printf("Enter a word: ");
    scanf("%s",word);

    for (int i = 0; i < strlen(word); ++i)
    {
        if (i == 0)
            ayword[0] = word[i];
        else
            pigword[i-1] = word[i];
    }

    ayword[1] = 'a';
    ayword[2] = 'y';

    pigword[strlen(word) - 1] = dash;

    pigword[strlen(word)] = ayword[0];
    pigword[strlen(word) + 1] = ayword[1];
    pigword[strlen(word) + 2] = ayword[2];

    printf("%s\n", pigword);
    return 0;
}
