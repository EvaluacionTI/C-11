/*
 * Estructura : Se define una estructura cuando se necesitan identificadores
 *              (variables, constantes, etc) compuestos por mas de un dato.
 */

/* 
 * File:   CV0101v01Estructura.cpp
 * Author: Alex
 *
 * Created on 23 de marzo de 2018, 08:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
using std::setfill;
/*
 * 
 */
struct CETiempo{
    int iHora;          // 0 - 23 (formato de 24 horas)
    int iMinuto;        // 0 - 59
    int iSegundo;       // 0 - 59
};

void imprimeUniversal(const CETiempo &);
void imprimeEstandar(const CETiempo &);

int main(int argc, char** argv) {
    cout << "argc " << argc << endl;
    cout << "argv " << argv << endl;
        
    CETiempo oCEHoraCena;
    // Capturando valores para los datos miembro
    cout << "Ingrese la hora de la cena" << endl;
    cout << "Hora: ";
    cin >> oCEHoraCena.iHora; // establece el valor del miembro hora de horaCena
    cout << "Minutos: ";
    cin >> oCEHoraCena.iMinuto; // establece el valor del miembro minuto de horaCena
    cout << "Segundos: ";
    cin >> oCEHoraCena.iSegundo; // establece el valor del miembro segundo de horaCena
    // Imprime la hora utilizando las funciones
    cout << "La cena se servira a las ";
    imprimeUniversal( oCEHoraCena );
    cout << " en hora universal,\nla cual es ";
    imprimeEstandar( oCEHoraCena );
    cout << " en hora estandar.\n";
    cout << endl;
    return 0;
}

// imprime la hora en el formato universal de tiempo
void imprimeUniversal( const CETiempo &poCETiempo ){
    cout << setfill( '0' ) << setw( 2 ) << poCETiempo.iHora << ":" 
         << setw( 2 ) << poCETiempo.iMinuto << ":"
         << setw( 2 ) << poCETiempo.iSegundo;
} // fin de la función imprimeUniversal
// imprime la hora en formato estándar de tiempo
void imprimeEstandar( const CETiempo &poCETiempo ){
    cout << ( ( poCETiempo.iHora == 0 || poCETiempo.iHora == 12 ) ? 12 : poCETiempo.iHora % 12 ) << ":" << setfill( '0' )
         << setw( 2 ) << poCETiempo.iMinuto << ":"
         << setw( 2 ) << poCETiempo.iSegundo
         << ( poCETiempo.iHora < 12 ? " AM" : " PM" );
} // fin de la función imprimeEstandar