/*
Author:
    Nick Nielsen
Date:
    2/17/22
Purpose:
    This program divides the user's total rent by their house's total number of roommates (the user included).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rent = 0, share = 0;
    int roommates = 0;
    printf("How many roommates do you have?\n");
    scanf("%d", &roommates);
    printf("How much is your rent?\n");
    scanf("%f", &rent);
    ++roommates;
    share = rent / roommates;
    printf("Each roommate's share of the rent is \($%.2f \/ %d\) \= $%.2f\n", rent, roommates, share);
    return 0;
}
