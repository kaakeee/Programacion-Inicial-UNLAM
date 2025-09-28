//
//  5.2.4.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
//
// 5.2.4 Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo solicita por teclado el programa.

#include <stdio.h>
 
int main ()

{
    int numN, suma, n, contador = 0;
    
    printf("\nEl programa calculara la suma de los numeros naturales que solicite.\n");
    printf("\nIngrese la cantidad de numeros a sumar: ");
    scanf("%d", &numN);
    
    for (n = 1 ; n <= numN; n++)
    {
        printf("\nIngrese el numero a sumar: ");
        scanf("%d", &suma);
        contador = contador + suma;
    }
    
    printf("\nEl resultado de la suma de todos los numeros es: %d", contador);
    
    return(0);
}
