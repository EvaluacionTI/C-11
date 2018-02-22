/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainForProgresivo.cpp
 * Author: Alex
 *
 * Created on 7 de febrero de 2018, 09:31 AM
 */

#include <cstdlib>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int iNumero;
    int iContador;
    
    printf("Ingrese el número (x) al que incrementar progresivamente hasta mil \n");
    scanf("%i", &iNumero);
    for (iContador=1; iContador<1001; iContador++){
        printf("El número es %i \n", iContador + iNumero);
    }
    return 0;
}

