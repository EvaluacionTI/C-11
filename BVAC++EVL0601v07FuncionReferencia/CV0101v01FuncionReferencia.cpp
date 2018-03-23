
/* 
 * File:   CV0101v01FuncionReferencia.cpp
 * Author: Alex
 *
 * Created on 19 de marzo de 2018, 09:13 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
void incrementaValor(int iValor, int &iValorPorReferencia){
    cout << "2. Al ingresar a la función valor i = " << iValor << " valor j = " << iValorPorReferencia << endl;    
    iValor ++;
    iValorPorReferencia ++;
    cout << "3. Al finalizar la función valor i = " << iValor << " valor j = " << iValorPorReferencia << endl;
}
int main(int argc, char** argv) {
    int i = 1;
    int j = 1;
    cout << "1. Antes de llamar a función valor i = " << i << " valor j = " << j << endl;
    
    incrementaValor(i,j);
    
    cout << "4. Argumento por valor i = " << i << " Argumento por Referencia j = " << j << endl;
    
    return 0;
}

