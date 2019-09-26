
#ifndef VECTOR_H
#define VECTOR_H
#include "tools.h"
class Vector {
public:
	short int valor[4];
	int cant = 0;
	Vector() {
		for (int i = 0; i < 4; i++) {
			valor[i] = NULL;
		}
	}
	void insertar(short int num) { //numero, posicion
		if (num <= 9 && num >= 0) {
			valor[cant] = num;
			cant++;
		}
	}
	short int getNumByPos(int pos) {
		return valor[pos];
	}
	std::string toString() {
		std::stringstream s;
		for (int i = 0; i < 4; i++) {
			s << valor[i];
		}
		return s.str();
	}
	~Vector() {}
};
#endif // !VECTOR_H