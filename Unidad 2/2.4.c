//
//  2.4.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 27/08/2025.

/* Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms. y mts.
NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms. */

#include <stdio.h>
#define pie_a_pulgadas 12 //un pie vale 12 pulgadas //
#define yarda_a_pie 3 //una yarda vale 3 pies //
#define pulgada_a_cm 2.54 //una pulgada vale 2,54 cms//

int main ()

{
    float pie_ingresado, result_yarda, result_pulgadas, result_cms, result_mts;
    
    puts("El programa exhibira la medida ingresada de 'pies', convertida en yardas, pulgadas, centrimetros y metros"); //mensaje a usuario//
    printf("\nIngrese la medida en 'pies' a convertir\n");
    scanf("%f", &pie_ingresado); //ingreso dato usuario//
    
    //calculo de medidas, procesamiento logico//
    
    result_yarda = pie_ingresado / yarda_a_pie;
    result_pulgadas = pie_ingresado * pie_a_pulgadas;
    result_cms = result_pulgadas * pulgada_a_cm;
    result_mts = result_cms / 100;
    
    
    //mostrar conversion al usuario//
    printf("\nLos resultados de la conversion de %f son:\n\n", pie_ingresado);
    printf("\n Yardas: %f", result_yarda);
    printf("\n Pulgadas: %f", result_pulgadas);
    printf("\n Centimetros: %f", result_cms);
    printf("\n Metros: %f", result_mts);
    

    return(0);
    
    
}
