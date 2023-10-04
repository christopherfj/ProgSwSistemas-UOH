#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaracion
    char ascii;
    short int numero, numero2;
    float division;
    // asignacion
    ascii = 'A';
    numero = 100;
    numero2 = 2;
    division = 1/numero2;

    printf("suma char+int: %d, %d bytes\n", ascii+1, sizeof(ascii+1));
    printf("suma int+long double: %d bytes\n", sizeof(numero+1.23L));
    printf("division: %.2f\n", division);

    return 0;
}
