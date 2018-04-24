/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;
#include "Vendedor.h"
#include <cstring>

CEVendedor::vendedor(){
    for (int i=0; i<12; i++){
        ventas[i]=0.0;
        strcpy(nombre, "");
    }
}

/*
 * Obtiene 12 cifras de ventas del usuario desde teclado
 */
void CEVendedor::obtieneVentasDelUsuario(){
    char n[40];
    double cantVentas;

    cout << "Nombre del vendedor :";
    cin.ignore();
    cin.getline(n, 40);
    for (int mes=1; mes<=12;mes++){
        cout << "Introduzca el monto de ventas del mes :" << mes << ":";
        cin >> cantVentas;
        estableceVentas(mes, cantVentas);
    }
}

/*
 * La función resta uno al valor del mes para establecer el subindice apropiado
 * en el arreglo de ventas
 */
void CEVendedor::estableceVentas(int mes, double monto){
    if (mes>=1 && mes <= 12 && monto > 0){
        ventas[mes-1]=monto;
    }else{
        cout << "Valor de mes o ventas no valido " << endl;
    }
}

/*
 * Establece el nombre del vendedor
 */
void CEVendedor::estableceNombre(char n[40]){
    strcpy(nombre, n);
}

/*
 * Imprime las ventas anuales
 */
void CEVendedor::imprimeVentasAnuales(){
    cout << setprecision(2) << fixed << "\n Las ventas anuales totales del vendedor" << nombre << " son : $" << totalVentasAnuales() << endl;
}

double CEVendedor::totalVentasAnuales(){
    double total = 0.0;
    for (int i=0; i < 12; i++){
        total += ventas[i];
    }
    return total;
}