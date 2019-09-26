//List.h
//Autores: Sara Moraga, Ian Rodriguez y Scarleth Villarreal
//Descripcion: Declaracion de List.h como template

#ifndef LIST_H
#define LIST_H
#include "Vector.h"

#define ZERO 0
#define ONE 1

//DECLARACION CLASE NODO
template <class T>
class Node {
public:
	Node<T>* next;
	T* v;
	Node(T* v, Node<T>* next = nullptr);
	Node();
	~Node();
};

//IMPLEMETACION CLASE NODO
template <class T>
Node<T>::Node() {
	this->next = nullptr;
	this->v = nullptr;
}
template <class T>
Node<T>::Node(T* v, Node<T>* next) {
	this->next = next;
	this->v = v;
}
template <class T>
Node<T>::~Node() {
	delete v;
}



//DECLARACION CLASE LISTA
template <class T>
class List {
public:
	Node<T>* first;
	Node<T>* tail;
	int cant=0;

	List();
	List(Node<T>* f);//copia
	~List();

	Node<T>* getByPos(int pos);
	bool push(T* v);
	bool empty();
	bool eraseList();
	std::string toString(int m = 0);
	int validar(short int n);
};

//IMPLEMETACION CLASE NODO
template <class T>
List<T>::List() {
	this->first = nullptr;
	this->tail = nullptr;
	cant = 0;
}
template <class T>
List<T>::List(Node<T>* f) {
	this->first = f;
	this->tail = nullptr;
	cant = 0;
}
template <class T>
List<T>::~List() {
	eraseList();
}
template <class T>
Node<T>* List<T>::getByPos(int pos) {
	int cont = 0;
	Node<T>* temp = first;
	for (int i = 0; i < pos; i++) {
		temp = temp->next;
	}
	return temp;
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
bool List<T>::push(T* a) {
	Node<T>* aux;
	aux = new Node<T>;

	aux->v = a;
	aux->next = nullptr;

	if (empty()) {
		first = aux;
		cant++;
		return true;
	}
	else {
		Node<T>* temp = first;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = aux;
		cant++;
		return true;
	}
	

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
				//for (int i = 0; i < (4 - validar(temp->v)); i++) {
				//	s << "0";
				//}

				s << temp->v->toString() << "], ";
				temp = temp->next;
			}
			s << " } ";
			break;

		case 2:
			temp = first;
			s << "{ ";
			while (temp != nullptr) {
				s << "[(" << /*temp->cantidadDigitos<<*/  ") ";
/*				for (int i = 0; i < (4 - validar(temp->v)); i++) {
					s << "0";
				}*/
				s << temp->v->toString() << "], ";
				temp = temp->next;
			}
			s << " } ";
			break;
		default:
			temp = first;
			while (temp != nullptr) {
				s << temp->v->toString();
				temp = temp->next;
			}
			break;
		}
	}
	return s.str();
}
#endif // !LIST_H