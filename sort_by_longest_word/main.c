#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfWords, characterCount, temp;
    char word[100];

    printf("Enter a number: ");
    scanf("%d", &numberOfWords);

    int wordArray[100] = {0};

    printf("Now, enter %d words:\n", numberOfWords);

    for(int i = 0; i < numberOfWords; ++i)
    {
        // Take in the new word.
        printf("%d: ", (i+1));
        scanf("%s", word);

        // Set characterCount to zero.
        characterCount = 0;

        // Increment characterCount for each character in the word, excluding the null terminator.
        while(word[characterCount] != '\0')
        {
            ++characterCount;
        }

        // Add that number to wordArray.
        wordArray[i] = characterCount;
    }


    for (int i = 0; i < numberOfWords; ++i)
    {
        for (int j = 0; j < numberOfWords; ++j)
        {
            if (wordArray[j] < wordArray[j+1])
            {
                temp = wordArray[j];
                wordArray[j] = wordArray[j+1];
                wordArray[j+1] = temp;
            }

        }
    }

    printf("Number of characters in each word, sorted greatest to least: ");
    for(int i = 0; i < numberOfWords; ++i)
    {
        printf("%d ", wordArray[i]);
    }


    return 0;
}
