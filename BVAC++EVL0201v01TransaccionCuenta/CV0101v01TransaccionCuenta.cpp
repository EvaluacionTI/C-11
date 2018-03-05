/*=============================================================================
 * Proyecto :   Evaluación de C++
 * Módulo   :   
 * File     :   CV0101v01TransaccionCuenta.cpp
 * Author   :   ALDV
 * Created  :   22 de febrero de 2018, 10:10 AM
 * Objetivo :   Manejar las transacciones de cuenta de un cliente
 * a) El saldo inicial de la cuenta debe ser cero
 * b) El programa debe solicitar al usuario que indique si desea realizar un
 *    depósito o un retiro.
 * c) Si el usuario elige hacer un retiro, se solicita un valor y debe 
 *    verificarse que haya saldo suficiente, se resta el valor ingresado al 
 *    saldo
 * d) Si el usuario elige hacer un depósito se solicita un valor y ese valor
 *    se suma al saldo
 * e) Al final de cada transacción se pregunta al usuario si desea realizar
 *    otra transacción. Si contesta afirmativamente, se repiten las acciones 
 *    anteriores. Si no, se termina el programa, mostrando el saldo fina del 
 *    la cuenta
 =============================================================================*/
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    struct CESaldoCuenta{
        char cTipo[2];  //D=Deposito, R=Retiro, S=Salir
        double dSaldo;
    } SMovimiento;
    int iTipo = 0;
    double dImporte;
    SMovimiento.dSaldo = 0;

    while(iTipo != 3){
        cout << "Tipo Transacción [1]eposito, [2]etiro y [3]alir";
        cin >> iTipo;
        if (iTipo == 1){        
            cout << "Importe del Depósito : ";
            cin >> dImporte;
            SMovimiento.cTipo[2] = 'D';
            SMovimiento.dSaldo = SMovimiento.dSaldo + dImporte;
        }else{
            if (iTipo == 2){            
                cout << "Importe del Retiro : ";
                cin >> dImporte;
                if (SMovimiento.dSaldo < dImporte){
                    cout << "Transacción inválida - Fondos Insuficientes" << endl;
                }else{
                    SMovimiento.cTipo[2] = 'R';
                    SMovimiento.dSaldo = SMovimiento.dSaldo - dImporte;
                }
            }else{
                if (iTipo!=3){
                    cout << "Transacción inválida " << endl;
                }
            }
        }
        cout <<SMovimiento.cTipo[0];
        cout <<SMovimiento.cTipo[1];
        cout <<SMovimiento.cTipo[2];
        cout <<SMovimiento.dSaldo;
    }
    
    cout << "Saldo Final = " << SMovimiento.dSaldo << endl;
    
    return 0;
}

