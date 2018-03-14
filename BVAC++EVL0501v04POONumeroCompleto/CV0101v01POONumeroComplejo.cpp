/* 
 * File:   CV0101v01POOCalculoImpuesto.cpp
 * Author: Alex
 *
 * Created on 8 de marzo de 2018, 08:47 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
class CComplejo{
private:
    double real, imag;
    
public:
    CComplejo(double r, double i);
    void asigna_real(double r);
    void asigna_imaginario(double i);
    double parte_real();
    double parte_imaginaria();
    void suma(const CComplejo& a, const CComplejo& b);
};

void CComplejo::asigna_real(double r){
    real = r;
}

void CComplejo::asigna_imaginario(double i){
    imag = i;
}

double CComplejo::parte_real(){
    return real;
}

double CComplejo::parte_imaginaria(){
    return imag;
}

//const posibilita que el parámetro no sea modificado
void CComplejo::suma(const CComplejo& a, const CComplejo& b){
    real = a.real + b.real;
    imag = a.imag + b.imag;
}

int main(int argc, char** argv) {
    CComplejo a, b, s;
    CComplejo v[10]; // Un array de 10 complejos
    
    a.asigna_real(7);
    a.asigna_imaginario(3);
    a.asigna_real(5);
    b.asigna_real(2);
    b.asigna_imaginario(7);
    s.suma(a,b);
    cout << "Real : " << s.parte_real();
    cout << "Imaginario : " << s.parte_imaginaria();
    
    return 0;
}

