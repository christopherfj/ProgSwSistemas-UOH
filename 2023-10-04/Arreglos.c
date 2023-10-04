#include <stdio.h>
#include <stdlib.h>
#define largo 5
int main()
{
    int array1[largo] = {};
    int array2[] = {0,0,0,0,0};
    int array3[largo];
    int array4[largo];
    array3[0] = 0;
    array3[1] = 0;
    array3[2] = 0;
    array3[3] = 0;
    array3[4] = 0;

    for(int i=0;i<largo;i++){
        array4[i] = 0;
    }
    for(int i=0;i<largo;i++){
        printf("Pos: %d , Valor:%d , Bytes: %d, Direccion: %p\n", i, array1[i], sizeof(array1[i]), &array1[i]);
    }
    return 0;
}
