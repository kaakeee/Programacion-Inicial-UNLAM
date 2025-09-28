//
//  5.2.3.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
// 5.2.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.


#include <stdio.h>


int main ()

{
    int contador, num, suma = 0, contarpar = 0;
    
    puts("El sistema calculara cuando ingresen 10 números enteros. Determinara el promedio de los números pares.");
    
    for (contador = 1 ; contador <= 10 ; contador++ )
    {
        printf("\nIngrese Numero a calcular: ");
        scanf("%d", &num);
        if (num % 2==0)
        {
            suma +=num;
            contarpar++;
        }
    }
     if (contarpar>0)
     {
         suma = suma/contarpar;
         printf("\nEl promedio de los numeros es: %d", suma);
        
     }
     else
     {
         printf("No hay ningun numero par");
     }
    
    
    return(0);
}

