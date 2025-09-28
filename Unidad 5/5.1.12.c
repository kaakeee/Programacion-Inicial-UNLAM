//
//  5.1.12.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 22/09/2025.
/*5.1.12
 El gobierno de la Ciudad de Buenos Aires realiza una encuesta a los estudiantes de
 los colegios secundarios. Los primeros datos que ingresar son la fecha (enteros, mes
 entre 1 y 12, y año mayor a 2024) y la cantidad de colegios de la ciudad en que se
 realizó la encuesta (entero, mayor a cero).
 
 De cada colegio se conoce:
 • Número de escuela (entero, mayor a cero)
 • La cantidad de alumnos inscriptos (entero, entre 1 y 35)
 • La especialidad (caracter, ‘T’: técnico, ‘N’: no técnico).
 De cada alumno del colegio que respondió la encuesta se conoce:
 • DNI (entero, entre 1 y 99999999)
 • Edad (entero, entre 10 y 25)
 • Sexo (carácter, ‘M’, ‘F’ o ‘X’)
 • Opinión con respecto a los conocimientos adquiridos (‘B’: buenos, ‘M’:
 malos)
 Se identifica el fin de ingreso de datos de los alumnos que respondieron la encuesta por cada colegio con el ingreso de DNI igual a cero del estudiante.
 Informar:
 a) Por cada colegio, el porcentaje de alumnos que contestaron la encuesta sobre la
 cantidad de alumnos inscriptos del colegio.
 b) Cantidad de estudiantes de colegio no técnicos que respondieron la encuesta.
 c) Porcentaje de mujeres de escuelas técnicas sobre la cantidad de estudiantes que
 respondieron la encuesta.
 d) Porcentaje de estudiantes que respondieron que los conocimientos adquiridos eran
 malos, sobre el total de encuestados.
 e) El alumno de mayor edad de los estudiantes encuestados, informando el DNI, el
 número de escuela y la especialidad que posee.
 f) Número del colegio con mayor opinión buena sobre los conocimientos adquiridos. */

#include <stdio.h>


char opinion_conocimientos(){
    char opinion;
    do{
        printf("\nIngrese su opinion, B para bueno y M para malo: ");
        scanf(" %c", &opinion);
        if (opinion == 'B' || opinion == 'b'){opinion = 'B';} //normalizamos B
            else if (opinion == 'M' || opinion == 'm'){opinion = 'M';} //normalizamos M
                else opinion = E; //si no es ninguna entra en loop hasta que se obtenga
    }while (opinion == 'E');
    
    return opinion; //devolvemos B o M
}

char genero(){
    char sexo;
    do {
        printf("\nIngrese el sexo, M, F o X: ");
        scanf(" %c", &sexo);
        if (sexo == 'M' || sexo == 'm'){sexo = 'M';} //normalizamos M
            else if (sexo == 'f' || sexo == 'F'){sexo='F';} //normalizamos F
                    else if (sexo == 'x' || sexo == 'X'){sexo = 'X';} //normalizamos X
                            else sexo = 'E'; //en loop hasta que se obtenga dato
    }while(sexo == 'E');
    return sexo; //devolvemos dato
}
int edad_alumno(){
    int edad;
    
    do {
        printf("\nIngrese edad del alumno, entre 10 y 25 años: ");
        scanf("%d", &edad);
    }while(edad < 10 || edad > 25); // • Edad (entero, entre 10 y 25)
    return edad;
}

int fecha_mes(){
    int mes;
    do {
        printf("\nIngrese Mes 1 a 12: ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12); //mes estre 1 y 12 incluidos
    return mes;
}

int identificacion(){
    int dni;
    do{
        printf("\nIngrese DNI: ");
        scanf("%d", &dni);
    }while (dni < 1 || dni > 99999999); //DNI (entero, entre 1 y 99999999
    return dni;
}

int fecha_anio(){
    int anio;
    do {
        printf("\nIngrese Año apartir de 2024: ");
        scanf("%d", &anio);
    } while (anio < 2024); //tomamos mes 2024 y para delante
    return anio;
}

int cantidad_colegios(){
    int cant_escuela;
    do {
        printf("\nIngrese cantidad de escuelas encuestadas: ");
        scanf("%d", &cant_escuela);
    } while (cant_escuela < 1); //cantidad de escuela 1 para delante
    return cant_escuela;
}

int cantidad_alumnos(){
    int alumnos;
    
    do{
        printf("\nIngrese cantidad de alumnos, entre 1 y 35: ");
        scanf("%d", &alumnos);
    }while(alumnos < 1 || alumnos > 35); //cantidad de alumnos entre 1 y 35
    return alumnos;
}

int numero_escuela(){
  //• Número de escuela (entero, mayor a cero)
    int num_escuela;
    
    do {
        printf("\nIngrese el numero de escuela. Entero mayor a cero: ");
        scanf("%d", &num_escuela);
    }while(num_escuela < 0); //numero de escuela positivo
    return num_escuela;
}

char especialidad_tecnica(){
    char tecnico;
    
    do {
        printf("\nIngrese 'T' si tiene especialidad tecnica y 'N' si no: ");
        scanf(" %c", &tecnico);
        if (tecnico == 'T' || tecnico == 't'){tecnico = 'T';} //normalizamos T
        else if (tecnico == 'N' || tecnico == 'n'){tecnico = 'N';} //normalizamos N
        else {tecnico = 'E';} //sino hay dato error hasta obtener correctamente
            }while(tecnico == 'E');
    return tecnico;
}

int main (){
    int mes, anio, cant_escuela, alumnos, num_escuela, dni, edad;
    char sexo, tecnico, opinion;
    
    mes = fecha_mes();
    anio = fecha_anio();
    cant_escuela = cantidad_colegios();
    alumnos = cantidad_alumnos();
    num_escuela = numero_escuela();
    tecnico = especialidad_tecnica();
    dni = identificacion();
    edad = edad_alumno();
    sexo = genero();
    opinion = opinion_conocimientos()
    
    printf("\n\n=========================");
    printf("\nSistema de encuesta.\n");
    printf("=========================\n");
    printf("\nEl mes es: %d", mes);
    printf("\nEl año es: %d", anio);
    printf("\nCantidad escuelas: %d", cant_escuela);
    printf("\nCantidad de alumnos: %d", alumnos);
    printf("\nNumero de escuela: %d", num_escuela);
    printf("\nEspecialidad tecnica: %c", tecnico);
    printf("\nEl DNI es: %d", dni);
    printf("\nLa edad es: %d", edad);
    printf("\nEl sexo: %c", sexo);
    
    
    return(0);
}
