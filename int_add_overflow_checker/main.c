#include <stdio.h>

int main()
{
    int num1, num2, sum;
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    if (num1 > 0 && num2 > 0 && sum <= 0){
        printf("Positive Overflow: %d\n", sum);
    } else if (num1 < 0 && num2 < 0 && sum >= 0){
        printf("Negative Overflow: %d\n", sum);
    } else {
        printf("Normal Integer Addition: %d", sum);
    }
    

    return 0;
}