//
//  4.13.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* 4.13 Confeccionar un programa que permita calcular cuánto hay que pagarle a un trabajador, ingresando su
 sueldo básico y las horas extras trabajadas. Para el pago de las horas extras se toma en cuenta la
 categoría del trabajador.
 Categoría Precio de la hora extra
 A $ 8000
 B $ 8800
 C $ 10000
 D $ 12000
 E $ 14000
 */
#include <stdio.h>

int main ()

{
    int sueldo_base, horas_extras, salario_total, a, b, c, d, e;
    char categoria;
    
    puts("El programa calculara el salario total del trabajador");
    printf("\nIntroducir sueldo basico: ");
    scanf("%d", &sueldo_base);
    printf("\nIntroducir horas extras: ");
    scanf("%d", &horas_extras);
    printf("\nIngrese categoria trabajador: ");
    scanf(" %c", &categoria);
    
    //precio segun categoria//
    a = 8000;
    b = 8800;
    c = 10000;
    d = 12000;
    e = 14000;
    
    if (categoria == 'a' || categoria == 'A'){
        salario_total = sueldo_base + (horas_extras * a);
    };
    if (categoria == 'b' || categoria == 'B'){
        salario_total = sueldo_base + (horas_extras * b);
    };
    if (categoria == 'c' || categoria == 'C'){
        salario_total = sueldo_base + (horas_extras * c);
    };
    if (categoria == 'd' || categoria == 'D'){
        salario_total = sueldo_base + (horas_extras * d);
    };
    if (categoria == 'e' || categoria == 'E'){
        salario_total = sueldo_base + (horas_extras * e);
    };
    
    
    printf("\nAl empleado hay que pagarle: $%d", salario_total);
    
    
    
    return(0);
}
