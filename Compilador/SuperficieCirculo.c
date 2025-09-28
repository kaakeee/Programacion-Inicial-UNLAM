//Encontrar la superficie de un circulo //

#include <stdio.h>

int main ()

#define PI 3.1415 //declarar constante PI

{
    int rad, superficie; //declarar variables
    
    puts("\nEl programa calculara la superficie o area de un circulo\n");
    //mensaje a usuario
    
    printf("\n\nIngrese el valor del radio de un circulo mayor a cero\n");
    //mensaje a usuario
    
    scanf("%d", &rad); //usuario ingresa radio
 
    //procesamiento de la superficie del circulo//
    superficie = rad * rad * PI;
 
    printf("\nLa superficie o area del circulo es %d \n", superficie);
    //mostrar resultado a usuario//
    
    return(0);
}
