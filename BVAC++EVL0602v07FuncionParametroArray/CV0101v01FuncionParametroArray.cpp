/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01FuncionParametroArray.cpp
 * Author: Alex
 *
 * Created on 20 de marzo de 2018, 08:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void multiplicaMatriz(int paRow[5], int pValor){
    for(int i=0; i<5; i++){
        paRow[i] *= pValor;
    }
    cout << "Matriz :" << paRow << endl;
    cout << "Matriz :" << paRow[0] << endl;
    cout << "Matriz :" << paRow[1] << endl;
    cout << "Matriz :" << paRow[2] << endl;
    cout << "Matriz :" << paRow[3] << endl;
    cout << "Matriz :" << paRow[4] << endl;
    cout << "Matriz :" << paRow[5] << endl;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int aOrigen[5]={5,29,6,22,30};
    multiplicaMatriz(aOrigen, 15);
    
    return 0;
}

