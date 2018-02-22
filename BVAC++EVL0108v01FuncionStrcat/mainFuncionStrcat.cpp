/*
 * Fecha    :   16Feb2018
 * Objetivo :   Uso de la función strcat
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char sNombre[80];
    char sApellido[80];
    printf("Ingrese Nombre : \n");
    scanf("%s", sNombre);
    printf("Ingrese Apellido : \n");
    scanf("%s", sApellido);
    strcat(sNombre, sApellido);

    printf("Su nombre completo es : %s \n\n", sNombre);
    printf("Apellido : %s ", sApellido);
    return 0;
}

