/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01MacroDefine.cpp
 * Author: Alex
 *
 * Created on 2 de abril de 2018, 09:10 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

#define MIN(a,b) ((a < b) ? a : b)
/*
 * 
 */
int main(int argc, char** argv) {
    int i, j=6, k=8;
    i = MIN(j*3,k-1);
    cout << "Valores j * 3 = " << j << " k = " << k << endl;
    cout << "Resultado = " << i;
    return 0;
}

