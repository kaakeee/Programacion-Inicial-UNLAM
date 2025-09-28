//
//  4_1.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//Se ingresan 3 números enteros distintos. Determinar el mayor.//

#include <stdio.h>

int main ()

{
    int num1, num2, num3;
    
    puts("El sistema calculara el numero mayor ingresado, por favor introducir numeros distintos");
    
    //solicitamos informacion al usuario//
    
    printf("\nPor favor introducir un numero entero:\n");
    scanf("%d", &num1);
    printf("\nPor favor introducir un numero entero:\n");
    scanf("%d", &num2);
    printf("\nPor favor introducir un numero entero:\n");
    scanf("%d", &num3);
    
    if (num1>num2 && num1>num3)
    {
        printf("El numero %d es el mas grande\n", num1);
    }
    else
        if (num2>num3 && num2>num1)
        {
            printf("El numero %d es el mas grande\n", num2);
        }
        else
        {
            printf("El numero %d es el mas grande\n", num3);
        }
    return(0);
}
