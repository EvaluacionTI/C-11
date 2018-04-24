/* 
 * File:   CV0101v01CadenaCaracteres.cpp
 * Author: Alex
 *
 * Created on 23 de abril de 2018, 10:30 AM
 * Se necesita de un programa que sirva para capturar el nombre y los valores de
 * las ventas mensuales de un vendedor.
 * Son 12 valores, uno por cada mes del año.
 * El programa debe repetirse para tantos vendedores como el usuario desea 
 * ingresar. Después de ingresar e imprimir los datos de un vendedor debe 
 * preguntarse al usuario si desea continuar o salir del programa. Cuando el 
 * usuario seleccione salir debe imprimirse un gran total de las ventas 
 * registradas en toda la corrida del programa.
 * Se requiere realizar el programa utilizando POO, manejando en archivos 
 * separados la declaración de la clase, la declaración de las funciones de la 
 * clase y el programa cliente que realice lo requerido
 */

#include <cstdlib>
using namespace std;
#include <iostream>
#include "Vendedor.h"
/*
 * 
 */
int main(int argc, char** argv) {
    CEVendedor v;
    int salir = 0;
    double granTotal = 0;
    while (salir >= 0){
        cout << "Ingrese datos de ventas del vendedor : " << endl;
        v.obtieneVentasDelUsuario();
        v.imprimeVentasAnuales();
        granTotal += v.totalVentasAnuales();
        cout << "Digite -1 para salir o 1 para continuar : " << endl;
    }
    
    return 0;
}

