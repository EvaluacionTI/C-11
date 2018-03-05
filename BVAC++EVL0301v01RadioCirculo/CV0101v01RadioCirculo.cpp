/* 
 * File:   CV0101v01RadioCirculo.cpp
 * Author: Alex
 *
 * Created on 28 de febrero de 2018, 09:06 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

double diametro(double pRadio);
double circunferencia(double pRadio);

int main(int argc, char** argv) {
    double daRadio[5];

    for (int i=0;i < 5; i++){
        cout <<"\n Ingrese el radio número : " << i << ": ";
        cin >> daRadio[i];
        cout <<"Diámetro del circulo :" << diametro(daRadio[i]) <<  endl;
        cout <<"Circunferencia :" << circunferencia(daRadio[i]) <<  endl;
    }
    return 0;
}

double diametro(double pRadio){
    return pRadio * 2;
}

double circunferencia(double pRadio){
    double PI = 3.1416;
    return diametro(pRadio) * PI;
}

