#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[50];
    int wordLength = 0;
    int firstHalf = 0, lastHalf = 0;
    int i = 0;

    scanf("%s", word);

    while (word[wordLength] != '\0')
        ++wordLength;

    int startToMiddle = (wordLength % 2 == 0) ? (wordLength / 2) : ((wordLength / 2) + 1);
    int middleToEnd = wordLength - startToMiddle;

//    printf("%d %d\n", startToMiddle, middleToEnd);

    while(i < startToMiddle)
    {
        if(word[i] == 'T' || word[i] == 't')
            firstHalf = 1;
        ++i;
    }

    while(i < wordLength)
    {
        if(word[i] == 'T' || word[i] == 't')
            lastHalf = 1;
        ++i;
    }

//    printf("%d %d\n", firstHalf, lastHalf);


    if(firstHalf && !lastHalf)
    {
        printf("1");
    }
    else if(!firstHalf && lastHalf)
    {
        printf("2");
    }
    else printf("-1");


    return 0;
}
