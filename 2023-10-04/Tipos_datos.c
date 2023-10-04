#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int entero = -10;

    printf("Valor: %d\n", entero);
    printf("Bytes: %d\n", sizeof(entero));
    printf("Direccion: %d\n", &entero);
    printf("Min: %d, max: %d\n", INT_MIN, INT_MAX );
    printf("Min: %u, max: %u\n", 0, UINT_MAX );

    return 0;
}
