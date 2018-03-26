/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01VariableNULL.cpp
 * Author: Alex
 *
 * Created on 26 de marzo de 2018, 09:45 AM
 */

#include <cstdlib>
#include <iostream>
#include <stddef.h>
#include <stdlib.h>

// NULL no es una palabra reservada sino que se define como una macro en las cabeceras stddef y stdlib
#define NULL (0)
#define NULL (0L)
#define NULL (void( *) 0)
// Una forma adecuada de definirlo es:
#ifndef NULL
    #define NULL (void( *) 0)
#endif

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "\n La definición #define NULL (0) es válida, tiene conversión implícita a puntero " << endl;
    cout << "\n La definición #define NULL (0L) es válida, tiene conversión implícita a puntero" << endl;
    cout << "\n La definición #define NULL (void( * ) 0) es válida, tiene conversión explícita el 0 a puntero" << endl;
    
    return 0;
}

