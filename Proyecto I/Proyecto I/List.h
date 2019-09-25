#ifndef LIST_H
#define LIST_H
#include "tools.h"
#include <iostream>

#define ZERO 0
#define ONE 1
struct Numero {
	short int valor;
	short int cantidadDigitos;
};

struct Node {
	/*Numero* valor[4];*/
	Node* next;
	short int cantidadDigitos;
	short int valor;
	int tam = 4, cant = 0;
	void insertar(short int v) {
		
	}
};

class List {
public:
	Node* first;
	Node* last;
	int cant;
	List();
	List(Node* f);
	~List();
	void setFirst(Node* f);
	Node* getFirst();
	bool push(short int n);
	bool empty();
	bool eraseList();
	std::string toString(int m = 0);
	int validar(short int n);
	int cantidad_ceros(int pos);
};

#endif // !LIST_H