#ifndef LIST_H
#define LIST_H
#include "tools.h"
#include <iostream>

#define ZERO 0
#define ONE 1

template <class T>
class Node {
public:
	Node<T>* next;
	short int valor;
	short int cantidadDigitos;
	Node(T* v, Node<T>* next = nullptr);
	Node();
	~Node();
};
template <class T>
Node<T>::Node() {
	this->next = nullptr;
	this->vec = nullptr;
}
template <class T>
Node<T>::Node(T* v, Node<T>* next) {
	this->next = next;
	this->vec = v;
}
template <class T>
Node<T>::~Node() {
	delete vec;
}

template <class T>
class List {
public:
	Node<T>* first;
	Node<T>* last;
	int cant;

	List();
	List(Node<T>* f);//copia
	~List();

	bool push(short int n);
	bool empty();
	bool eraseList();
	std::string toString(int m = 0);
	int validar(short int n);
	int cantidad_ceros(int pos);
};
template <class T>
List<T>::List() {
	this->first = nullptr;
	this->last = nullptr;
	cant = 0;
}
template <class T>
List<T>::List(Node<T>* f) {
	this->first = f;
	cant = 0;
}
template <class T>
List<T>::~List() {
	eraseList();
}

template <class T>
int List<T>::validar(short int n) {
	int cont = 1;
	while (n / 10 > 0) {
		n = n / 10;
		cont++;
	}
	return cont;
}
template <class T>
int List<T>::cantidad_ceros(int pos) {
	if (pos < 4) {

	}
	return 0;
}
template <class T>
bool List<T>::push(short int v) {
	Node<T>* aux;
	aux = new Node;

	aux->cantidadDigitos = validar(v);
	aux->valor = v;
	aux->next = nullptr;

	if (empty()) {
		first = aux;
		last = aux;
		return true;
	}
	else {
		Node<T>* temp = first;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = aux;
		last = aux;
		return true;
	}
	cant++;
	return false;
}
template <class T>
bool List<T>::empty() {
	return (first == nullptr);
}
template <class T>
bool List<T>::eraseList() {
	Node<T>* temp;
	while (first != nullptr) {
		temp = first;
		first = first->next;
		delete temp;
		cant--;
	}
	if (empty()) {
		return true;
	}
	return false;
}
template <class T>
std::string List<T>::toString(int m) {
	std::stringstream s;

	if (empty()) {
		s << "Lista Vacia" << std::endl;
	}
	else {
		Node<T>* temp; //para recorrer la lista
		switch (m) {
		case 1:
			temp = first;
			s << "{ ";
			while (temp != nullptr) {
				s << "[";
				for (int i = 0; i < (4 - validar(temp->valor)); i++) {
					s << "0";
				}
				s << temp->valor << "], ";
				temp = temp->next;
			}
			s << " } ";
			break;

		case 2:
			temp = first;
			s << "{ ";
			while (temp != nullptr) {
				s << "[(" << temp->cantidadDigitos << ") ";
				for (int i = 0; i < (4 - validar(temp->valor)); i++) {
					s << "0";
				}
				s << temp->valor << "], ";
				temp = temp->next;
			}
			s << " } ";
			break;
		default:
			temp = first;
			while (temp != nullptr) {
				for (int i = 0; i < (4 - validar(temp->valor)); i++) {
					s << "0";
				}
				s << temp->valor;
				temp = temp->next;
			}
			break;
		}
	}
	return s.str();
}
#endif // !LIST_H