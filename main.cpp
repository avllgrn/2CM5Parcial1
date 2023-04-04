#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    string Cadena1, Cadena2;
    int i,n;
    cout<<"Ingresa tu cadena ";
    getline(cin,Cadena1);
    n=Cadena1.size();

    for(i=n-1; i>=0; i-- )
        Cadena2.push_back(Cadena1.at(i));

    cout<<endl<<endl
        <<"Cadena1: "<<Cadena1<<endl
        <<"Cadena2: "<<Cadena2<<endl;

    return 0;
}

