#include <stdio.h>
#include <stdlib.h>

int myStrLen(char *);

int main()
{
    char str[100];
    scanf("%s", str);
    printf("%s \n", str);
    int length = myStrLen(str);
    printf("%d \n", length);
    return 0;
}

int myStrLen(char * str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        ++i;
    }

    return i;
}
