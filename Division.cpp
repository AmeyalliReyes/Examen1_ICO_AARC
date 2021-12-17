//Programa que calcula divisiones de numeros reales 

#include <stdio.h>

int main()
{
    float numerador; 
    float denominador; 
    float resultado; 

    printf(" ==========Programa para calcular divisiones==========\n"); 

    printf("\n>>Introduce los valores a dividir "); 
    printf("\n>Numerador: ");
    scanf_s("%f", &numerador);
    printf(">Denominador: "); 
    scanf_s("%f", &denominador); 

    if (denominador != 0)
    {
        resultado = numerador / denominador;

        printf("\n>>Resultado: ");
        printf("\n%5.2f / %5.2f = %5.2f", numerador, denominador, resultado);
    }
    else
        printf("\n Error: El valor del denominador debe ser un numero diferente de cero!!"); 

    return 0; 
}


