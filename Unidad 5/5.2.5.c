//
//  5.2.5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
//
/* 5.2.5 Ingresar un número entero positivo N y luego ingresar N números naturales. Determinar e informar:
• La sumatoria de los valores múltiplos de 3.
• La cantidad de valores múltiplos de 5.
• La sumatoria de los valores que se ingresan en orden par */

#include <stdio.h>
 
int main()

{
    int numN, i, numero = 0, mult3 = 0, cant5 = 0, suma_de_par = 0;
    // siempre dar valor 0 a las variables que van a sumar valores, debido sino toman valores del buffer.
    
    puts("El programa calculara los numeros positivos 'N' ingresados, luego determinara e informara las siguentes operaciones:");
    puts("• La sumatoria de los valores múltiplos de 3.");
    puts("• La cantidad de valores múltiplos de 5.");
    puts("• La sumatoria de los valores que se ingresan en orden par.");
    
    printf("\nIngrese la cantidad de numeros N a calcular: ");
    scanf("%d", &numN);
    
    for (i = 1 ; i <= numN ; i++)
    {
        printf("Ingrese numero a calcular: ");
        scanf("%d", &numero);
        
        if (numero % 3 == 0){
            mult3 = numero + mult3;
        }
        if (numero % 5 == 0 || numero % 5 == 5){
            cant5++;
        }
        if (i % 2 == 0){
            suma_de_par = numero + suma_de_par;
        }
    }
    
    printf("\nEl resultado de los valores multiplos de 3 son: %d", mult3);
    printf("\nEl resultado de la cantidad de valores multiplos de 5 es: %d", cant5);
    printf("\nLa sumatoria de los vales que se ingresan en orden par son: %d", suma_de_par);
    
    return(0);
}

