/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01VariableDinamica.cpp
 * Author: Alex
 *
 * Created on 23 de marzo de 2018, 09:18 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int iValorVariable = 2;
    int *punteroValorVariable = &iValorVariable;
    
    cout << "Valor de variable (iValorVariable) : " << iValorVariable;
    cout << "\nDirección del Puntero de la variable (&iValorVariable) : " << &iValorVariable;
    cout << "\nPuntero de la variable (*punteroValorVariable) : " << *punteroValorVariable;
    return 0;
}

