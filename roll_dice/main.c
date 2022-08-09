#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Player_Dice
{
    int num;
    int hand[5];
    int freeze[5];
};

int dice_roll(void)
{
    int result;
    do
    {
        result = rand() % 10;
    }while(result > 6 || result < 1);

    return result;
}

void roll_all(struct Player_Dice *arr)
{
    int i;
    for(i=0; i < arr->num; i++)
    {
        arr->hand[i] = dice_roll();
    }
}

void display_hand(struct Player_Dice player)
{
    int i;
    printf("Your hand: ");
    for(i=0; i< player.num; i++)
    {
        printf("%d ", player.hand[i]);
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));
    struct Player_Dice player = {5,{0},{0}};
    roll_all(&player);
    display_hand(player);

    return 0;
}
