//  6.8.c
//
//  Created by Ramiro Nehuen Sanabria on 16/10/2025.
//6.8. Realizar un programa que ingrese la fecha actual y la fecha de nacimiento de una persona y calcule su edad. Las fechas deben ser validadas con una función. Para el cálculo de la edad realizar una función que reciba las dos fechas y retorne la edad de la persona.
#include <stdio.h>
int esFechaVal(int dia, int mes, int anio);
int CantDiasMes(int m, int a);
int esBisiesto(int a);
int calcularDia(int dia, int mes, int anio, int numero);
int edadPersona(int dia,int mes,int anio,int dia_na,int mes_na,int anio_na);

int main (){
    int dia, mes, anio, dia_na, mes_na, anio_na, edad;

    printf("\n===================================\n");
    printf("\nEl sistema calculara edad respecto a la fecha de nacimiento que introduzca");
    printf("\n===================================\n");
    
    do {
        do {
            printf("Introduzca una fecha actual\n");
            
            printf("\nDia: ");
            scanf("%d", &dia);
            
            printf("\nMes: ");
            scanf("%d", &mes);
            
            printf("\nAño: ");
            scanf("%d", &anio);
            
        }while (esFechaVal(dia, mes, anio) == 0); //si vuelve 0 es falso y vuelve a pedir
        
        do {
            printf("Introduzca una fecha de nacimiento\n");
            
            printf("\nDia: ");
            scanf("%d", &dia_na);
            
            printf("\nMes: ");
            scanf("%d", &mes_na);
            
            printf("\nAño: ");
            scanf("%d", &anio_na);
            
        }while (esFechaVal(dia_na, mes_na, anio_na) == 0);
        
        printf("\n======================================\n");
        printf("La edad de la persona es: %d", edadPersona(dia, mes, anio, dia_na, mes_na, anio_na));
        printf("\n======================================\n");
        
        printf("\n------------------------------------------------\n");
        printf("Desea continuar? '1' para si, '0' para salir.");
        printf("\n------------------------------------------------\n");
        scanf("%d", &dia); //si, reutilizamos una variable jeje
    }while(dia == 1);
    return 0;
}


int esFechaVal(int dia, int mes, int anio){
if (anio > 1600)
    if (mes >= 1 && mes <= 12)
        if (dia >= 1 && dia <= CantDiasMes(mes, anio))
            return 1;
    return 0; //si la fecha esta mal vuelve a pedir
}

int CantDiasMes(int m, int a){
    int cdm = 31;
    
    if(m == 4 || m == 6 || m == 9 || m == 11)
        cdm = 30;
    else
        if (m == 2)
            cdm = 28 + esBisiesto(a);
    return cdm;
}

int esBisiesto(int a){
    int bis;
    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        bis=1;
    else
        bis=0;
    return bis;
}

int edadPersona(int dia,int mes,int anio,int dia_na,int mes_na,int anio_na){
    int edad;
    // 15/11/2025   nacimiento na 1/10/2000
    edad = anio - anio_na; //quedaria 2025
    if (mes < mes_na) {   //compara mes 11 vs 10/ es falso, por lo que NO resta edad
        edad--;
    } else if (mes == mes_na) {
        if (dia < dia_na) {
            edad--;
        }
    }
    return edad;
}

