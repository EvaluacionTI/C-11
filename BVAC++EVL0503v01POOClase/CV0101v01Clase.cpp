/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01Clase.cpp
 * Author: Alex
 *
 * Created on 27 de marzo de 2018, 08:55 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
using std::setfill;

/*
 * Definición del tipo de dato abstracto
 */
class CETiempo{
public:
    CETiempo();
    void establecerHora(int, int, int);
    void capturarDatos();
    void imprimeUniversal();
    void imprimeEstandar();
    
private:
    int hora;
    int minuto;
    int segundo;    
};

// El constructor Tiempo inicializa cada miembro en cero y garantiza que los 
// objetos tiempo 
CETiempo::CETiempo(){
    hora = minuto = segundo = 0;
}

void CETiempo::establecerHora(int h, int m, int s){
    hora = (h >= 0 && h < 24) ? h : 0;
    minuto = (m >= 0 && m < 60) ? m : 0;
    segundo = (s >= 0 && s < 60 ) ? s : 0;
}

void CETiempo::capturarDatos(){
    int hr, mn, sg = 0;
    cout << "Hora : ";
    cin >> hr;
    cout << "Minuto : ";
    cin >> mn;
    cout << "Segundo : ";
    cin >> sg;
    establecerHora(hr, mn, sg);
}

// imprime la hora en el formato universal de tiempo
void CETiempo::imprimeUniversal(){
    cout << setfill( '0' ) << setw( 2 ) << hora << ":" 
         << setw( 2 ) << minuto << ":"
         << setw( 2 ) << segundo;
} // fin de la función imprimeUniversal
// imprime la hora en formato estándar de tiempo
void CETiempo::imprimeEstandar(){
    cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 ) << ":" << setfill( '0' )
         << setw( 2 ) << minuto << ":"
         << setw( 2 ) << segundo
         << ( hora < 12 ? " AM" : " PM" );
} // fin de la función imprimeEstandar

int main(int argc, char** argv) {
    CETiempo horaCena;
    
    horaCena.capturarDatos();
    cout << "La cena se servirá : " << endl;
    horaCena.imprimeUniversal();
    cout << "En hora universal : " << endl;
    horaCena.imprimeEstandar();
    return 0;
}
