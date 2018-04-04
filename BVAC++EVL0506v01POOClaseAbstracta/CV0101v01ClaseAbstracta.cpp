/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01ClaseAbstracta.cpp
 * Author: Alex
 *
 * Created on 4 de abril de 2018, 09:36 AM
 */

#include <cstdlib>

using namespace std;

class CEEmpleado{
    
public:
    virtual void imprimeSueldo()=0;     // Método abstracto, no podemos definir
    virtual void imprimeFicha(int)=0;   // la función para esta clase
};

class CEDirectivo:CEEmpleado{
public:
    virtual void imprimeFicha(int);      // Volvemos a declarar imprimeFicha,
                                         // deberemos definir el método para
    // la clase CEDirectivo
};
/*
 * Lo único que resta por mencionar de las funciones virtuales puras es que no
 * tenemos porque definirlas en una subclase de una clase abstracta si no 
 * queremos instanciar objetos de esa subclase.
 */
int main(int argc, char** argv) {

    return 0;
}

