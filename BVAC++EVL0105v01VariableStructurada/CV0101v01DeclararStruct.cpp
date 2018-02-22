/*=============================================================================
 * Proyecto :   Evaluación de C++
 * Módulo   :   
 * File     :   CV0101v01NumeroMayor.cpp
 * Author   :   ALDV
 * Created  :   19 de febrero de 2018, 09:10 AM
 * Objetivo :   Suma de tres números
 *              Promedio de tres números
 *              Producto de tres números
 *              Menor de los tres números
 =============================================================================*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    struct nombreDefinido{
        int valor1;
        char valor2[10];
    } alias;

    printf("Valor 1 = \n", alias.valor1);
    printf("Valor 2 = \n", alias.valor2);
    
    // 1.0 Definiendo de una struct anónima
    struct {
        int id;
        char sGlosa[50];
        double dSaldo;
    } STAnomina;

    printf("id = \n", STAnomina.id);
    printf("sGlosa = \n", STAnomina.sGlosa);
    printf("dSaldo = \n", STAnomina.dSaldo);
    
    struct {
        int id;
        char sGlosa[50];
        double dSaldo;
    } SSaldoCuenta, SMovimiento;    
    
    // 2.0 Estructura con Nombre
    struct CESaldo{
        char sNumeroCuenta[80];
        double dSaldo;
    } Saldo;
    
    struct stServicio{
        char pri='a', seg='b';
    } Dato;
    
    //Saldo.sNumeroCuenta='8573849';
    Saldo.dSaldo=1525.85;
    
    // 2.0 Imprimiendo primer valor de la estructura conocida como Dato
    //cout(Dato.pri);
    printf("Data de la estructura \n", Dato.pri);
    printf("Saldo final \n", Saldo.dSaldo);
    
    struct movimiento{
        struct balance{
            char mon[10];
            double monto;
        } moneda;
        int yyyy;
        int mes;
        int dia;
    } movim;
    
    movim.yyyy = 2018;
    movim.mes = 7;
    movim.dia = 30;
    
    printf("Moneda : %d\n", movim.moneda.mon);
    printf("Importe : %d\n", movim.moneda.monto);
    printf("Año : %i \n", movim.yyyy);
    printf("Año : %i \n", movim.mes);
    printf("Año : %d \n", movim.dia);
    
    struct CEPunto{
        int x;
        int y;
    };
    
    struct CELinea{
        CEPunto p1;
        CEPunto p2;
    };
    
    CELinea l1;
    l1.p1.x = 1;
    l1.p1.y = 1;
    
    l1.p2.x = 10;
    l1.p2.y = 20;
    
    printf("La L1 para los puntos (%d, %d), (%d, %d) \n", l1.p1.x, l1.p1.y, l1.p2.x, l1.p2.y);
    
    return 0;
}

