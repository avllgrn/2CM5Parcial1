#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <iostream>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
	Complejo(void){
		this->real = 0.0;
		this->imaginario = 0.0;
		cout << "Objeto construido, this -> " << this << endl;
	};
	Complejo(double real, double imaginario){
		this->real = real;
		this->imaginario = imaginario;
		cout << "Objeto construido, this -> " << this << endl;
	};
	~Complejo(void){
		cout << "Objeto destruido, this -> " << this << endl;
	};
	void pideleAlUsuarioTusAtributos(void){
		cout<<"Dame mi real ";
		cin>>this->real;
		cout<<"Dame mi imaginario ";
		cin>>this->imaginario;
	};
	void muestraTusAtributos(void){
		cout << this->real;
		if(this->imaginario<0)
			cout << this->imaginario;
		else
			cout << "+" << this->imaginario;
		cout << "i";
	};
	double retornaTuAtributoReal(void){
		return this->real;
	};
	void modificaTuAtributoReal(double real){
		this->real = real;
	};
	double retornaTuAtributoImaginario(void){
		return this->imaginario;
	};
	void modificaTuAtributoImaginario(double imaginario){
		this->imaginario = imaginario;
	};
	void modificaTusAtributos(double real, double imaginario){
		this->real = real;
		this->imaginario = imaginario;
	};
};


#endif // COMPLEJO_H
