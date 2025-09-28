#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // Obtener la ruta del ejecutable
    char exePath[1024];
    if (realpath(argv[0], exePath) == NULL) {
        perror("Error al obtener ruta del ejecutable");
        return 1;
    }

    // Obtener la carpeta donde está el ejecutable
    char *dir = dirname(exePath);

    // Construir la ruta completa del archivo a crear
    char filepath[1024];
    snprintf(filepath, sizeof(filepath), "%s/proyecto.c", dir);

    // Crear el archivo
    FILE *file = fopen(filepath, "w");
    if (!file) {
        perror("Error al crear el archivo");
        return 1;
    }

    printf("Archivo creado: %s\n", filepath);

    fclose(file);
    return 0;
}
