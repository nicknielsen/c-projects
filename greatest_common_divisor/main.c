#include <stdio.h>
#include <stdlib.h>
int greatestCommonDivisor(int a, int b);

int main()
{
    // Declare variables.
    int a, b, gcd;

    // Get first number and save it to "a".
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Test Print
    printf("%d\n", a);

    // Get second number from user and save it to "b".
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Test Print printf("%d\n", b);

    gcd = greatestCommonDivisor(a,b);

    printf("\nThe GCD of %d and %d is %d.\n", a, b, gcd); // test print

    printf("Goodbye!\n"); // Test Print
    return 0;
}

/*
The following function is my over-thought attempt. I spent far too long on it lmao...

int greatestCommonDivisor(int a, int b)
{
 while (a > 0 && b > 0)
    {
        printf("\nstart loop.\n");

        if (a == b)
        {
            printf(" %d = %d\n", a,b);
            break;
        }

        else if (a % 2 == 0 && b % 2 == 0)
        {
            if (a != 2)
            {
                printf("Divide a (%d) by 2",a);
                a /= 2;
            }

            if (b != 2)
            {
                printf(" and divide b (%d) by 2, as well.",b);
                b /= 2;
            }

            printf(" a = %d and b = %d.\n",a, b);
        }

        else if (a % 2 == 0 && b % 2 != 0)
        {
            if (a != 2)
            {
                printf(" Divide a (%d) by 2.\n",a);
                a /= 2;
            }
            printf(" a = %d and b = %d.\n",a, b);
        }

        else if (a % 2 != 0 && b % 2 == 0)
        {
            if (b != 2)
            {
                printf(" Divide b (%d) by 2.\n",b);
                b /= 2;
            }
            printf(" a = %d and b = %d.\n",a, b);
        }

        else if (a % 2 != 0 && b % 2 != 0)
        {
            if (a > b)
            {
                printf(" Subtract b (%d) from a (%d).\n",b, a);
                a -= b;
                printf(" a = %d and b = %d.\n",a, b);
            }
            else if (b > a)
            {
                printf(" Subtract a (%d) from b (%d).\n",a, b);
                b -= a;
                printf(" a = %d and b = %d.\n",a, b);
            }
        }
        printf("\nend loop\n");
    }

    int gcd = a;

    return gcd;
}

*/

int greatestCommonDivisor (int a, int b)
{

    while (a!=b)
    {
        if (a > b)
        {
            // TEST PRINT:printf(" Subtract b (%d) from a (%d).\n",b, a);
            a -= b;
            // TEST PRINT: printf(" a = %d and b = %d.\n",a, b);
        }
        else if (b > a)
        {
            // TEST PRINT:printf(" Subtract a (%d) from b (%d).\n",a, b);
            b -= a;
            // TEST PRINT:printf(" a = %d and b = %d.\n",a, b);
        }
    }
    int gcd = a;
    return gcd;
}
