//
//  4.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que los otros dos //

#include <stdio.h>

int main ()

{
    int num1, num2, num3;
    
    puts("El programa informara con respecto a 3 numeros ingresados, si el primero es menor que los demas");
    printf("\nIntroducir el primer numero:\n");
    scanf("%d", &num1);
    printf("\nIntroducir el segundo numero:\n");
    scanf("%d", &num2);
    printf("\nIntroducir el tercer numero:\n");
    scanf("%d", &num3);
    
    if (num1>num2 && num1>num3)
        printf("El numero %d es el mas grande", num1);
    else
        printf("El numero %d NO es el mas grande", num1);
    
    return(0);
}

