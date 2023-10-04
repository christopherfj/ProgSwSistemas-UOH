#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d \n", 10/3 *3);
    printf("%d \n", 3*10/3);
    printf("%d \n", 3*(10/3));


    int n = 10;
    printf("n: %d, n: %d\n", n++, n*=10);

    n = 10;
    n++;
    printf("n: %d\n", n);
    printf("n: %d\n", n*=10);

    return 0;
}
