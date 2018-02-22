/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
// 1. Declaración de variables
    int a, b, c;
    
int main(int argc, char** argv) {
    a = 55;
    b = 8;
    c = 2;
    printf("%i",argc);
    printf("%s", argv);
    // 2. Entrada de datos
    // printf("Primer número : ");
    // scanf("%i", a);
    //printf("Segundo número : ");
    //scanf("%i", b);
    //printf("Tercer número : ");
    //scanf("%i", c);
            
    // 3. Evaluar la operación
    printf("\n");
    if (a > b & a > c){
        printf("\n Mayor es %i",a);
    }else if (b > c){
        printf("\n Mayor es %i",b);
    }else{
        printf("\n Mayor es %i",c);
    }
    
    // 4. Mostrar los datos
    printf("\n %i %i %i",a, b, c);

    return 0;
}