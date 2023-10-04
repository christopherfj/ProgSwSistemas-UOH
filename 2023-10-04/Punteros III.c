#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *cadena = "UOH 2023-2", *ptr;

    for(ptr = cadena; ptr<cadena+strlen(cadena); ptr++){
        printf("%c", *ptr);
    }

    return 0;
}
