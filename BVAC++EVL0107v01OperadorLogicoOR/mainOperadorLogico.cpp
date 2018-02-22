/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainOperadorLogico.cpp
 * Author: Alex
 *
 * Created on 7 de febrero de 2018, 09:39 AM
 */

#include <cstdlib>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int iNumero1, iNumero2, iNumero3;
    
    printf("Ingrese tres números :\n");
    scanf("%i \n", &iNumero1);
    scanf("%i \n", &iNumero2);
    scanf("%i \n", &iNumero3);
    printf("Comparando ...\n");
    
    if ((iNumero1 + iNumero2) == iNumero3 || (iNumero3 + iNumero2 == iNumero1)){
        printf("Numeros iguales \n");
        printf("\n Numero 1 + Numero 2 = %i %i", iNumero1, iNumero2);
        printf("\n Numero 3 = %i", iNumero3);
    }else{
        printf("Números desiguales");
        printf("\n Numero 1 = %i", iNumero1);
        printf("\n Numero 2 = %i", iNumero2);
        printf("\n Numero 3 = %i", iNumero3);
    }
    return 0;
}