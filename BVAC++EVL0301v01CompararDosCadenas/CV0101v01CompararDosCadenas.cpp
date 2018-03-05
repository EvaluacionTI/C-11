/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File         :   CV0101v01CompararDosCadenas.cpp
 * Author       : Alex
 *
 * Created on 27 de febrero de 2018, 08:57 AM
 * Objetivo     :   Comparar dos cadenas
 * Descripción  :   int strcmp(const char *s1, const char *s2);
 *                  Esta función compara la cadena apuntada por s1 con la cadena apuntada por s2, la función retorna 0 si las 2 cadenas son iguales, 
 *                  si s1 es mayor que s2 entonces retorna un valor mayor que 0 y 
 *                  si s1 es menor que s2 retorna un valor menor que 0
 */

#include <cstdlib>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    char sCadena1[] = "Arquitectura Host";
    char sCadena2[] = "Distribuido";
    char sOpcion1[2] = "A";
    char sOpcion2[2] = "A";
    
    if (strcmp(sCadena1, sCadena2) == 0){
        printf("Cadenas iguales \n", strcmp(sCadena1, sCadena2));
    }else{
        printf("Cadenas diferentes \n", strcmp(sCadena1, sCadena2));
    }
    
    if (strcmp(sOpcion1, sOpcion2) == 0){
        printf("sOpcion[1] \n" + sOpcion1[1]);
        printf("sOpcion[2] \n" + sOpcion1[2]);
        printf("Son Iguales \n", strcmp(sOpcion1, sOpcion2));
    }else{
        printf("Son diferentes", strcmp(sOpcion1, sOpcion2));
    }
    return 0;
}

