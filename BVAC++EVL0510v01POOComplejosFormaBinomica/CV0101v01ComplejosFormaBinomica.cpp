/* 
 * File:   CV0101v01ComplejosFormaBinomica.cpp
 * Author: Alex
 *
 * Created on 12 de abril de 2018, 08:48 AM
 */
#include <cstdlib>
#include <iostream>

using namespace std;

class CLComplejo{
private:
    double real, imag;
public:
    //CLComplejo();
    CLComplejo(double r, double i);
    void setAsignareal(double r);
    void setAsignaImaginario(double i);
    double getParteReal();
    double getParteImaginario();
    double modulo() const;
    double argumento() const;
    void suma(const CLComplejo& a, const CLComplejo& b);
    void resta(const CLComplejo& a, const CLComplejo& b);
    void calculadora(const CLComplejo&a, const CLComplejo& b);
};

CLComplejo::CLComplejo(double r, double i){
    real = r;
    imag = i;
}

void CLComplejo::setAsignareal(double r){real = r;}
void CLComplejo::setAsignaImaginario(double i){ imag = i; }
double CLComplejo::getParteReal(){ return real; }
double CLComplejo::getParteImaginario(){return imag;}

void CLComplejo::suma(const CLComplejo& a, const CLComplejo& b){
    real = a.real + b.real;
    imag = a.imag + b.imag;
}

void CLComplejo::resta(const CLComplejo& a, const CLComplejo& b){
    real = a.real + b.real;
    imag = a.imag - b.imag;
    
}

void CLComplejo::calculadora(const CLComplejo& a, const CLComplejo& b){
    cout << "Resultado de suma " << a.real << " + "<< b.real;
    cout << "Resultado de resta " << a.imag << " + "<< b.imag;
}

//    cout << "Resultado de suma " << a.real << " + " << b.real << suma(a, b)<< endl;
//    cout << "Resultado de resta " << a.imag << " + " << b.imag << resta(a, b) << endl;


int main(int argc, char** argv) {
    cout << "Representar complejos en forma binómica " ;
    CLComplejo oCLReal, oCLImaginario;
    CLComplejo oCLResultado;
    
//    oCLReal.setAsignareal(10);
//    oCLReal.setAsignaImaginario(20);
//    oCLImaginario.setAsignareal(30);
//    oCLImaginario.setAsignaImaginario(40);

//    oCLResultado.calculadora(oCLReal, oCLImaginario);

    return 0;
}

