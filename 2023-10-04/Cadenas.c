#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char src[] = "cadena", dest[7];
    char cadena1[10], cadena2[10];
    int i;

    strcpy(dest, src);
    printf("%s\n", src);
    printf("%s\n", dest);

    printf("Ingrese cadena: ");
    scanf("%s", cadena1);
    for(i=0; cadena1[i]!='\0';i++){
        cadena2[i] = cadena1[i];
    }
    cadena2[i] = '\0';
    printf("%s", cadena2);

    return 0;
}
