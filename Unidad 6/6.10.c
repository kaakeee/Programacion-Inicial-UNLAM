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
// 5 que salga
#include <stdio.h>

int esFechaVal(int dia, int mes, int anio);
int CantDiasMes(int m, int a);
int esBisiesto(int a);
int calcularDia(int dia, int mes, int anio, int numero);
int mostrarMenuValorElegido();
int sumaDia(int dia, int mes, int anio);
int restaDia(int dia, int mes, int anio);
int sumaNDia(int dia, int mes, int anio, int n);
int restaNDia(int dia, int mes, int anio, int n);
int main(){
    
    int num, dia, mes, anio, n;
    
    do {
        printf("Introduce una fecha valida\n");
        
        printf("\nDia: ");
        scanf("%d", &dia);
        
        printf("\nMes: ");
        scanf("%d", &mes);
        
        printf("\nAño: ");
        scanf("%d", &anio);
        
    }while (esFechaVal(dia, mes, anio) == 0);
        
    do {
        switch (num = mostrarMenuValorElegido()) {
            case 1: sumaDia(dia, mes, anio); break;
            case 2: restaDia(dia, mes, anio); break;
            case 3: printf("\nIngrese cantidad de dias: ");
                    scanf("%d", &n);
                    sumaNDia(dia, mes, anio, n); break;
            case 4: printf("\nIngrese cantidad de dias: ");
                    scanf("%d", &n);
                    restaNDia(dia, mes, anio, n); break;
            case 5: printf("\n\nBye"); break;
            }
        
    } while (num != 5);
        
}

int esFechaVal(int dia, int mes, int anio){
if (anio > 1600)
    if (mes >= 1 && mes <= 12)
        if (dia >= 1 && dia <= CantDiasMes(mes, anio))
            return 1;
    
    return 0;
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


int sumaDia(int dia, int mes, int anio){
    int df, mf, af;
    
    df = dia + 1;
    mf = mes;
    af = anio;
    
    if (df > CantDiasMes(mes, anio)){
        df -=CantDiasMes(mes, anio);
        mf++;
        if (mf > 12){
            mf = 1;
            af++;        }
    }
    printf ("%d/%d/%d mas un dia es: %d/%d/%d", dia, mes, anio, df, mf, af);
    return 0;
}

int restaDia(int dia, int mes, int anio){
    int df, mf, af;
    
    df = dia - 1;
    mf = mes;
    af = anio;
    
    if (df == 0){
        mf--;
        if (mf == 0){
            mf = 12;
            af--;
        }
        df = CantDiasMes(mf, af);
    }
    
printf("%d/%d/%d menos un dia es: %d/%d/%d", dia, mes, anio, df, mf, af);
    return 0;
}


int mostrarMenuValorElegido(){
    
    int num;
    printf("==========================\n");
    printf("Menu de opciones:\n");
    printf("==========================\n");
    printf("\n1) Suma 1 dia\n");
    printf("\n2) Resta 1 dia\n");
    printf("\n3) Sumar N numeros\n");
    printf("\n4) Restar N numeros\n");
    printf("\n5) Salir\n");
    printf("==========================\n");
    
    do {
        printf("Ingrese la opcion: ");
        scanf("%d", &num);
    } while (num < 0 || num > 6);
    
    return num;
}


int sumaNDia(int dia, int mes, int anio, int n){
    int df, mf, af;
    
    df = dia + n;
    mf = mes;
    af = anio;
    
    do {
        
        if (df > CantDiasMes(mes, anio)){
            df -=CantDiasMes(mes, anio);
            mf++;
            if (mf > 12){
                mf = 1;
                af++;
            }
        }
        
    }while (esFechaVal(dia, mes, anio)== 0);
    
    printf ("\n%d/%d/%d mas un dia es: %d/%d/%d\n", dia, mes, anio, df, mf, af);
    return 0;
}


int restaNDia(int dia, int mes, int anio, int n){
    int df, mf, af;
    
    df = dia - n; //-99
    mf = mes; //1
    af = anio; //2000
    
    do {
        if (df < 1){ // -99 == 0
            mf--;
            if (mf == 0){
                mf = 12;
                af--;
            }
            df = CantDiasMes(mf, af);
        }
    } while (mf != 13);
    
printf("\n%d/%d/%d menos un dia es: %d/%d/%d\n", dia, mes, anio, df, mf, af);
    return 0;
}
