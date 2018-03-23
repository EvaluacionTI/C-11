/* 
 * File:   CV0101v01ParametroIndefinido.cpp
 * Author: Alex
 *
 * Created on 20 de marzo de 2018, 08:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>   // función strlen
#include <stdarg.h> // macros parámetros variables

using namespace std;

/*
 * 
 */
void param_test(char* ...);

void param_test(char *tipos ...){
    int i;
    va_list ap;    //ap será la lista de parámetros
    va_start(ap, tipos);  // Inicialización de lista de parámetros
    i = strlen(tipos);    // la longitud de la cadena es el n° de parámetros
    // Nuestra función reconoce tipos enteros y tipos reales
    // Los reales sólo de tipo double
    int iv;
    double dv;
    for (int j=0; j<i; j++){
        switch (tipos[j]){
            case 'e':
                iv = va_arg(ap, int);
                cout << "Parámetro " << j << " = " << iv << " de tipo entero \n";
                break;
            case 'r':
                dv = va_arg(ap, double);
                cout << "Parámetro " << j << " = " << dv << " de tipo real \n";
                break;
            default:
                cout << "Parámetro " << j << " desconocido ";
                return;
        }
        va_end(ap);  // terminamos con la lista de parámetros
    }
    
}

int main(int argc, char** argv) {
    param_test("eer", 12, 5, 5.35);
    param_test("ili", 22, 30, 14.11);
    return 0;
}

