#ifndef PUNTO_H
#define PUNTO_H


#include <iostream>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
	Punto(void){
		this->x = 0.0;
		this->y = 0.0;
		cout << "Objeto construido, this -> " << this << endl;
	};
	Punto(double x, double y){
		this->x = x;
		this->y = y;
		cout << "Objeto construido, this -> " << this << endl;
	};
	~Punto(void){
		cout << "Objeto destruido, this -> " << this << endl;
	};
	void pideleAlUsuarioTusAtributos(void){
		cout<<"Dame mi x ";
		cin>>this->x;
		cout<<"Dame mi y ";
		cin>>this->y;
	};
	void muestraTusAtributos(void){
		cout << "(" << this->x << ", " << this->y <<")";
	};
	double retornaTuAtributoX(void){
		return this->x;
	};
	void modificaTuAtributoX(double x){
		this->x = x;
	};
	double retornaTuAtributoY(void){
		return this->y;
	};
	void modificaTuAtributoY(double y){
		this->y = y;
	};
	void modificaTusAtributos(double x, double y){
		this->x = x;
		this->y = y;
	};
};


#endif // PUNTO_H
