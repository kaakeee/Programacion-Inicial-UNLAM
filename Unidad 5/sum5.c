//
//  sum5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 24/09/2025.
//realizar un programa que ingrese 5 numeros enteros e informe la sumatoria de los positivos y que cantidad de no positivos negaivos y ceros se ingresaron.

#include <stdio.h>

int main (){
    
    int suma=0, numero, i, contador_no_positivos=0;
    printf("\n=========================================");
    printf("\nEl programa calculara 5 numeros enteros.");
    printf("\n=========================================");
    for (i=1;i<=5;i++){
        printf("\nIngrese numero el numero %d: ", i);
        scanf("%d", &numero);
        
        if (numero<=0)
            {contador_no_positivos++;}
        else {suma += numero;}
    }
    printf("\n=========================================");
    printf("\nLa suma total de los positivos es: %d", suma);
    printf("\nLa suma total de numeros no positivos es: %d", contador_no_positivos);
    printf("\n=========================================");
    return(0);
}
