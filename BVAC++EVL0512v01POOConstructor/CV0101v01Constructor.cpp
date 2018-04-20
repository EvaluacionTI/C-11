/* 
 * File:   CV0101v01Constructor.cpp
 * Author: Alex
 *
 * Created on 18 de abril de 2018, 09:38 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class CTTiempo{
private:
    int hora;
    int minuto;
    int segundo;
public:
   // CTTiempo(); Se autodeclara al construir la clases
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

void CTTiempo::imprimeUniversal(){
    cout << setfill('0') << setw(2) << hora << ":" << setw(2) << minuto << ":" << setw(2) << segundo;
}

void CTTiempo::imprimeEstandar(){
    cout << ((hora == 0 || hora==12 )? 12 : hora % 12) << ":" << setfill('0') << setw(2) << minuto << ":" << setw(2) << segundo << (hora < 12 ? "AM" : "PM");
}

int main(int argc, char** argv) {
    CTTiempo oCTHoraLevantarse;
    cout << "A que hora se levanta Ud.?: " << endl;
    oCTHoraLevantarse.capturaHora();
    cout << "\nen Hora universal: ";
    oCTHoraLevantarse.imprimeUniversal();
    cout << "\nen Hora estandar: ";
    oCTHoraLevantarse.imprimeEstandar();
    cout << endl;

    cout << "\nProbando los constructores ";
    CTTiempo oCTHoraDesayuno(7, 15, 30);
    CTTiempo oCTHoraAlmuerzo(12, 30, 0);
    CTTiempo oCTHoraCena(18, 0, 0);
    cout << "\nEl desayuno se sirve a las: ";
    oCTHoraDesayuno.imprimeEstandar();
    cout << "\nEl almuerzo se sirve a las: ";
    oCTHoraAlmuerzo.imprimeEstandar();
    cout << "\nLa cena se sirve a las : ";
    oCTHoraCena.imprimeEstandar();
    cout << endl;
    return 0;
}

