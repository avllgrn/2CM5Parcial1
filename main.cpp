#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
    string Cadena1;

    cout << endl
         << "Cadena1: <=> " << Cadena1 << endl
         << "Cadena1.lentgh() <=> " << Cadena1.length() << endl
         << "Cadena1.size() <=> " << Cadena1.size() << endl
         << "esta vacia? " << Cadena1.empty() << endl;
    system("pause");
    system("cls");

    Cadena1.assign("Juan Perez Lopez");
    cout << endl
         << "Cadena1: <=> " << Cadena1 << endl
         << "Cadena1.lentgh() <=> " << Cadena1.length() << endl
         << "Cadena1.size() <=> " << Cadena1.size() << endl
         << "esta vacia? " << Cadena1.empty() << endl;
    system("pause");
    system("cls");

    string Copia(Cadena1);
    cout << endl
         << "Copia: <=> " << Copia << endl
         << "Copia.lentgh() <=> " << Copia.length() << endl
         << "Copia.size() <=> " << Copia.size() << endl
         << "esta vacia? " << Copia.empty() << endl;
    system("pause");
    system("cls");

    string OtraCadena("Otra cadena");
    cout << endl
         << "OtraCadena: <=> " << OtraCadena << endl
         << "OtraCadena.lentgh() <=> " << OtraCadena.length() << endl
         << "OtraCadena.size() <=> " << OtraCadena.size() << endl
         << "esta vacia? " << OtraCadena.empty() << endl;
    system("pause");
    system("cls");


    cout << endl << endl;
    cout << "Cadena1.at("<<3<<") = "<<Cadena1.at(3)<<endl;
    cout << "Cadena1.at("<<6<<") = "<<Cadena1.at(6)<<endl;
    cout << "Cadena1.at("<<9<<") = "<<Cadena1.at(9)<<endl;
    cout << "Cadena1.at("<<12<<") = "<<Cadena1.at(12)<<endl;
    cout << endl << endl;

    int i,n;
    n = Cadena1.size();
    for(i = 0; i<n; i++)
        cout << "Cadena1.at("<<i<<") = "<<Cadena1.at(i)<<endl;
    cout << endl << endl;

    for(i = n-1; i>=0; i--)
        cout << "Cadena1.at("<<i<<") = "<<Cadena1.at(i)<<endl;
    cout << endl << endl;
    system("pause");
    system("cls");


    string Cadena3;
    cout << endl
         << "Cadena3: <=> " << Cadena3 << endl
         << "Cadena3.lentgh() <=> " << Cadena3.length() << endl
         << "Cadena3.size() <=> " << Cadena3.size() << endl
         << "esta vacia? " << Cadena3.empty() << endl;

    Cadena3.append(Cadena1);
    cout << endl
         << "Cadena3: <=> " << Cadena3 << endl
         << "Cadena3.lentgh() <=> " << Cadena3.length() << endl
         << "Cadena3.size() <=> " << Cadena3.size() << endl
         << "esta vacia? " << Cadena3.empty() << endl;

    Cadena3.push_back(' ');
    Cadena3.append(OtraCadena);
    cout << endl
         << "Cadena3: <=> " << Cadena3 << endl
         << "Cadena3.lentgh() <=> " << Cadena3.length() << endl
         << "Cadena3.size() <=> " << Cadena3.size() << endl
         << "esta vacia? " << Cadena3.empty() << endl;

    system("pause");
    system("cls");
    cout << endl
         << "Cadena3: <=> " << Cadena3 << endl
         << "Cadena3.lentgh() <=> " << Cadena3.length() << endl
         << "Cadena3.size() <=> " << Cadena3.size() << endl
         << "esta vacia? " << Cadena3.empty() << endl;

    Cadena3.clear();
    cout << endl
         << "Cadena3: <=> " << Cadena3 << endl
         << "Cadena3.lentgh() <=> " << Cadena3.length() << endl
         << "Cadena3.size() <=> " << Cadena3.size() << endl
         << "esta vacia? " << Cadena3.empty() << endl;

    return 0;
}

