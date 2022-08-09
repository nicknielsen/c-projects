#include <stdio.h>
#include <stdlib.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

void draw9x9Grid(char array[]);
void clearScreen(void);
void startRound(char array[]);
int getP1Move(int p1Move);
int getP2Move(int p2Move);
BOOL between0And9(int num);
int invalidP1Move(int p1Move);
int invalidP2Move(int p2Move);
BOOL spaceIsFree(int move, char array[]);

int main()
{
    char gameArray[10] = {"1234567890"};
    int p1, p2;
    int counter = 0; // Starts with first round.
    int validMove = 1;

    int whoseTurn = 0; // When whoseTurn == 0, it's Player 1's turn. If whoseTurn == 1, it's Player 2's turn.

    while (counter < 9)
    {
        // Left column win
        if (gameArray[0] == gameArray[3] && gameArray[3] == gameArray[6])
            break;

        // Middle column win
        else if (gameArray[1] == gameArray[4] && gameArray[4] == gameArray[7])
            break;

        // Right column win
        else if (gameArray[2] == gameArray[5] && gameArray[5] == gameArray[8])
            break;

        // Top row win
        else if (gameArray[0] == gameArray[1] && gameArray[1] == gameArray[2])
            break;

        // Middle row win
        else if (gameArray[3] == gameArray[4] && gameArray[4] == gameArray[5])
            break;

        // Bottom row win
        else if (gameArray[6] == gameArray[7] && gameArray[7] == gameArray[8])
            break;

        // Left-to-right diagonal win
        else if (gameArray[0] == gameArray[4] && gameArray[4] == gameArray[8])
            break;

        // Right-to-left diagonal win
        else if (gameArray[2] == gameArray[4] && gameArray[4] == gameArray[6])
            break;

        startRound(gameArray);
        if (whoseTurn == 1 && validMove == FALSE)
            invalidP2Move(p2);
        else if (whoseTurn == 0 && validMove == FALSE)
            invalidP1Move(p1);

        if (whoseTurn == 0)
        {
            p1 = getP1Move(p1);
            if (between0And9(p1) && spaceIsFree(p1, gameArray))
            {
                validMove = TRUE;
                whoseTurn = 1;
                gameArray[p1-1] = 'X';
                ++counter;
            }
            else
            {
                validMove = FALSE;
                invalidP1Move(p1);
            }
        }
        else
        {
            p2 = getP2Move(p2);

            if (between0And9(p2) && spaceIsFree(p2, gameArray))
            {
                validMove = TRUE;
                whoseTurn = 0;
                gameArray[p2-1] = 'O';
                ++counter;
            }
            else
            {
                validMove = FALSE;
            }

        }
    }


    startRound(gameArray);

    if (counter == 9)
        printf("\nIt's a draw!\n");
    else if (whoseTurn == 0)
        printf("\n Player 2 wins!\n");
    else if(whoseTurn == 1)
        printf("\nPlayer 1 wins!\n");



    return 0;
}



void draw9x9Grid(char array[])
{
    printf("| %c | %c | %c |\n", array[0], array[1], array[2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", array[3], array[4], array[5]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", array[6], array[7], array[8]);

}

void clearScreen(void)
{
    system("clear");
}

void startRound(char array[])
{
    clearScreen();
    printf("Tic-Tac-Toe!\n");
    printf("\nPlayer 1: X's -- Player 2: O's\n\n");
    draw9x9Grid(array);

}

int getP1Move(int p1Move)
{
    printf("\nPlayer 1, select a space to place an X: ");
    scanf("%d", &p1Move);
    return p1Move;
}

int getP2Move(int p2Move)
{
    printf("\nPlayer 2, select a space to place an O: ");
    scanf("%d", &p2Move);
    return p2Move;
}

BOOL between0And9(int num)
{
    if (num >= 0 && num <= 9)
        return TRUE;
    else
        return FALSE;
}

BOOL spaceIsFree(int move, char array[])
{
    if (array[move-1] == 'O' || array[move-1] == 'X')
        return FALSE;
    else
        return TRUE;
}

int invalidP1Move(int p1Move)
{
    printf("\nThat's an invalid move.");
    return p1Move;
}

int invalidP2Move(int p2Move)
{
    printf("\nThat's an invalid move.");
    return p2Move;
}

