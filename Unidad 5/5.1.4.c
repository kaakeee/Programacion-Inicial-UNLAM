//
//  5.1.4.c
//
//
//  Created by Ramiro Nehuen Sanabria on 17/09/2025.
//
// 5.1.4 En un proceso de control científico se evalúan valores de temperatura, finalizando cuando de ingresa un valor ficticio de temperatura -50. Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso.
#include <stdio.h>

int main(){
    
    int temperatura, val_min = -1, val_max = 1, pos_min = 0, pos_max = 0, pos = 0, finalizador = -50;
    printf("\n\nEl programa calculara los valores maximos y minimos de temperatura ingresados.\n");
    printf("Valor por defecto -1 y 1 de temperatura para minima y maxima.\n");
    puts("El programa cortara cuando introduzca temperatura -50.");
    
    
    do {
        pos++;
        printf("\nIngrese temperatura: ");
        scanf("%d", &temperatura);
            
            if (temperatura < val_min) {
                val_min = temperatura;
                pos_min = pos;         }
                
            if (temperatura > val_max) {
                val_max = temperatura;
                pos_max = pos;         }
        
    } while (temperatura != finalizador);
    
    printf("\nLa temperatura minima fue: %d con la posicion %d\n", val_min, pos_min);
    printf("\nLa temperatura maxima fue: %d con la posicion %d", val_max, pos_max);
    
    
    
    return(0);
}
