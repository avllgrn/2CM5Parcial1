#include <iostream>
#include "Complejo.h"
using namespace std;

Complejo sumaComplejos(Complejo C1, Complejo C2);

int main(void){
    Complejo C1, C2, C3;

    //1.Pide dato(s)
    cout<<"Ingresa las coordenadas de C1"<<endl;
    C1.pideleAlUsuarioTusAtributos();
    cout<<"Ingresa las coordenadas de C2"<<endl;
    C2.pideleAlUsuarioTusAtributos();

    //2.Calcula formula(s)
    C3 = sumaComplejos(C1,C2);

    //3.Muestra resultado(s)
    cout<<"C1 = ";C1.muestraTusAtributos();cout<<endl;
    cout<<"C2 = ";C2.muestraTusAtributos();cout<<endl;
    cout<<"C3 = ";C3.muestraTusAtributos();cout<<endl;
    return 0;
}

Complejo sumaComplejos(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(
          C1.retornaTuAtributoReal()
          +
          C2.retornaTuAtributoReal()
       );
    C3.modificaTuAtributoImaginario(
        C1.retornaTuAtributoImaginario()
        +
        C2.retornaTuAtributoImaginario()
       );

    return C3;
}
