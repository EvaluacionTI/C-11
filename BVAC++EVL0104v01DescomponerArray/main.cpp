/* 
 * File:   main.cpp
 * Author: Alex
 *
 * Created on 5 de febrero de 2018, 09:21 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;

/*
 * Descomposición de un array
 */
int main(int argc, char** argv) {
    char cPalabra[80];
    int iNumero;
    
    printf("Ingrese una palabra a descomponer : ");
    gets(cPalabra);
    
    for (iNumero=strlen(cPalabra);iNumero>=0;iNumero--){
        printf("\n cPalabra[ %i", iNumero);
        printf(" ] =  %c", cPalabra[iNumero]);
    }
    return 0;
}

