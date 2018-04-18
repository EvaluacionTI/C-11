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
    CTTiempo(int=12, int=0, int=0);
    void establecerHora(int, int, int);
    void imprimeUniversal();
    void imprimeEstandar();
    void capturaHora();
};

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

