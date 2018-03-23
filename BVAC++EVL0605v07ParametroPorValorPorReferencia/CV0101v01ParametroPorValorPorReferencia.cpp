/*
 * Dos maneras de argumetos para una función:
 * Por favor : Se realiza una copia del argumento y se pasa a la función. Los 
 *             cambios que se hagan a la copia no afectan al valor original de 
 * la variable llamada.
 * La desventaja es que, si se pasa un gran elemento de datos, copiar ese dato
 * puede tomar una considerable cantidad de tiempo y espacio en memoria.
 * 
 * Por referencia : La llamada le da a la función invocada la habilidad de acce-
 *                  der directamente a los datos y modificar esos datos si la 
 * función invocada lo desea.
 * Es bueno por razones de rendimiento, pero debilita la seguridad porque la
 * función invocada puede corronper los datos de la función que se invoca.
 */

/* 
 * File:   CV0101v01ParametroPorValorPorReferencia.cpp
 * Author: Alex
 *
 * Created on 22 de marzo de 2018, 08:32 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int cuadradoPorValor(int);
void cuadradoPorReferencia(int &);
int main(int argc, char** argv) {
    int x = 2;
    int z = 4;
    
    cout << "x = " << x << "antes de cuadrado por Valor \n";
    cout << "Value devuelto por cuadradoPorValor : " << cuadradoPorValor(x) << endl;
    cout << "x = " << x << "despues de cuadrado por Valor \n";
    

    cout << "z = " << z << "antes de cuadrado porReferencia \n" << endl;
    cuadradoPorReferencia(z);
    cout << "z = " << z << "despues de cuadrado por Referencia \n" << endl;
    
    return 0;
}

int cuadradoPorValor(int piNumero){
    return piNumero *= piNumero;
}

void cuadradoPorReferencia(int &piNumeroReferencia){
    piNumeroReferencia *= piNumeroReferencia;
}