#include "Operaciones.h"

float pedirNumero(char texto[50])
{
    float x;

        printf("%s",texto);
        scanf("%f",&x);

    return x;
}

float sumarNumeros(float numeroUno, float numeroDos)
{
    float resultado;

    resultado=numeroUno+numeroDos;

    return resultado;
}

float restarNumeros(float numeroUno, float numeroDos)
{
    float resultado;

    resultado=numeroUno-numeroDos;

    return resultado;
}

float multiplicarNumeros(float numeroUno, float numeroDos)
{
    float resultado;

    resultado=numeroUno*numeroDos;

    return resultado;
}
