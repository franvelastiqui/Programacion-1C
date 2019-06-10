#include "Employee.h"
#include <stdlib.h>
#include "string.h"

Employee* employee_new()
{
    Employee* empleado;

    empleado = (Employee*)malloc(sizeof(Employee));

    return empleado;
}

int employee_setId(Employee* empleado, int id)
{
    empleado->id=id;
    return 1;
}

int employee_setNombre(Employee* empleado, char nombre[])
{
    strcpy(empleado->nombre, nombre);
    return 1;
}

int employee_setHorasTrabajadas(Employee* empleado, int horasTrabajadas)
{
    empleado->horasTrabajadas=horasTrabajadas;
    return 1;
}

int employee_setSueldo(Employee* empleado, int sueldo)
{
    empleado->sueldo=sueldo;
    return 1;
}


