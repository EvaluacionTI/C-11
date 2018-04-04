/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01MetodoVirtual.cpp
 * Author: Alex
 *
 * Created on 4 de abril de 2018, 09:17 AM
 */

#include <cstdlib>

using namespace std;

class CEEmpleado{
    
public:
    virtual void imprimeSueldo() const;
    virtual void imprimeFicha() const;
};

class CEDirectivo:CEEmpleado{
public:
    virtual void imprimeFicha() const;      // no es necesario poner virtual
};

/*
 * 
 */
int main(int argc, char** argv) {
    CEDirectivo oCED;
    CEEmpleado oCEE;
    
    oCED.imprimeFicha();       // Llamamos a la función directivo
    oCEE.imprimeFicha();       // Llamamos a la función empleado
    oCEE.imprimeSueldo();      // Llamamos a la funcion empleado, aunque es
                               // virtual, la clase CEDirectivo no se redefine
    
    CEEmpleado *pe = &oCED;
    pe->imprimeSueldo();        // pe apunta a la clase CEDirectivo, llamamos a
                                // la funcion de la clase CEEmpleado que está
                                // asociado al objeto &oCED.
    
    return 0;
}

