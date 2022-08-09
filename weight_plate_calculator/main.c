#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define BAR 45;
    int total_lift_weight;
    int just_plate_weight;
    int half_plate_weight;

    printf("How much do you want to lift?\n");
    printf("Enter lift weight: ");
    scanf("%d", &total_lift_weight);

    while (total_lift_weight % 5 != 0){
        printf("\nOnly weights divisible by 5 are allowed.\n");
        printf("Enter lift weight: ");
        scanf("%d", &total_lift_weight);
    }

    just_plate_weight = total_lift_weight - BAR;
    half_plate_weight = just_plate_weight / 2;

    if (total_lift_weight == 45)
    {
        printf("\nOnly lift the bar. Don't add any plates.");
    }
    else if (total_lift_weight < 45)
    {
        printf("\nUse dumbbells instead.");
    }

    while (half_plate_weight > 0)
    {
        if (half_plate_weight > 45)
        {
            printf("45\n");
            half_plate_weight -= 45;
        }
        else if (half_plate_weight < 45 && half_plate_weight >= 35)
        {
            printf("35\n");
            half_plate_weight -= 35;
        }
        else if (half_plate_weight < 35 && half_plate_weight >= 25)
        {
            printf("25\n");
            half_plate_weight -= 25;
        }
        else if (half_plate_weight < 25 && half_plate_weight >= 10)
        {
            printf("10\n");
            half_plate_weight -= 10;
        }
        else if (half_plate_weight < 10 && half_plate_weight >= 5)
        {
            printf("5\n");
            half_plate_weight -= 5;
        }
        else if (half_plate_weight < 5)
        {
            printf("2.5\n");
            half_plate_weight -= 2.5;
        }
    }

    if (total_lift_weight > 45){
        printf("Put the plate(s) above on each side of your bar.");
    }

    while(1);

    return 0;
}
