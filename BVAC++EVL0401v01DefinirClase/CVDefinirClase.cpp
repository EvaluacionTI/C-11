/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CVDefinirClase.cpp
 * Author: Alex
 *
 * Created on 6 de marzo de 2018, 08:42 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 1. Definir la clase
 */
class CEPersona{
public:
    void dormir();
    void hablar();
    void contar();
    void adquirirNombre();
    void decirNombre();
private:
    char sNombre[40];
};

/*
 * 2. Definir las funciones de la clase
 */
void CEPersona::dormir(){
    cout << "Allin tuta" << endl;
}

void CEPersona::hablar(){
    cout << "Allin Punchay" << endl;
}

void CEPersona::contar(){
    cout << "Allin suhka" << endl;
}

void CEPersona::adquirirNombre(){
    cout << "Mi nombre es" << endl;
    cin >> sNombre;
}

void CEPersona::decirNombre(){
    cout << "El nombre es " << sNombre << endl;
}

/*
 * 3.0 Porción ejecutable de C++
 */
int main(int argc, char** argv) {
    int iRespuesta = 0;
    cout << "Desea crear una persona : 1=Si, 0=No > ";
    cin >> iRespuesta;
    
    if (iRespuesta == 1){
        CEPersona oCEPersona;
        
        oCEPersona.adquirirNombre();
        cout << "Desea que diga mi nombre 1=Si, 0=No";
        cin >> iRespuesta;
        if (iRespuesta==1){
            oCEPersona.decirNombre();
        }
        cout << "Quiere escuchar hablar 1=Si, 0=No";
        cin >> iRespuesta;
        if (iRespuesta==1){
            oCEPersona.hablar();
        }
        cout << "Desea que vaya a dormiar 1=Si, 0=No";
        cin >> iRespuesta;
        if (iRespuesta==1){
            oCEPersona.dormir();
        }
        cout << "Desea oirme contar 1=Si, 0=No";
        cin >> iRespuesta;
        if (iRespuesta==1){
            oCEPersona.contar();
        }
    }
    return 0;
}

