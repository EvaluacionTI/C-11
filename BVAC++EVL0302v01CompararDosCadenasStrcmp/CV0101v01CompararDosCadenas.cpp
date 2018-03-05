/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01CompararDosCadenas.cpp
 * Author: Alex
 *
 * Created on 27 de febrero de 2018, 09:26 AM
 */
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // 1. Declaración de variables
    char sCadena1[] = "Arquitectura Host";
    char sCadena2[] = "Arquitectura Distribuido";
    
    // 2. Mostramos el nombre de las cadenas al usuario 
    cout << "La cadena uno se llama: " << sCadena1;
    cout << "\n La cadena dos se llama: " << sCadena2;
    
    // 3. Comparando cadenas
    cout << "\n Comparando cadena 1 con respecto a cadena 2, es igual a: " << strcmp (sCadena1, sCadena2);
    cout << "\n Comparando cadena 2 con respecto a cadena 1, es igual a: " << strcmp (sCadena2, sCadena1);
    return 0;
}

