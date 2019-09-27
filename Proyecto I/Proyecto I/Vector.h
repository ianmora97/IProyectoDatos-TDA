
#ifndef VECTOR_H
#define VECTOR_H
#include "tools.h"
class Numero {
public:
	short int numero = 0;
	short int cantidadDigitos = 0;
	Numero() : numero(0), cantidadDigitos(0) {}
	void ingresar(short int n) {
		numero = n;
		int cont = 1;
		while (n / 10 > 0) {
			n = n / 10;
			cont++;
		}
		cantidadDigitos = cont;
	}

	std::string toString() {
		std::stringstream s;
		s << numero;
		return s.str();
	}
};

class Vector {
public:
	Numero** valor = new Numero*[4];
	short int cant = 0;
	short int cantidadCeros = 0;
	Vector() {
		for (int i = 0; i < 4; i++) {
			valor[i] = nullptr;
		}
	}
	void insertar(short int num, short int cantDigitos) { //numero
		Numero* aux = new Numero;
		aux->numero = num;
		aux->cantidadDigitos = cantDigitos;
		valor[cant] = aux;
		cant++;
	}
	int cantidadNumerosPorPosicion(int n) {
		int cont = 1;
		while (n / 10 > 0) {
			n = n / 10;
			cont++;
		}
		return cont;
	}
	short int getNumByPos(int pos) {
		return valor[pos]->numero;
	}
	bool esNumero(int pos) {
		return (valor[pos]->numero >= 0 && valor[pos]->numero <= 9999);
	}
	std::string toString(int n = 0) {
		std::stringstream s;
		switch (n){
		case 1:
			for (int i = 0; i < cant; i++) {
				if (valor[i] != nullptr) {
					for (int j = 0; j < (4 - cantidadNumerosPorPosicion(valor[i]->numero)); j++) {
						s << "0";
					}
					if (esNumero(i)) {
						s << valor[i]->numero;
					}
				}
			}
			break;
		case 2:
			for (int i = 0; i < cant; i++) {
				if (valor[i] != nullptr) {
					s << "[";
					if (valor[i] != nullptr) {
						s << "("<<valor[i]->cantidadDigitos<<") ";
						for (int j = 0; j < (4 - cantidadNumerosPorPosicion(valor[i]->numero)); j++) {
							s << "0";
						}
					}

					if (esNumero(i)) {
						s << valor[i]->numero;
					}
					s << "]";

				}
			}
			break;
		default:
			for (int i = 0; i < cant; i++) {
				if (valor[i] != nullptr) {
					s << "[";
					if (valor[i] != nullptr) {
						for (int j = 0; j < (4 - cantidadNumerosPorPosicion(valor[i]->numero)); j++) {
							s << "0";
						}
					}
					if (esNumero(i)) {
						s << valor[i]->numero;
					}
					else {
						
					}
					s << "]";
					
				}
			}
			break;
		}
		
		return s.str();
	}
	~Vector() {}
};
#endif // !VECTOR_H