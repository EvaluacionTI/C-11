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
class CEValores{
private:
    double md_porcentajeIGV;
    double md_porcentajeActivo;
    double md_baseImponible;
    double md_importeIGV;
    double md_importeActivo;

public:
    void SetPorcentajeIGV(double pdPorcentajeIGV){md_porcentajeIGV = pdPorcentajeIGV;}
    void SetPorcentajeActivo(double pdPorcentajeActivo){md_porcentajeActivo = pdPorcentajeActivo;}
    void SetBaseImponible(double pdBaseImponible){md_baseImponible = pdBaseImponible;}
    void SetImporteIGV(double pdImporteIGV){md_importeIGV = pdImporteIGV;}
    void SetImporteActivo(double pdImporteActivo){md_importeActivo = pdImporteActivo;}

    double GetPorcentajeIGV(){return md_porcentajeIGV;}
    double GetPorcentajeActivo(){return md_porcentajeActivo;}
    double GetBaseImponible(){return md_baseImponible;}
    double GetImporteIGV(){return md_importeIGV;}
    double GetImporteActivo(){return md_importeActivo;}
};

class CLImpuesto{
public:
    CEValores entradaTasas(CEValores poCEValores);
    double calcularImpuestoVentas(CEValores poCEValores);
    double calcularImpuestoActivo(CEValores poCEValores);
    void mostrarImpuesto(CEValores poCEValores);
   
};

CEValores CLImpuesto::entradaTasas(CEValores poCEValores){
    double dTasaIGV, dTasaAN, dValor;
    
    cout << "Tasa del impuesto a las ventas : ";
    cin >> dTasaIGV;

    cout << "Tasa del impuesto al activo neto" << endl;
    cin >> dTasaAN;

    cout << "Importe a calcular el impuesto : ";
    cin >> dValor;
    
    poCEValores.SetPorcentajeIGV(dTasaIGV);
    poCEValores.SetPorcentajeActivo(dTasaAN);
    poCEValores.SetBaseImponible(dValor);
    
    return poCEValores;
}

double CLImpuesto::calcularImpuestoVentas(CEValores poCEValores){

    return poCEValores.GetPorcentajeIGV() * poCEValores.GetBaseImponible() * 0.01;
}

double CLImpuesto::calcularImpuestoActivo(CEValores poCEValores){

    return poCEValores.GetPorcentajeActivo() * poCEValores.GetBaseImponible() * 0.01;
}

void CLImpuesto::mostrarImpuesto(CEValores poCEValores){

    cout << "El IGV para el " << poCEValores.GetBaseImponible() << " y a una tasa de " << poCEValores.GetPorcentajeIGV() << "% el resultado es = " << poCEValores.GetImporteIGV() << endl;
    cout << "El TAN para el " << poCEValores.GetBaseImponible() << " y a una tasa de " << poCEValores.GetPorcentajeActivo() << "% el resultado es = " << poCEValores.GetImporteActivo() << endl;
}

enum meses{
    enero, febrero, marzo, abril, mayo, junio, julio, agosto, setiembre, octubre, noviembre, diciembre
    };
    
int main(int argc, char** argv) {
    struct fecha{
        int dia;
        meses mes;
        int anio;
    };
    
    CEValores oCEValores;
    oCEValores = CEValores();
    CLImpuesto oCLImpuesto;
    
    oCEValores = oCLImpuesto.entradaTasas(oCEValores);
    oCEValores.SetImporteIGV(oCLImpuesto.calcularImpuestoVentas(oCEValores));
    oCEValores.SetImporteActivo(oCLImpuesto.calcularImpuestoActivo(oCEValores));
    oCLImpuesto.mostrarImpuesto(oCEValores);
    return 0;
}

