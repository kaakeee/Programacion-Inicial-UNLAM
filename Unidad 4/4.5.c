//
//  4.5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio. //
#include <stdio.h>

int main ()
{
    int num1, num2, num3, num4;
    int menor, orden;
    
    puts("El programa determinara el numero de menor valor");
    
    //toma de datos por el cliente//
    printf("\nIngresar el primer numero: ");
    scanf("%d", &num1);
    printf("\nIngresar el segundo numero: ");
    scanf("%d", &num2);
    printf("\nIngresar el tercer numero: ");
    scanf("%d", &num3);
    printf("\nIngresar el cuarto numero: ");
    scanf("%d", &num4);
    
    //proceso logico//
    
    menor = num1;
    orden = 1;
    
    if (num2 < num1){
        menor = num2;
        orden = 2;
    }
    if (num3 < menor){
        menor = num3;
        orden = 3;
    }
    if (num4 < menor){
        menor = num4;
        orden = 4;
    }
    
    // si no cambia el orden, el num1 es menor con orden 1 y no se cambia//
    
    printf("\nDe los numeros ingresados %d, %d, %d y %d", num1, num2, num3, num4);
    printf("\nEl menor es: %d de orden: %d", menor, orden);
    
    return(0);
}
