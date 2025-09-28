//
//  5.2.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
//5.2.2 Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50. //





#include <stdio.h>


int main ()

{
    int num;
    int suma = 0;
    puts("El sistema calculara el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.");
    
    for (num = 50; num <= 100 ; num = num + 5)  //no para y va de 5 en 5 hasta llegar a 100
    {
        suma = num + suma;   //mas igual acumula el resultado
        printf("\nSuma: %d", suma);
    }
    
    return 0;
}

