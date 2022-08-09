#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i, factors = 0, f_index = 0;
    int * pnum = &num;
    printf("Enter a whole number: \n");
    scanf("%d", pnum);
    printf("You entered: %d\n", num);

    for(i=1; i <= num; i++){
        if(num % i == 0){
            ++factors;
        }
    }

    int * factor_array = (int *) malloc(factors * sizeof(int));

    for(i=1; i <= num; i++){
        if(num % i == 0){
            factor_array[f_index] = i;
            ++f_index;
        }
    }

    printf("The number %d has %d factors: ", num, factors);

    for(i = 0; i < factors; i++){
        if(i == (factors - 1)){
            printf("%d]\n", factor_array[i]);
        }
        else if(i == 0){
            printf("[%d, ", factor_array[i]);
        }
        else printf("%d, ", factor_array[i]);
    }

    int is_prime = (factors <= 2) ? 1 : 0;
    char is[] = "is", is_not[] = "is not";

    printf("%d %s a prime number.\n", num, (is_prime) ? is : is_not);

    free(factor_array);

    return 0;
}
