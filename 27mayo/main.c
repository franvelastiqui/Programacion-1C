#include <stdio.h>
#include "Elementos.h"
#include "string.h"

#define PATH "D:\\misDatos.txt"

int main()
{
    /*FILE* miArchivo;

    char nombre[20]="Franco";

    miArchivo=fopen(PATH,"w");

    if(miArchivo!=NULL)
    {
        fprintf(miArchivo,"Nombre:\n%s",nombre);

        fclose(miArchivo);
    }
    else
    {
        printf("Error en el archivo");
    }*/




    char nombre[20];

    FILE* miArchivo;

    miArchivo=fopen(PATH,"r");

    fgets(nombre,30,miArchivo);

    fclose(miArchivo);

    printf("%s",nombre);


    return 0;
}
