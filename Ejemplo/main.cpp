#include <iostream>
#include "Punto.h"
using namespace std;

int main(void){
    Punto P, Q, R;

    //1.Pide dato(s)
    cout<<"Ingresa las coordenadas de P"<<endl;
    P.pideleAlUsuarioTusAtributos();
    cout<<"Ingresa las coordenadas de Q"<<endl;
    Q.pideleAlUsuarioTusAtributos();

    //2.Calcula formula(s)
    R.modificaTuAtributoX(P.retornaTuAtributoX()+Q.retornaTuAtributoX());
    R.modificaTuAtributoY(P.retornaTuAtributoY()+Q.retornaTuAtributoY());

    //3.Muestra resultado(s)
    cout<<"P";P.muestraTusAtributos();cout<<endl;
    cout<<"Q";Q.muestraTusAtributos();cout<<endl;
    cout<<"R";R.muestraTusAtributos();cout<<endl;

    return 0;
}
