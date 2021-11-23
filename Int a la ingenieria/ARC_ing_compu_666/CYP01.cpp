// CYP001.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //Datos proporcionados 
    int anchoPantalla; 
   int altoPantalla;
    float pX;
    float pY; 
    float pAnchoElemento;  
    float pAltoElemento; 
    //Datos a calcular 
    int  cxIzquierda;
    int cyIzquierda;
    int cxDerecha; 
    int cyDerecha; 

    //Valores de los datos 
    scanf_s("%i" , &anchoPantalla);
    scanf_s("%i", &altoPantalla); 
    scanf_s("%f", &pX);  
    scanf_s("%f", &pY);     
    scanf_s("%f", &pAnchoElemento);  
    scanf_s("%f", &pAltoElemento);
     
       
    //Calcular coordenadas   
    //coordenadas superior izquierda     
    cxIzquierda = anchoPantalla * pX;
    cyIzquierda = altoPantalla * pY; 
    //coordenas inferior derecha 
    cxDerecha = (anchoPantalla * pAnchoElemento) + cxIzquierda;  
    cyDerecha = (altoPantalla * pAltoElemento) + cyIzquierda; 




    //Resultados de los calculos 
    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", anchoPantalla, altoPantalla, pX, pY, pAnchoElemento, pAltoElemento, cxIzquierda, cyIzquierda, cxDerecha, cyDerecha);  
    


    


}

