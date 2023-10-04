#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char *fnombre = "escritura.txt";

    fp = fopen(fnombre, "w");
    fprintf(fp, "%d %s %s", 20200408, "nombre", "apellido");
    fclose(fp);

    return 0;
}
