//
//  6.10.c
//  6.10 al 6.13 seria esto
//
//  Created by Ramiro Nehuen Sanabria on 15/10/2025.
//
// Dada una fecha valida confeccionar funciones independientes que:
// 1 Sume un dia a la fecha dada.
// 2 Reste un dia a la fecha dada.
// 3 Sume n dias a la fecha dada.
// 4 Reste n dias a la fecha dada.

#include <stdio>



int esFechaVal();
int CantDiasMes(int m, int a);
int esBisiesto(int a);
int main(){
    
}

int esFechaVal(int dia, int mes, int anio)

{
if (anio > 1900)
    if (mes >= 1 && mes <= 12)
        if (dia >= 1 && dia <= CantDiasMes(mes, anio))
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
