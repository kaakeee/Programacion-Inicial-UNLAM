//
//  2.6.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 28/08/2025.
//

/* Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1 y lo informe expresado en: TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB). */
#include <stdio.h>
//se declaran constantes//
#define mib 1024 //1 MiB a 1024 Kib//
#define gib 1024 //1 Gib a 1024 Mib//
#define tib 1024 //1 TiB a 1024 Gib//

int main ()

{
    float dato_ingresado, result_tib, result_gib, result_mib;
    
    puts("El programa calculara el valor de Kibibyte ingresados en Tib, Gib y Mib"); //mensaje a usuario//
    printf("\nPor favor ingrese el valor en Kibibyte a calcular:\n");
    scanf("%f", &dato_ingresado); //ingresa dato en enteros//
    
    //calculo logico y asignar el resultado a las variables//
    
    result_mib = dato_ingresado / mib;
    result_gib = result_mib / gib;
    result_tib = result_gib / tib;
    
    
    //salida de datos logicos//
    printf("\nEl resultado de convertir %.2f Kibibyte son los siguentes:\n", dato_ingresado);
    printf("\nTiB: %.2f", result_tib);
    printf("\nGiB: %.2f", result_gib);
    printf("\nMiB: %.2f", result_mib);
    
    return(0);
}
