/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex
 *
 * Created on 6 de febrero de 2018, 09:29 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int iContador;
    int iTopeServicio = 114;
    
    iContador=1;
    while (iContador <= iTopeServicio){
        printf("El valor es : %d\n", iContador);
        iContador = iContador + 1;
    }
    return 0;
}

