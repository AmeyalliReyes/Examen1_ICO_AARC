

#include <iostream>
#include <stdio.h>

int main()
{
    //Sumar dos numeros, perdirlos por teclado

    //Declaracion de variables
    int dato1;
    int dato2;
    int resultado;

    printf("\n ===== SUMA DE DATOS[DOS DATOS]=====\n");

    printf("Ingresa tu primer numero: ");
   
    scanf_s("%i", &dato1);//entrada de valores 
    printf("Ingresa tu segundo numero: ");
    scanf_s("%i", &dato2);

    //Operacion 
    resultado = dato1 + dato2;

    //Resultado 
    printf("El resultado de la suma es: %i", resultado);

    
}


