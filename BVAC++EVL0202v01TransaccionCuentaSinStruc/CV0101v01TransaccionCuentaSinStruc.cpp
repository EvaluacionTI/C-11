/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01TransaccionCuentaSinStruc.cpp
 * Author: Alex
 *
 * Created on 28 de febrero de 2018, 08:55 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int iTipo;  //1=Deposito, 2=Retiro, 3=Salir
    double dSaldo;
    double dImporte;
    
    iTipo = 99;
    while(iTipo != 3){
        cout << "Tipo Transacción [1]Deposito, [2]Retiro y [3]Salir";
        cin >> iTipo;
        if (iTipo == 1){
            cout << "Importe del Depósito : ";
            cin >> dImporte;
            dSaldo = dSaldo + dImporte;
        }else{
            if (iTipo == 2){
                cout << "Importe del Retiro : ";
                cin >> dImporte;
                if (dSaldo < dImporte){
                    cout << "Transacción inválida - Fondos Insuficientes" << endl;
                }else{
                    dSaldo = dSaldo - dImporte;
                }
            }else{
                if (iTipo != 3){
                    cout << "Transacción inválida " << endl;
                }
            }
        }
    }
    cout << "Saldo Final = " << dSaldo << endl;
    return 0;
}

