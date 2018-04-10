/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01ClaseGenerica.cpp
 * Author: Alex
 *
 * Created on 9 de abril de 2018, 09:38 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

template <class miClaseGenerica>
class CEVector{
    miClaseGenerica* v;         // puntero a tipo T
    int tam;

    public:
        CEVector(int);

};

template <class T>
CEVector<T>::CEVector(int pi){
    
}
/*
 * 
 */
int main(int argc, char** argv) {

    CEVector<int> v(100);

    return 0;
}

