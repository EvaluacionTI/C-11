/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01DefinicionHerenciaMultiple.cpp
 * Author: Alex
 *
 * Created on 5 de abril de 2018, 09:05 AM
 */

#include <cstdlib>

using namespace std;
// 1. Definir las clases
class CEVehiculo{
    char nroPlaca;
    int aaaaFabricacion;
    char tipoMotor;
};


// 2. Definir la herencia múltiple
class CETerrestre:CEVehiculo{
    char *tipoMotor;
public:
    virtual void imprimeTipoMotor(){cout << tipoMotor;};
};

class CEMarino{
    int tipoTransporteMarino;
    char *tipoMotor;
public:
    virtual void imprimeTipoMotor(){cout <<tipoMotor;};
};

class CEAnfibio: CETerrestre, CEMarino{
    virtual void imprimeTipoMotor();
};


void CEAnfibio::imprimeTipoMotor(){
    cout << "Motor terrestre : ";
    CETerrestre::imprimeTipoMotor();
    cout << "Motor acuático";
    CEMarino::imprimeTipoMotor();
}
/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

