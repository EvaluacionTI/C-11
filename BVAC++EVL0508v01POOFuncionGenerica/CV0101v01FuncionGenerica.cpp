/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01FuncionGenerica.cpp
 * Author: Alex
 *
 * Created on 6 de abril de 2018, 09:31 AM
 */

#include <iostream>
using namespace std;

template <class miTipoGenerico>

miTipoGenerico mayor(miTipoGenerico a, miTipoGenerico b){
    return (a > b)? a : b;
};

// Sobrecarga de la función
template <class miSobrecarga>
miSobrecarga maximo(int *p, miSobrecarga pCarga){
    
}

// Sobrecarga de la función
template <class miSobreCarga2>
miSobreCarga2 maximo(miSobreCarga2 pCargArreglo[]){
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "El máximo valor de 5 y 7 es = " << mayor(5, 7) << endl; 
    return 0;
}

