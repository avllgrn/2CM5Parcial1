#include <iostream>
#include <math.h>
#include "Punto.h"
using namespace std;

int main(void){
    Punto P1, P2;
    double d;

    //1.Pide dato(s)
    cout<<"Ingresa las coordenadas de P1"<<endl;
    P1.pideleAlUsuarioTusAtributos();
    cout<<"Ingresa las coordenadas de P2"<<endl;
    P2.pideleAlUsuarioTusAtributos();

    //2.Calcula formula(s)
    d = sqrt(pow(P2.retornaTuAtributoY()-P1.retornaTuAtributoY(),2)
             +
             pow(P2.retornaTuAtributoX()-P1.retornaTuAtributoX(),2)
             );

    //3.Muestra resultado(s)
    cout<<"P1";P1.muestraTusAtributos();cout<<endl;
    cout<<"P2";P2.muestraTusAtributos();cout<<endl;
    cout<<"d = "<<d<<endl;

    return 0;
}
