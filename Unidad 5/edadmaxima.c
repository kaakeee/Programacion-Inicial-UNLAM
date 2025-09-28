//
//  edadmaxima.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 10/09/2025.
//
#include <stdio.h>

int main ()

{
    
    int edad, contador, max, posicion;
    contador = 0;
    posicion = 1;
    
    puts("El programa indicara el alumno con mayor edad.");
    
    do {
        printf("\nIngrese edad: ");
        scanf("%d", &edad);
    } while (edad<0);
    
    max = edad;
    
    while (edad != 0)
    {
        contador++;
        if (edad > max)
        {
            max = edad;
            posicion = contador;
        }
        
        do {
            printf("\nIngrese edad: ");
            scanf("%d", &edad);
        } while (edad<0);
    }
    
    
    printf("La edad mayor es %d y se capto en la posicion %d.", max, posicion);
    return(0);
}
