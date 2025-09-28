//
//  5.1.3.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 10/09/2025.
//
/*5.1.3 Confeccionar un programa que me permita calcular y mostrar una cantidad de números
primos que se solicita por la pantalla.
Los números se calculan a partir del 2.
Por ejemplo: Si se ingresa el número 6, se deben generar los números: 2 , 3 , 5 , 7 , 11 , 13.
El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que, si encuentra un divisor, no siga buscando ya que se sabe que el número NO es primo. */


#include <stdio.h>
#include <math.h>

// Función para verificar si un número es primo
int esPrimo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0; // Optimización: descarta pares mayores a 2

    int limite = (int)sqrt((double)n);
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0)
            return 0; // Apenas encuentra un divisor, termina
    }
    return 1;
}

int main() {
    int cantidad, encontrados = 0, numero = 2;
    printf("\n\n\n");
    printf("Ingrese la cantidad de números primos a calcular: ");
    scanf("%d", &cantidad);

    printf("Los primeros %d números primos son:\n", cantidad);
    while (encontrados < cantidad) {
        if (esPrimo(numero)) {
            printf("%d ", numero);
            encontrados++;
        }
        numero++;
    }
    printf("\n");

    return 0;
}
    
    
    /*
    while (!(contador >= cantidad)) {
        if (primo <= 1)
        {
            //no es primo porque es negativo o 1
             // no contamos y salimos
            
        }
            else
        {
                if (primo % 2 == 0 || primo % 3 == 0 || primo % 5 == 0 || primo % 7 == 0 && '2' && '3' && '5' && '7')
                {
                //si divisible por 2, 3, 5 o 7, por lo que da 0 de resto, no es primo
                // no contamos y salimos
                } else
                {
                printf("\nNumero primo: %d", primo);
                contador++;
                }
        }
        primo++;
        
    }
    
    
    return(0);
}
*/
