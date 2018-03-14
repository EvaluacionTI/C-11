/* 
 * File:   CV0101v01CalculoImpuesto.cpp
 * Author: Alex
 *
 * Created on 6 de marzo de 2018, 09:20 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
double proceduralCalculoUnImpuesto();
double proceduralCalculoImpuestoAlActivo();

int main(int argc, char** argv) {
    proceduralCalculoUnImpuesto();
    proceduralCalculoImpuestoAlActivo();
    
    return 0;
}

double proceduralCalculoUnImpuesto(){
    double dTasaIGV;
    double dImpuestoCalculadoIGV;
    double dValor;
    
    cout << "Tasa del impuesto a las ventas : ";
    cin >> dTasaIGV;
    cout << "Valor : ";
    cin >> dValor;
    dImpuestoCalculadoIGV = dValor * dTasaIGV * 0.01;
    cout << "El impuesto para el " << dValor << " y a una tasa de " << dTasaIGV << "% el resultado es = " << dImpuestoCalculadoIGV << endl;
}

double proceduralCalculoImpuestoAlActivo(){
    double dTasaIGV, dTasaAN;
    double dImpuestoCalculadoIGV, dImpuestoCalculadoTasaAN;
    double dValor;
    
    cout << "Tasa del impuesto a las ventas" << endl;
    cin >> dTasaIGV;
    cout << "Tasa del impuesto al activo neto" << endl;
    cin >> dTasaAN;
    cout << "Valor : " << endl;
    cin >> dValor;

    dImpuestoCalculadoIGV = dValor * dTasaIGV * 0.01;
    dImpuestoCalculadoTasaAN = dValor * dTasaAN * 0.01;
    cout << "El IGV para el " << dValor << " y a una tasa de " << dTasaIGV << "% el resultado es = " << dImpuestoCalculadoIGV << endl;
    cout << "El TAN para el " << dValor << " y a una tasa de " << dTasaAN << "% el resultado es = " << dImpuestoCalculadoTasaAN << endl;
}
