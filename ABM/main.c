
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int main()
{

    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


    hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            cargarEmpleado(lista,  T);
            break;
        case 2:
            bajarEmpleado(lista, T, 3);
            break;
        case 3:
            modificarEmpleado(lista, T, 3);
            break;
        case 4:
            mostrarListaEmpleados(lista, T);
            break;
        case 5:
            mostrarSueldoMaximo(lista, T);

        }
    }
    while(opcion!=6);

    system("cls");


    return 0;
}
