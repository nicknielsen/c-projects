#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize the variables that will end up storing the user's inputs.
    char str[100];
    int i;

    // Print welcome message and request name and age.
    printf("Hello! Please enter your name followed by your age, and I'll print them both to the screen.\n");

    // Take user's name and age and store them.
    scanf("%s %d", str, &i);

    // Print the user's name and age to the screen.
    printf("Your name is %s, and you are %d years old.", str, i);


    return 0;
}
