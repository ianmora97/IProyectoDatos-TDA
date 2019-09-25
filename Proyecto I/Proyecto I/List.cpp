#include "List.h"

List::List(){
	this->first = nullptr;
	this->last = nullptr;
	cant = 0;
}
List::List(Node* f){
	this->first = f;
	cant = 0;
}
List::~List(){
	eraseList();
}
void List::setFirst(Node* f){
	this->first = f;
}
Node* List::getFirst(){
	return first;
}
int List::validar(short int n) {
	int cont = 1;
	while (n/10 > 0) {
		n = n / 10;
		cont++;
	}
	return cont;
}
int List::cantidad_ceros(int pos){
	if (pos < 4) {

	}
	return 0;
}
bool List::push(short int v){
	Node* aux;
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
		Node* temp = first;
		while (temp->next != nullptr) 
			temp = temp->next;
		temp->next = aux;
		last = aux;
		return true;
	}
	cant++;
	return false;
}
bool List::empty(){
	return (first == nullptr);
}
bool List::eraseList(){
	Node* temp;
	while(first != nullptr) {
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
std::string List::toString(int m){
	std::stringstream s;

	if (empty()) {
		s << "Lista Vacia" << std::endl;
	}
	else {
		Node* temp;
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


