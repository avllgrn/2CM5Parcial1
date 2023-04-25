#include <iostream>
#include <math.h>
#include "Complejo.h"
using namespace std;

Complejo funcionSuma(Complejo C1, Complejo C2);
Complejo funcionResta(Complejo C1, Complejo C2);
Complejo funcionMultiplica(Complejo C1, Complejo C2);
Complejo funcionDivide(Complejo C1, Complejo C2);

int main(void){
    Complejo C1, C2, C3, C4, C5, C6;

    //1.Pide dato(s)
    cout<<"Ingresa las coordenadas de C1"<<endl;
    C1.pideleAlUsuarioTusAtributos();
    cout<<"Ingresa las coordenadas de C2"<<endl;
    C2.pideleAlUsuarioTusAtributos();

    C3 = funcionSuma(C1,C2);
    C4 = funcionResta(C1,C2);
    C5 = funcionMultiplica(C1,C2);
    C6 = funcionDivide(C1,C2);

    //3.Muestra resultado(s)
    cout<<"C1 = ";C1.muestraTusAtributos();cout<<endl;
    cout<<"C2 = ";C2.muestraTusAtributos();cout<<endl;
    cout<<"C3 = ";C3.muestraTusAtributos();cout<<endl;
    cout<<"C4 = ";C4.muestraTusAtributos();cout<<endl;
    cout<<"C5 = ";C5.muestraTusAtributos();cout<<endl;
    cout<<"C6 = ";C6.muestraTusAtributos();cout<<endl;

    return 0;
}

Complejo funcionSuma(Complejo C1, Complejo C2){
    Complejo C3;
    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(C1.retornaTuAtributoReal()
                              +
                              C2.retornaTuAtributoReal()
       );
    C3.modificaTuAtributoImaginario(C1.retornaTuAtributoImaginario()
                                    +
                                    C2.retornaTuAtributoImaginario()
       );
    return C3;
}
Complejo funcionResta(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(C1.retornaTuAtributoReal()
                              -
                              C2.retornaTuAtributoReal()
       );
    C3.modificaTuAtributoImaginario(C1.retornaTuAtributoImaginario()
                                    -
                                    C2.retornaTuAtributoImaginario()
       );
    return C3;
}
Complejo funcionMultiplica(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoReal()
          -
          C1.retornaTuAtributoImaginario()*C2.retornaTuAtributoImaginario()
    );
    C3.modificaTuAtributoImaginario(
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoImaginario()
          +
          C2.retornaTuAtributoReal()*C1.retornaTuAtributoImaginario()
    );
    return C3;
}
Complejo funcionDivide(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(
          (C1.retornaTuAtributoReal()*C2.retornaTuAtributoReal()
          +
          C1.retornaTuAtributoImaginario()*C2.retornaTuAtributoImaginario()
          )
          /
          (pow(C2.retornaTuAtributoReal(),2)+pow(C2.retornaTuAtributoImaginario(),2))
    );
    C3.modificaTuAtributoImaginario(
          (C2.retornaTuAtributoReal()*C1.retornaTuAtributoImaginario()
          -
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoImaginario()
          )
          /
          (pow(C2.retornaTuAtributoReal(),2)+pow(C2.retornaTuAtributoImaginario(),2))
    );

    return C3;
}
