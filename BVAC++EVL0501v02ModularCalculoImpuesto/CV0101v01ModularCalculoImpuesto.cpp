/* 
 * File:   CV0101v01ModularCalculoImpuesto.cpp
 * Author: Alex
 *
 * Created on 7 de marzo de 2018, 09:17 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
void entradaTasas(double &dTasaIGV, double &dTasaAN, double &dValor);
double calcularImpuestoVentas(double &dTasaIGV, double &dValor);
double calcularImpuestoActivo(double &dTasaAN, double &dValor);
void mostrarImpuesto(double &dTasaIGV, double &dTasaAN, double &dValor);

int main(int argc, char** argv) {
    double dTasaIGV, dTasaAN;
    double dValor;
    entradaTasas(dTasaIGV, dTasaAN, dValor);
    // calcularImpuestoVentas(dTasaIGV, dValor);
    // calcularImpuestoActivo(dTasaAN, dValor);
    mostrarImpuesto(dTasaIGV, dTasaAN, dValor);
    
    return 0;
}
void entradaTasas(double &dTasaIGV, double &dTasaAN, double &dValor){
    cout << "Tasa del impuesto a las ventas : ";
    cin >> dTasaIGV;

    cout << "Tasa del impuesto al activo neto" << endl;
    cin >> dTasaAN;

    cout << "Importe a calcular el impuesto : ";
    cin >> dValor;
}

double calcularImpuestoVentas(double &dTasaIGV, double &dValor){

    return dValor * dTasaIGV * 0.01;
}

double calcularImpuestoActivo(double &dTasaAN, double &dValor){

    return dValor * dTasaAN * 0.01;
}

void mostrarImpuesto(double &dTasaIGV, double &dTasaAN, double &dValor){

    cout << "El IGV para el " << dValor << " y a una tasa de " << dTasaIGV << "% el resultado es = " << calcularImpuestoVentas(dTasaIGV, dValor) << endl;
    cout << "El TAN para el " << dValor << " y a una tasa de " << dTasaAN << "% el resultado es = " << calcularImpuestoActivo(dTasaAN, dValor) << endl;
}
