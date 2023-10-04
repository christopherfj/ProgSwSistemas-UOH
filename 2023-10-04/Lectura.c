#include <stdio.h>
#include <stdlib.h>
#define N 256

int main()
{
    FILE *fp;
    char *fnombre = "salida.txt";
    char string[N];
    int lineas = 0;

    fp = fopen(fnombre, "r");
    while(!feof(fp)){
        if(fgets(string, N, fp)){
            lineas++;
            printf("linea: %d,  %s", lineas, string);
        }
    }
    fclose(fp);

    return 0;
}
