#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char suit;
    printf("Enter a number between 1 and 13: ");
    scanf("%d", &num);
    printf("Choose a suit (#, $, ?, or @): ");
    scanf(" %c", &suit);
    printf("%d of %c\n\n", num, suit);



    printf("------------\n");
    printf("|10        |\n");
    printf("|  # # #   |\n");
    printf("|  # # #   |\n");
    printf("|  # # #   |\n");
    printf("|  # # #   |\n");
    printf("|  # # #   |\n");
    printf("|       10 |\n");
    printf("------------\n");

    return 0;
}
