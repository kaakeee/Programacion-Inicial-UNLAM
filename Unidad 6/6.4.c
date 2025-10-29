//  6.4.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 08/10/2025.
/*Realizar un programa que al comienzo solicite el ingreso de dos números enteros y luego muestre por pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores correspondientes):
 
Menú de Opciones
 Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
 
Ingrese su opción:
 
Si se ingresa el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y cierra el programa.

El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo nuevamente.

 Usar una función para mostrar el menú y retornar el valor elegido */

#include <stdio.h>

int mostrarMenuValorElegido(int numero_1, int numero_2);
int ingresarNumero();
int main () {
    
    int numero_1, numero_2, num, resultado;
    printf("\n==============");
    printf("\nPrograma 6.4");
    printf("\n==============");
    
    
    numero_1 = ingresarNumero();
    numero_2 = ingresarNumero();
    
    do {

        switch (num = mostrarMenuValorElegido(numero_1, numero_2)) {
            case 1: resultado = numero_1 + numero_2; printf("\nEl resultado es: %d\n\n", resultado); break;
            case 2: resultado = numero_1 - numero_2; printf("\nEl resultado es: %d\n\n", resultado); break;
            case 3: resultado = numero_1 * numero_2; printf("\nEl resultado es: %d\n\n", resultado); break;
            case 4: resultado = numero_1 / numero_2; printf("\nEl resultado es: %d\n\n", resultado); break;
            case 5: numero_1 = ingresarNumero(), numero_2 = ingresarNumero(); printf("\nEl resultado es: %d\n\n", resultado);break;
            case 6: printf("\nBye\n"); break;
        }
        
    } while (num != 6);
}

int mostrarMenuValorElegido(int numero_1, int numero_2){
    
    int num;
    printf("Menu de opciones:\n");
    printf("Numero 1: %d Numero 2: %d\n", numero_1, numero_2);
    printf("==========================\n");
    printf("1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("5) Ingresar Nuevos Números\n");
    printf("6) Salir\n");

    do {
        printf("Ingrese la opcion: ");
        scanf("%d", &num);
    } while (num < 0 || num > 7);
    
    return num;
}

int ingresarNumero(){
    int numero;
        printf("\nIngrese un numero entero: \n");
        scanf("%d", &numero);
    return numero;
}
