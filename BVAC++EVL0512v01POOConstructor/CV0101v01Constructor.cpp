/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01Constructor.cpp
 * Author: Alex
 *
 * Created on 18 de abril de 2018, 09:38 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class CTTiempo{
private:
    int hora;
    int minuto;
    int segundo;
public:
    CTTiempo();
    CTTiempo(int=12, int=0, int=0);
    void establecerHora(int, int, int);
    void imprimeUniversal();
    void imprimeEstandar();
    void capturaHora();
};

// El constructor CTTiempo inicializa cada dato miembro en cero y garantiza que
// los objetos CTTiempo comiencen con el estado consistente
CTTiempo::CTTiempo(int pHora, int pMinuto, int pSegundo){
    establecerHora(pHora, pMinuto, pSegundo);
}

void CTTiempo::capturaHora(){
    int iHora, iMinuto, iSegundo;
    
    cout << "Hora : ";
    cin >> iHora;
    cout << "Minuto : ";
    cin >> iMinuto;
    cout << "Segundo : ";
    cin >> iSegundo;
    establecerHora(iHora, iMinuto, iSegundo);
}

void CTTiempo::establecerHora(int pHora, int pMinuto, int pSegundo){
    hora = (pHora >= 0 && pHora < 24)?pHora:0;
    minuto = (pMinuto >= 0 && pHora < 60)?pHora:0;
    segundo = (pSegundo >= 0 && pHora < 60)?pHora:0;
}
int main(int argc, char** argv) {
    cout << "A que hora se levanta Ud.?: " << endl;
    cout << "\nen Hora universal: ";
    cout << "\nen Hora estandar: ";
    cout << endl;

    cout << "\nEl desayuno se sirve a las: ";
    cout << "\nEl almuerzo se sirve a las: ";
    cout << "\nLa cena se sirve a las : ";
    cout << endl;
    return 0;
}

