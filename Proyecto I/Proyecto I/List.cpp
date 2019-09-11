#include "List.h"
Node::Node(){
	this->next = nullptr;
	this->vec = nullptr;
}
Node::Node(ArrayVector* v, Node* next){
	this->next = next;
	this->vec = v;
}
Node::~Node(){
	delete vec;
}
ArrayVector* Node::getArray(){
	return vec;
}

void Node::setNext(Node* next){
	this->next = next;
}
void Node::setVec(ArrayVector* v){
	this->vec = v;
}
std::string Node::toString() {
	std::stringstream s;
	s << vec->toString();
	return s.str();
}
List::List(){
	this->first = nullptr;
	tam = 4;
	cant = 0;
}
List::List(Node* f){
	this->first = f;
	tam = 4;
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
bool List::push(ArrayVector* v){
	Node* aux;
	try {
		aux = new Node;
	}
	catch (std::bad_alloc e) {
		std::cerr << "No hay suficiente espacio en memoria"<<std::endl;
	}
	aux->vec = v;
	aux->next = nullptr;

	if (empty()) {
		first = aux;
		return true;
	}
	else {
		Node* temp = first;
		while (temp->next != nullptr) 
			temp = temp->next;
		temp->next = aux;
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

std::string List::toString(){
	std::stringstream s;
	if (empty())
		s << "Lista Vacia"<<std::endl;
	else {
		s << first->vec->toString();
	}
	return s.str();
}


