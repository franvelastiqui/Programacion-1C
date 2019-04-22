#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
int pedirEntero(char[]);
void modificarEmpleado(eEmpleado[], int, int);
void bajarEmpleado(eEmpleado[], int, int);
float importeMaximo(eEmpleado[], int);
void mostrarSueldoMaximo(eEmpleado[], int);

int menuDeOpciones(char[]);
