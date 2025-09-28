//
//  factorial.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 10/09/2025.
//
// ingrese un numero mayor o igual a 0, informe el factorial de dicho numero
#include <stdio.h>

int main()
{
    int fac=1, j=1, nro;
    printf("Ingrese un numero entero mayor o igual a cero: ");
    
    do{
        scanf("%d", &nro);
    } while (nro < 0);
    
    while (j<nro)
    {
        fac *= j;
        j++;
    }
    
    printf ("\nEl resultado del factorial %d es %d", nro , fac);
    
    return(0);
}
