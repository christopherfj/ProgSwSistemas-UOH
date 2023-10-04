#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    printf("Direccion de la variable : %p\n", ptr);
    printf("Valor de la variable : %d (basura)\n", *ptr);
    if(ptr!=NULL){
        printf("Variable reservada correctamente\n");
    }
    else{
        printf("Error al reservar memoria\n");
    }
    *ptr = 100;
    printf("Valor de la variable : %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
