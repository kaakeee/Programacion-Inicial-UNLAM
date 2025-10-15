//
//  6.1.c
//
//
//  Created by Ramiro Nehuen Sanabria on 07/10/2025.
/*
6.1. Se ingresan números enteros comprendidos entre 100 y 2000. Determinar: a. b. c.
 
Cantidad de números ingresados entre 100 y 500
Cantidad de números pares ingresados entre 500 y 1200
Promedio de números ingresados entre 1200 y 2000

El ingreso de datos finaliza cuando se ingresa un número igual a 99. Para
realizar este programa se deben realizar las siguientes funciones:
 
• estaDentroDelRango: Recibe 3 enteros correspondientes a un número a validar y los límites superior e inferior del rango. La función debe retornar un 1 (verdadero) si el número a validar se encuentra dentro del rango indicado o un 0 (falso) si no lo está.
 
• LeerYValidar: Recibe los límites superior e inferior de un rango y retorna un número que se encuentre dentro del mismo. El ingreso de datos se realiza dentro de la función. Para validar el rango utilizar la función EstaDentroDelRango analizada en el punto anterior.
*/

#include <stdio.h>
int estaDentroDelRango (int numero, int lim_inferior, int lim_superior);
int LeerYValidar ();
int main ()
{
    int numero = 0, contador_a = 0, contador_b = 0, contador_c = 0, suma_c = 0;
    float promedio_c = 0.0f;
    printf("==================\n");
    printf("Ingresar numeros entre 100 y 2000.\n");
    printf("Ingrese 99 para finalizar.\n");
    printf("==================\n");
    numero = LeerYValidar();
    while (numero != 99)
        {
            if (estaDentroDelRango(numero, 100, 2000)) {
                if (estaDentroDelRango(numero, 100, 500)) {
                    contador_a++; // suma de 100 a 500
                } else if (estaDentroDelRango(numero, 501, 1200)) {
                    if (numero % 2 == 0) {
                        contador_b++; //solo suma pares entre 501 y 1200
                    }
                } else { // ya esta en el rango 100 y 2000 y no en los anteriores, está en 1201 y 2000
                    contador_c++;
                    suma_c = suma_c + numero;
                }
            }
            numero = LeerYValidar();
        }
        contador_c = suma_c / contador_c; //el promedio de c//
        
        printf("\n==================");
        printf("\nCantidad de numeros entre 100 y 500 es de: %d", contador_a);
        printf("\nCantidad de numeros pares entre 500 y 1200 es de: %d", contador_b);
        printf("\nEl promedio entre 1200 y 2000 es de: %d", contador_c);
        printf("\n==================\n");
    
    return(0);
}


int estaDentroDelRango (int numero, int lim_inferior, int lim_superior)
{
    if (numero >= lim_inferior && numero <= lim_superior) { //incluye los limites del rango
        return(1); // verdadero si el número está dentro del rango
    } else {
        return(0); // falso el número está fuera del rango
    }
}

int LeerYValidar ()
{
    int numero;
    printf("\nIngrese el numero: ");
    scanf("%d", &numero);
    return numero;
}





5 variables

ingrese numeros entre 100 y 2000
