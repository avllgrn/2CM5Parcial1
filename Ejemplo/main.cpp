#include <iostream>
#include <math.h>
#include "Punto.h"
using namespace std;

int main(void){
    Punto P1, P2;
    double m;

    //1.Pide dato(s)
    cout<<"Ingresa las coordenadas de P1"<<endl;
    P1.pideleAlUsuarioTusAtributos();
    cout<<"Ingresa las coordenadas de P2"<<endl;
    P2.pideleAlUsuarioTusAtributos();

    //2.Calcula formula(s)
    m = (P2.retornaTuAtributoY() - P1.retornaTuAtributoY())
        /
        (P2.retornaTuAtributoX() - P1.retornaTuAtributoX());

    //3.Muestra resultado(s)
    cout<<"P1";P1.muestraTusAtributos();cout<<endl;
    cout<<"P2";P2.muestraTusAtributos();cout<<endl;
    cout<<"m = "<<m<<endl;

    return 0;
}
