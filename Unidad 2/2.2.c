//
//  2.2.c
//
//
//  Created by Ramiro Nehuen Sanabria on 27/08/2025.
// Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo. //

#include <stdio.h>

int main ()

{
    int horas_trabajadas, valor_hora, sueldo;
    
    puts("\nEste programa calculara el sueldo de un empleado, debe ingresar las horas trabajadas y el valor de hora del empleado\n"); //mensaje a usuario sobre la funcionalidad del programa//
    
    printf("\nPor favor introduzca las horas horas trabajadas\n");
    scanf("%d", &horas_trabajadas);

    printf("\nPor favor introduzca el valor de hora trabajada\n");
    scanf("%d", &valor_hora);
    
    //calculo de sueldo//
    
    sueldo = horas_trabajadas * valor_hora;
    
    
    //indica al usuario el sueldo//
    printf("\nEl sueldo del empleado es: %d \n", sueldo);
    
    
    return(0);
}
