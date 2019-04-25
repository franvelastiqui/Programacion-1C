#include <stdio.h>
#include "string.h"

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idSector;
    char descripcion[20];
    float valor;

} eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    int idSector;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado, eSector[], int);
void cargarEmpleado(eEmpleado[], int, eSector[], int);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int, eSector[], int);
int pedirEntero(char[]);
char pedirChar(char[]);
void modificarEmpleado(eEmpleado[], int, int, eSector[], int);
void bajarEmpleado(eEmpleado[], int, int, eSector[], int);
float importeMaximo(eEmpleado[], int);
void mostrarSueldoMaximo(eEmpleado[], int, eSector[], int);
int contarCarlos(eEmpleado[],int);
void mostrarSector(eEmpleado[],int,eSector[],int);

int menuDeOpciones(char[]);
