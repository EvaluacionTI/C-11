/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex
 *
 * Created on 2 de febrero de 2018, 11:10 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 2. Imprimir 2 variavles tipo cadena (string) en una oración
 */
int main(int argc, char** argv) {

    // 1. Declaración de variables
    char nombre[10];
    char ubicacion[10];
    
    // 2. Entrada de datos
    printf("Nombre del proyecto : ");
    scanf("%s", nombre);
    printf("Ubicación : ");
    scanf("%s", ubicacion);
    
    // 3. Mostrar los datos
    printf("Resultado : %s es %s", nombre, ubicacion);

    return 0;
}

