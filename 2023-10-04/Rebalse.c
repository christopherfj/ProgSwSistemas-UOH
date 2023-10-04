#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    unsigned short numero = USHRT_MAX;
    printf("unsigned short: %d\n", numero);
    numero = numero+1;
    printf("unsigned short: %d\n", numero);
    numero = numero-1;
    printf("unsigned short: %d\n\n", numero);

    short signed_numero = SHRT_MAX;
    printf("signed short: %d\n", signed_numero);
    signed_numero = signed_numero+1;
    printf("signed short: %d\n", signed_numero);
    signed_numero = signed_numero-1;
    printf("signed short: %d\n", signed_numero);

    return 0;
}
