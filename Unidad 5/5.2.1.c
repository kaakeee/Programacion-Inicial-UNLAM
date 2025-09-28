//
//  5.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
//
//5.2.1 Mostrar por pantalla los números pares comprendidos entre 100 y 500.

#include <stdio.h>

int main ()

{
    int num;
    
    
    printf("\nEl sistema calculara los numeros pares comprendidos entre 100 y 500");
    
    
    
    //primer termino del for es el inicio, el segundo es la llegada, y el tercero es la iteracion
    
    for (num = 100; num<= 500; num = num + 2)
    {
        printf("\nEl numero es: %d\n", num);
    }
    
    return(0);
}
