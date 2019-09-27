
#ifndef VECTOR_H
#define VECTOR_H
#include "tools.h"
class Vector {
public:
	short int valor[4];
	int cant = 0;
	int cantidadCeros = 0;
	Vector() {
		for (int i = 0; i < 4; i++) {
			valor[i] = -1;
		}
	}
	void insertar(short int num) { //numero
		valor[cant] = num;
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
		return valor[pos];
	}
	std::string toString(int n = 0) {
		std::stringstream s;
		switch (n){
		case 1:
			for (int i = 0; i < cant; i++) {
				if (valor[i] != -1){
					for (int j = 0; j < (4 - cantidadNumerosPorPosicion(valor[i])); j++) {
						s << "0";
					}
					s << valor[i];
				}
			}
			break;
		default:
			for (int i = 0; i < cant; i++) {
				if (valor[i] != -1) {
					s << "[";
					if (valor[i] != -1) {
						for (int j = 0; j < (4 - cantidadNumerosPorPosicion(valor[i])); j++) {
							s << "0";
						}
					}
					s << valor[i];
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