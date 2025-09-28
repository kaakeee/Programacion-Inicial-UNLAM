//
//  4.3.c
//
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
#include <stdio.h>

int main ()

{
    int lado1, lado2, lado3;
    
    printf("\nIntroducir los 3 lados de un triangulo, el programa determinara si es equilatero, escaleno o isoceles: ");
    printf("\nIngrese lado 1: ");
    scanf("%d", &lado1);
    printf("\nIngrese lado 2: ");
    scanf("%d", &lado2);
    printf("\nIngrese lado 3: ");
    scanf("%d", &lado3);
    
    if (lado1 == lado2 && lado2 == lado3){
        printf("\nEl triangulo es equilatero");
    }
    
    else {
        if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf("\nEl triangulo es isoceles");
        }
        else {
            printf("\nEl triangulo es escaleno");
        }
    }
    
    return(0);
}
