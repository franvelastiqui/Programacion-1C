#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* miArchivo;

    int* x=(int*)malloc(sizeof(int));

    *x=4;

    //Escritura

    miArchivo=fopen("Datos","wb");

    if(miArchivo!=NULL)
    {
        fwrite(x,sizeof(int),1,miArchivo);
    }
    else
    {
        printf("Hay un error con el archivo");
    }



    fclose(miArchivo);



    //Lectura


    miArchivo=fopen("Datos","rb");

    fread(x,sizeof(int),1,miArchivo);

    if(miArchivo!=NULL)
    {
        printf("%d",*x);
    }
    else
    {
        printf("Hay un error con el archivo");
    }

    fclose(miArchivo);


    return 0;
}
