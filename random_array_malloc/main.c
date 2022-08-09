#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *create_random_array(int n, int max);
double my_rand(void);

int main()
{

int is_cont = 1;
srand(time(NULL));
while(is_cont == 1){
    int num, max;
    char cont[2];
    printf("How many numbers should your array have?\n");
    scanf("%d", &num);
    printf("What's the largest whole number this array should contain?\n");
    scanf("%d", &max);
    int *random_array = create_random_array(num, max);
    printf("Your randomly generated array:\n");
    for(int i = 0; i < num; i++){
        printf("%d ", random_array[i]);
    }
    printf("\nContinue? (y/n): ");
    scanf("%s", cont);

    if (cont[0] == 'n' || cont[0] == 'N'){
        is_cont = 0;
    }
    else{
        printf("\n");
    }
    free(random_array);
}


    return 0;
}


int *create_random_array(int n, int max){
    int *array;
    array = (int *) malloc(n*sizeof(int));

    for(int i = 0; i < n; i++){
        array[i] = my_rand() * max;
    }

    return array;
}

double my_rand(void){
    double random = (double)rand() / (double)((unsigned)RAND_MAX + 1);
    return random;
}
