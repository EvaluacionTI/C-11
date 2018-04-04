/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alex
 *
 * Created on 3 de abril de 2018, 09:11 AM
 */

#include <cstdlib>

using namespace std;

// 1. Definición de la clase
class CEEmpleado{
private:
    int id;
    char nombre;
    char apellido;

public:
    CEEmpleado();      // Constructor sin parámetros
    CEEmpleado(int);    // Constructor con parámetros
    ~CEEmpleado();      // Destructor
    
    void imprimeSueldo();
    void imprimeFicha();
};

// 2. Definición de la clase derivada
class CEDirectivo:CEEmpleado{
private:
    long numeroEmpleados;
    long numeroAcciones;
public:
    CEDirectivo();                  // Constructor sin parámetros
    CEDirectivo(int);               // Constructor con un parámetro
    CEDirectivo(float, double);     // Constructor con dos parámetros

    void despideA(CEEmpleado *e);
    void reunionCon(CEDirectivo *d);
    
    void imprimeFicha(){
        imprimeSueldo();
        CEEmpleado::imprimeFicha();
    }
};

/*
 * 
 */
int main(int argc, char** argv) {
    CEDirectivo d1, d2;
    CEEmpleado e1;
    
    d1.despideA(&e1);   // El directivo puede despedir a un empleado
    d2.despideA(&d2);   // o a otro directivo, ya que tambien es un empleado
    
    // e1.despideA(&d1);   // Error un empleado no tiene definido el método 
    
    d1.reunionCon(&d2);     // Un directivo se reune con otro
    d1.reunionCon(&e1);     // Error un empleado no se reunie con un directivo
    
    CEEmpleado *e2 = &d2;
    CEDirectivo *d3 = e1;
    
    // d3->numeroEmpleados = 3;
    d3 = (CEDirectivo *)e2.;
    
   //  d1.imprimeSueldo();  error
    d1.imprimeFicha();
   // d1.CEEmpleado::imprimeFicha(); error
    return 0;
}

