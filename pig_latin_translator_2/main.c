#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, i=0, wc = 0, in_word = 1, j;
    char words[100];

    while((c = getchar()) != '\n'){
        words[i++] = putchar(c);
    }

    i = 0;
    char array[wc][100];

    while (words[i++] != '\n'){
        if (words[i] == ' '){
            in_word = 0;
        } else {
            in_word = 1;
            array[wc][i] = words[i];
        }

        if (!in_word){
            wc++;
        }
    }

    for (i = 0; i < wc; ++i){
        j=0;
        while ( j++ != '\0'){
        printf("%s", array[i]);
        }
    }


    printf("\n%s %d %lu\n", words, wc, sizeof(c));


    return 0;
}
