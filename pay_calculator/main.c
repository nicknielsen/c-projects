// Author: Nick Nielsen

// Date: 2/21/22

/*

Purpose: This program gathers the number of hours worked by the user, and
based on that number, the program calculates and shows the user their gross pay
at $12/hour (and $18/hour of overtime). Additionally, the program calculates
and shows the user their total taxes and net pay.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize all the variables.
    float gross_pay = 0;
    float high_tax_bracket = 0.25;
    int   hours = 0;
    float low_tax_bracket = 0.15;
    float middle_tax_bracket = 0.2;
    float net_pay = 0;
    int   overtime_hours = 0;
    float overtime_pay_rate = 18.00;
    float pay_rate = 12.00;
    float taxes = 0;

    // Get the user's hours worked.

    printf("How many hours did you work this week?\n");

    scanf("%d", &hours);

    printf("You worked %d hours this week.\n", hours);

    // Calculate the user's gross pay based on the number of hours worked.

    if (hours > 40) {
        overtime_hours = hours - 40;
        gross_pay = (overtime_hours * overtime_pay_rate) + 480;
    }
    else {
        gross_pay = hours * pay_rate;
    }

    printf("You earned $%.2f in gross pay.\n", gross_pay);

    // Calculate the user's taxes.

    if (gross_pay <= 300) {
        taxes = gross_pay * low_tax_bracket;
    }
    else if (gross_pay > 300 && gross_pay <= 450){
        taxes = (gross_pay - 300) * middle_tax_bracket + 45;
    }
    else {
        taxes = (gross_pay - 450) * high_tax_bracket + 75;
    }

    printf("You must pay $%.2f in taxes.\n", taxes);

    // Calculate the user's net pay by subtracting their taxes from their gross pay.

    net_pay = gross_pay - taxes;

    // Show the user their gross pay, taxes, and net pay.

    printf("After taxes, you earned $%.2f this week.\n", net_pay);

    return 0;
}
