/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01ValidacionDatos.cpp
 * Author: Alex
 *
 * Created on 17 de abril de 2018, 09:01 AM
 */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>

using namespace std;
/*
class CEUsuario{
private:
    char id[15];
    int pin;
public:
    void setId(char pId){id=pId;}
    void setPin(int pPin){pin=pPin;}
    
 //   char getId(){return id;}
    int getPin(){return pin;}
};
*/
class CLUsuario{
private:
    char id[15];
    int pin;
public :
    void capturarDatos();
    void imprimirDatos();
    void establecerDatos(char[15], int);
};

void CLUsuario::capturarDatos(){
    cout << "Ingrese el ID del usuario : ";
    cin.getline(id, 15);
    cout << "Ingrese número de identificación personal (PIN) ";
    cin >> pin;
}

void CLUsuario::imprimirDatos(){
    cout << " ID " << id << endl;
    cout << " PIN " << pin << endl;
}

class CLUsuarioValidacion{
private:
    char id[15];
    int pin;
public :
    void capturarValidacionDatos();
    void imprimirValidacionDatos();
    void establecerDatos(char[15], int);    
};
/*
 * 
 */
void CLUsuarioValidacion::capturarValidacionDatos(){
    char i[15];
    int p=0;
    
    cout << "Ingrese el ID del usuario : ";
    cin.getline(i, 15);
    cout << "Ingrese número de identificación personal (PIN) ";
    cin >> p;
    establecerDatos(i, p);
}

void CLUsuarioValidacion::imprimirValidacionDatos(){
    cout << " ID " << id << endl;
    cout << " PIN " << pin << endl;    
}

void CLUsuarioValidacion::establecerDatos(char i[15], int p){
    if (strlen(i)<6){
        cout << "La longitud de datos del usuario muy corto " << endl;
        strcpy(id, "desconocido");
    }else{
        strcpy(id, i);
    }
    
    if (p<=0){
        cout << "El Pin debe ser mayor que cero" << endl;
        pin=1;
    }else{
        pin=p;
    }
}

int main(int argc, char** argv) {

    cout << "Clase sin validación" << endl;
    CLUsuario oCLUsuario;

    oCLUsuario.capturarDatos();
    oCLUsuario.imprimirDatos();
    
    cout << "Clase con validación" << endl;
    CLUsuarioValidacion oCLUsuarioValidar;
    oCLUsuarioValidar.capturarValidacionDatos();
    oCLUsuarioValidar.imprimirValidacionDatos();
    return 0;
}

