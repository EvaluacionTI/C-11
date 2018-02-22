/* 
 * Proyecto :   Evaluación de C++
 * File     :   variable.cpp
 * Author   :   ALDV
 * Created  :   6 de febrero de 2018, 09:21 AM
 * Objetivo :   Structura de una variable
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // 1.0 Definiendo de una struct anónima
    struct {
        int id;
        char sGlosa[50];
        double dSaldo;
    } STAnomina;

    struct {
        int id;
        char sGlosa[50];
        double dSaldo;
    } SSaldoCuenta, SMovimiento;    
    
    // 2.0 Estructura con Nombre
    struct CESaldo{
        char sNumeroCuenta[80];
        double dSaldo;
    } Saldo;
    
    struct stServicio{
        char pri='a', seg='b';
    } Dato;
    
    //Saldo.sNumeroCuenta='8573849';
    Saldo.dSaldo=1525.85;
    
    // 2.0 Imprimiendo primer valor de la estructura conocida como Dato
    //cout(Dato.pri);
    printf("Data de la estructura ", Dato.pri);
    printf("Saldo final", Saldo.dSaldo);
    return 0;
}

