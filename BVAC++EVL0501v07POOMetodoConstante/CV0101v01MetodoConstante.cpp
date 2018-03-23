/*
 * Por defecto los metodos de una clase tienen derecho a modificar los atributos
 * del objeto receptor, ya que lo reciben de un parámetro implicito de E/S.
 * 
 * A veces nos interesaría indicar que un método no modifica ningún atributo de
 * un objeto receptor. Para ello basta añadir la palabra const al final de la 
 * declaración del método (tanto en la interfaz como en la implementación).
 */

/* 
 * File:   CV0101v01POORelacionUso.cpp
 * Author: Alex
 *
 * Created on 15 de marzo de 2018, 09:15 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class CComplejo{
private:
    double real, imag;
    
public:
    CComplejo();        // Constructor para inicializar variables 
    CComplejo(double r, double i);
    ~CComplejo();       // Destructor
    void asigna_real(double r);
    void asigna_imaginario(double i);
    double parte_real();
    double parte_imaginaria();
    
    // 1. Definición de métodos constantes
    double parte_real_constante() const;
    double parte_imaginaria_constate() const;
    
    void suma(const CComplejo& a, const CComplejo& b);
};

//1.  Constructor por defecto
//    La implementación del constructor se realiza fuera de la clase
CComplejo::CComplejo(){
    real = 1;
    imag = 0;
}

//2. Constructor extendido
CComplejo::CComplejo(double r, double i){
    real = r;
    imag = i;
}

//3. Destruir el número complejo
CComplejo::~CComplejo(){
    // Sólo se puede definir un destructor por clase
    // No retorna valores
    // No toma argumentos
}

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

double CComplejo::parte_imaginaria_constate() const{
    return imag;
}

double CComplejo::parte_real_constante() const{
    return real;
}



int main(int argc, char** argv) {
    CComplejo a, b, s;
    CComplejo v[10]; // Un array de 10 complejos
    
    cout << "a : " << a.parte_imaginaria();
    cout << "b : " << b.parte_real();
    cout << "s : " << s.parte_imaginaria();
    cout << "v : " << v;
    
    // 1. Del constructor
    cout << "1. Variables basura sin inicializar " << endl;
    s.suma(a,b);
    cout << "Real : " << s.parte_real();
    cout << "Imaginario : " << s.parte_imaginaria();

    cout << "2. Variables con inicialización " << endl;
    a.asigna_real(7);
    a.asigna_imaginario(3);
    a.asigna_real(5);
    b.asigna_real(2);
    b.asigna_imaginario(7);
    s.suma(a,b);
    cout << "Real : " << s.parte_real();
    cout << "Imaginario : " << s.parte_imaginaria();

    cout << "3. Variables de constructor extendido " << endl;
    CComplejo   d(1,5);
    s.suma(a,b);
    cout << "Real d : " << d.parte_real();
    cout << "Imaginario d : " << d.parte_imaginaria();
    cout << "Imaginario s : " << s.parte_imaginaria();

    return 0;
}