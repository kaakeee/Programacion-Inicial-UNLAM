//
//  5.1.1.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 01/09/2025.
//
// Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean menores a 6000. (1 2 4 8 16 …). //
#include <stdio.h>

int main ()

{
    
    int potencias, calculo, i;
    puts(" ");
    potencias=1; //esto deja en 2^0=1, osea la primera :v
    
    puts("El programa calculara e informara los valores de las potencias de 2 cuyo resultado sean menores de 6000.");
    
    while (potencias<=6000){ //hasta 6000 no pararia
        printf("\nEl resultado es: %d", potencias);
        potencias = 2 * potencias;//aca hacemos la suma, que luego comprobara con el while si llego a 6000
        
    }
    
   
    
    return(0);
}
