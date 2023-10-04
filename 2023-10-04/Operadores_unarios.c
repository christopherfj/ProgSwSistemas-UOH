#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 1, B = 1;
    printf("Predecremento \n");
    A = --B;
    printf("A: %d, B: %d \n", A, B);
    A = 1, B = 1;
    printf("Postdecremento \n");
    A = B--;
    printf("A: %d, B: %d \n", A, B);

    A = 1, B = 1;
    printf("Preincremento \n");
    A = ++B;
    printf("A: %d, B: %d \n", A, B);
    A = 1, B = 1;
    printf("Postincremento \n");
    A = B++;
    printf("A: %d, B: %d \n", A, B);

    return 0;
}
