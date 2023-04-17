#include <iostream>
#include <stdlib.h>
using namespace std;

bool esNumero(char c){
    return c>=48 && c<=57;
}
bool esMayuscula(char c){
    return c>=65 && c<=90;
}
bool esMinuscula(char c){
    return c>=97 && c<=122;
}
bool esLetra(char c){
    return esMinuscula(c) || esMayuscula(c);
}
bool esCaracterEspecial(char c){
    return !esLetra(c) && !esNumero(c);
}

int main(void){
    string Cadena, CadenaSinEspacios, CadenaInvertida;
    int i,nCadena,nInvertida;
    bool respuesta=true;

    cout<<"Ingresa tu cadena ";
    getline(cin,Cadena);
    nCadena=Cadena.size();

    for(i=0; i<nCadena; i++)
        if(!esCaracterEspecial(Cadena.at(i)))
            CadenaSinEspacios.push_back(toupper(Cadena.at(i)));

    for(i=nCadena-1; i>=0; i--)
        if(!esCaracterEspecial(Cadena.at(i)))
            CadenaInvertida.push_back(toupper(Cadena.at(i)));
    nInvertida=CadenaInvertida.length();

    for(i=0; i<nInvertida; i++)
        if(CadenaSinEspacios.at(i) != CadenaInvertida.at(i)){
            respuesta = false;
            break;
        }


    cout<<endl<<endl
        <<"Cadena: "<<Cadena<<endl
        <<"CadenaSinEspacios: "<<CadenaSinEspacios<<endl
        <<"CadenaInvertida  : "<<CadenaInvertida<<endl<<endl;

    if(respuesta)
        cout<< "Es palindromo =^)"<<endl;
    else
        cout<< "NO es palindromo =^("<<endl;

    return 0;
}

