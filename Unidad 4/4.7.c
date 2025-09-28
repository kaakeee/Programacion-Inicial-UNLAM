//
//  4.7.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
// Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando en cuenta que recibe un premio del 20% extra si trabajo más de 50 horas y, además, si trabajó más de 150 horas se le otorga un 10% adicional //

#include <stdio.h>

int main ()

{
    int valor_hora, horas_trabajadas, sueldo;
    
    puts("El sistema calculara el salario segun las horas trabajadas y el valor, incluyendo los extras");
    printf("\nIngrese el valor de la hora trabajada: ");
    scanf("%d", &valor_hora);
    printf("\nIngrese las horas trabajadas: ");
    scanf("%d", &horas_trabajadas);
    
    //calculo logico//
    
    if (horas_trabajadas > 50)
    {
        if (horas_trabajadas > 150)
        {
            sueldo = ((horas_trabajadas * valor_hora) * 1.2) * 1.1;
        }
        else
        {
            sueldo = (horas_trabajadas * valor_hora) * 1.2;
        }
    }
    else
    {
        sueldo = horas_trabajadas * valor_hora;
    }
        
    
    printf("\nEl salario del empleado es de: %d", sueldo);
    
    return(0);
}

