/* 
 * Proyecto :   Evaluación de C++
 * File     :   longitudCaracteres.cpp
 * Author   :   ALDV
 * Created  :   16 de febrero de 2018, 09:21 AM
 * Objetivo :   Longitud de caractes
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
    char sPalabra[80];
    int iLongitud;
    /* La función scanf("%s") permite el registro de datos sin dejar espacios en blanco
     */
    printf("Escriba una palabra : ");
    scanf("%s", sPalabra);
    iLongitud = strlen(sPalabra);
    
    printf("La cantidad de caracteres que lleva es %i", iLongitud);
    return 0;
}

