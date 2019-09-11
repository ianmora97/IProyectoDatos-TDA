#ifndef LIST_H
#define LIST_H
#include "ArrayVector.h"

#include <iostream>
class Node {
public:
	ArrayVector* vec;
	Node* next;

	Node();
	Node(ArrayVector* v, Node* next = nullptr);
	~Node();

	ArrayVector* getArray();
	void setNext(Node* next);
	void setVec(ArrayVector* v);
	std::string toString();
};
class List {
private:
	Node* first;
public:
	int tam;
	int cant;
	List();
	List(Node* f);
	~List();
	void setFirst(Node* f);
	Node* getFirst();
	bool push(ArrayVector* v);
	bool empty();
	bool eraseList();
	std::string toString();
};

#endif // !LIST_H