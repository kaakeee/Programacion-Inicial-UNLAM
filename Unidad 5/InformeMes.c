//
//  InformeMes.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
//

#include <stdio.h>

int main ()

{
    int mes;
    printf("\nEl sistema informara el mes correspondiente.");
    printf("\nIntroducir el numero: ");
    scanf("%d", &mes);
    switch (mes)
    {
        case 1: printf("\nEl mes %d corresponde al mes Enero.\n", mes); break;
        case 2: printf("\nEl mes %d corresponde al mes Febrero.\n", mes); break;
        case 3: printf("\nEl mes %d corresponde al mes Marzo.\n", mes); break;
        case 4: printf("\nEl mes %d corresponde al mes Abril.\n", mes); break;
        case 5: printf("\nEl mes %d corresponde al mes Mayo.\n", mes); break;
        case 6: printf("\nEl mes %d corresponde al mes Junio.\n", mes); break;
        case 7: printf("\nEl mes %d corresponde al mes Julio.\n", mes); break;
        case 8: printf("\nEl mes %d corresponde al mes Agosto.\n", mes); break;
        case 9: printf("\nEl mes %d corresponde al mes Septiembre.\n", mes); break;
        case 10: printf("\nEl mes %d corresponde al mes Octubre.\n", mes); break;
        case 11: printf("\nEl mes %d corresponde al mes Noviembre.\n", mes); break;
        case 12: printf("\nEl mes %d corresponde al mes Diciembre.\n", mes); break;
        default: printf("\nEl numero no corresponde a un mes valido\n");
    }
    return (0);
}
