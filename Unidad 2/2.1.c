//
//  2.1.c
//
//
//  Created by Ramiro Nehuen Sanabria on 27/08/2025.
// Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes aclaratorios la suma, el producto, el cociente y el resto. //

#include <stdio.h>

int main ()

{
    int num1, num2, suma, producto, cociente, resto; //declarar variables
    //no usamos float debido que no funciona el %//
    puts("Estimados, a continuacion debe introducir 2 numeros, se realizara la suma, producto, cociente y resto"); //mensaje a usuario con pots
    //usare %d para usar int, y no %f ya que no usamos float//
    printf("\n Ingrese el primer numero \n");  //mensaje a usuario//
    
    scanf("%d", &num1); //entrada de numero 1//
    
    printf("\n Ingrese el segundo numero \n"); //mensaje a usuario//
    
    scanf("%d", &num2); // entrada numero 2 //
    
    //operaciones matematicas//
    
    suma = num1 + num2;
    producto = num1 * num2;
    cociente = num1 / num2;
    resto = num1 % num2;
    
    puts("Estimados, los resultados son:"); //mensaje a usuario //

    //salida de datos procesados//
    
    printf("\n Suma: %d \n", suma);
    printf("\n Producto: %d \n", producto);
    printf("\n Cociente: %d \n", cociente);
    printf("\n Resto: %d \n", resto);
    
    
    return(0);
}
