//
//  2.10.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
// Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.//

#include <stdio.h>

int main ()

{
    int unidad, decena, centena, numero;
    
    
    //solicitar numero al usuario//
    puts("El sistema descompone un numero de 3 cifras a unidad, decena y centena");
    printf("\nPor favor introducir un numero de 3 cifras:\n");
    scanf("%d", &numero);
    
    //proceso logico//
    centena = numero / 100;
    decena = (numero / 10) % 10;
    unidad = numero % 10;
    
    //devolucion de resultados al usuario//
    printf("\nLa unidad es: %d", unidad);
    printf("\nLa decena es: %d", decena);
    printf("\nLa centena es: %d", centena);
    
    
    return(0);
}
