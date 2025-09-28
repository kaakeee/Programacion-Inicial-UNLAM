//
//  2.11.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
//Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un número con formato (aammdd). //
#include <stdio.h>

int main ()

{
    int numero, numero_formato_D, numero_formato_A, numero_formato_M;
    
    puts("El sistema cambiara el formato de fecha de ddmmaa a aammdd");
    printf("\nPor favor introducir el numero en formato ddmmaa:\n");
    scanf("%d", &numero);
    
    //proceso logico//
    
    numero_formato_A = numero % 100; // devuelve los ultimos 2 digitos//
    numero_formato_M = (numero / 100) % 100; // devuelve los digitos del medio //
    numero_formato_D = numero / 10000; //devuelve los 2 primeros digitos //
    
    printf("\nLa fecha en formato aammdd es: %d%d%d", numero_formato_A, numero_formato_M, numero_formato_D);
    
    return(0);
}
