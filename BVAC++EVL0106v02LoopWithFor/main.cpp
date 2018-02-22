/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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

    for(iContador=1;iContador<=iTopeServicio;iContador++){
        printf("No de servicio - %d\n", iContador);
        iContador = iContador + 1;
    }
    return 0;
}

