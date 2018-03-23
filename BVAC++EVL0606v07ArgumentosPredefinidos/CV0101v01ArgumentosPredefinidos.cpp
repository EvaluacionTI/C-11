/*
 * Reglas que rigen el uso de argumentos predefinidos:
 * 
 * a) Cuando el programa omite un argumento predeterminado en una llamada de 
 *    función, el compilador reescribe la llamada e inserta el valor predetermi-
 * nado de dicho argumento para que se pase a la llamada de función.
 * 
 * b) Los argumentos predeterminados deben estar a la extrema derecha de la
 *    lista de parámetros.
 * 
 * c) Debe especificarse con la primera ocurrencia del nombre de la función es
 *    decir, en el prototipo de función.
 * 
 * d) Los valores predeterminados pueden ser: constantes, variables globales o 
 *    llamadas a funciones.
 */

/* 
 * File:   CV0101v01ArgumentosPredefinidos.cpp
 * Author: Alex
 *
 * Created on 22 de marzo de 2018, 09:01 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int volumenCaja( int iLongitud=1, int iAncho=1, int iAltura=1);

int main(int argc, char** argv) {
    cout << "Sin argumentos utilice valores predeterminados para todas las dimensiones \n" << endl;
    cout << "El volumen predeterminado de caja es : " << volumenCaja();

    cout << "Especifique la longitud y ancho predeterminados \n" << endl;
    cout << "El volumen de caja para longitud = 5, ancho = 1 \n" << volumenCaja(5);
    
    cout << "Especifique la longitud, ancho y altura predeterminados \n" << endl;
    cout << "El volumen de caja para longitud = 5, ancho = 1 \n" << volumenCaja(5, 1);

    cout << "Especifique la longitud, ancho y altura predeterminados \n" << endl;
    cout << "El volumen de caja para longitud = 5, ancho = 1, altura=2012 \n" << volumenCaja(5, 1, 2002);

    return 0;
}

int volumenCaja(int piLongitud, int piAncho, int piAltura){
    return piLongitud * piAncho * piAltura;
}

