/* 
 * File:   Vendedor.h
 * Author: Alex
 *
 * Created on 23 de abril de 2018, 10:33 AM
 */

#ifndef VENDEDOR_H
#define VENDEDOR_H
class CEVendedor{
public:
    vendedor();
    void obtieneVentasDelUsuario();
    void estableceVentas(int, double);
    void imprimeVentasAnuales();
    void estableceNombre(char [40]);
    double totalVentasAnuales();
private:
    double ventas[12];
    char nombre[40];
};
#endif /* VENDEDOR_H */

