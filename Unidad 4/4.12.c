//
//  4.12.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/*
 Confeccionar un programa que pueda determinar el importe a pagar por una prestación medica de su código. Los importes se cobran según la siguiente tabla:

Código Importe
    A 7000
    D 14000
    F 21000
    M 35000
    T 45000
 
Se debe ingresar el número de historia del paciente y el código de la prestación. Se debe emitir un ticket con el número de la historia, el código y el importe a pagar */

#include <stdio.h>

int main ()
{
    int num_paciente, importe, error;
    char cod_prestacion;
    
    puts("El sistema calculara el ticket correspondiente.");
    printf("\nIngrese el numero de historia del paciente: ");
    scanf("%d", &num_paciente);
    printf("\nIngrese el codigo de la prestacion: ");
    scanf(" %c", &cod_prestacion);
    
    if (cod_prestacion == 'A'){
        importe = 7000;
        error = 1;
    };
    if (cod_prestacion == 'D'){
        importe = 14000;
        error = 1;
    };
    if (cod_prestacion == 'F'){
        importe = 21000;
        error = 1;
    };
    if (cod_prestacion == 'M'){
        importe = 35000;
        error = 1;
    };
    if (cod_prestacion == 'T'){
        importe = 45000;
        error = 1;
    };
   
    printf("Ticket\n");
    
    if (error !=1){
        printf("\nCodigo de prestacion INCORRECTO, reintentar.\n");
    };
    printf("\nNumero historia paciente: %d", num_paciente);
    printf("\nCodigo: %c", cod_prestacion);
    printf("\nImporte a pagar: %d", importe);
    
    
    return(0);
}
