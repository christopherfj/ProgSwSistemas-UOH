#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, *ptr;
    x = 42;
    ptr=&x;

    printf("Valor de x: %d\n", x);
    printf("Valor de x (ptr): %d\n", *ptr);
    printf("Direccion de x: %d\n", &x);
    printf("Direccion de x (ptr): %d\n", ptr);
    printf("Direccion de ptr: %d\n", &ptr);

    return 0;
}
