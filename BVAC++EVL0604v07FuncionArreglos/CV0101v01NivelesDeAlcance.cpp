/*
 * Descripción: Los cuatro niveles de alcance que puede tener un identificador:
 * a) De prototipo de función
 * b) De función
 * c) De bloque 
 * d) De archivo.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CV0101v01NivelesDeAlcance.cpp
 * Author: Alex
 *
 * Created on 21 de marzo de 2018, 08:36 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
void usoLocal();
void usoStaticLocal();
void usoGlobal();
int x = 15;  //Variable global
int main(int argc, char** argv) {
    int x = 5;
    cout << "x local en el alcance externo de main es " << x << endl;
    { // Se inicia un nuevo alcance
        int x = 7;
        cout << "x local en el alcance interno de main es " << x << endl;
    }
    cout << "x local en el alcance externo de main es " << x << endl;
    usoLocal();         //x local
    usoStaticLocal();   //x static local
    usoGlobal();        //x global
    usoLocal();         //reinicializa x local
    usoStaticLocal();   //x retiene su valor previo
    usoGlobal();        //x global retiene tambien su valor   
    cout << "\n x local en main es " << x << endl;
    return 0;
    
}

// usoLocal reinicializa la variable local x durante cada llamada
void usoLocal(){
    int x = 25;
    cout << endl << "x local es " << x << "al salir de uso local " << endl;
    ++x;
    cout << "x local es " << x << "al salir de uso local " << endl;
}

// usoStaticLocal inicializa a la variable static local x solo la primera vez
// que se llama a la función; el valor de x se guarda entre las llamadas a esta
// función
void usoStaticLocal(){
    // Se inicializa la primera vez que se llama a usoStaticLocal
    static int x = 50;
    cout << endl << "local static x es " << x << "al entrar a usoStaticLocal " << endl;
    ++x;
    cout << "local static x es " << x << "al salir de usoStaticLocal " << endl;
}

void usoGlobal(){
    cout << endl << "x global es " << x << "al entrar a usoGlobal " << endl;
    x *= 10;
    cout << "x global es " << x << "al salir de usoGlobal " << endl;
}