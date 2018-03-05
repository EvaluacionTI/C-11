/*==============================================================================
 * Entidad            :	
 * Proyecto           :	EVL (Evaluación de Python 3.6.1.)
 * Módulo             :
 * Fecha Creación     :	02Mar2018
 * Objetivo           :	Uso de system
 * Fecha Edición      :
 * Descripción        : system() es una función del lenguaje de programación C 
 *                      incluida en su biblioteca estándar, dentro de la 
 * cabecera <stdlib.h>. Sirve para ejecutar subprocesos o comandos del sistema 
 * operativo.
 * «system» permite ejecutar a su vez otras funciones como: «cls», «dir» o 
 * «pause». 
 * Por ejemplo, al escribir system ("pause") se está incorporando una pausa en 
 * el programa, es decir, que se espera a que el usuario presione alguna tecla 
 * para continuar con la ejecución del mismo. 
 * ===========================================================================*/
// #include <stdlib.h> for c
// #include <stdio.h>
// #include <string.h>
#include <cstdlib>  // for c++
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    int iNumero, b=0;
    char cPalabra[80]="11101010";
/*
 * Se debe agregar al path la ruta donde se encuentra ubicado el c++; 
 * C:\cygwin64\bin; con la finalidad que reconozca los comandos
 * C++_HOME with con C:\cygwin64\bin
 */
    system("cls");
    for (iNumero=strlen(cPalabra);b <= iNumero;b++){
        printf("\n %c", cPalabra[b]);
        system("ping -n 0,1 localhost > revisa1");
    }
    
    for (iNumero=strlen(cPalabra);iNumero>=0;iNumero--){
        printf("\n %c", cPalabra[iNumero]);
        system("ping -n 0, localhost > revisa2");
    }
    system("pause");
    return 0;
}