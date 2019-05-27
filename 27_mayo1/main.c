#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escritura

    FILE* miArchivo;

    int* x=(int*)malloc(sizeof(int));

    *x=4;

    miArchivo=fopen("Datos","wb");

    fwrite(x,sizeof(int),1,miArchivo);

    fclose(miArchivo);



    //Lectura


    miArchivo=fopen("Datos.dat","rb");

    fread(x,sizeof(int),1,miArchivo);

    fclose(miArchivo);

    printf("%d",*x);

    return 0;
}
