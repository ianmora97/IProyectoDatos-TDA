#ifndef ARRAYVECTOR_H
#define ARRAYVECTOR_H
#include <string>
#include <sstream>
class ArrayVector {
private:
	int **v;
	int cant;
	int tam;
public:
	ArrayVector();
	ArrayVector(int tam);
	int getCant();
	int getTam();
	int* getIndex(int i);
	bool pushBack(int num);
	bool pop(int index);
	bool existe(int num);
	std::string toString();
	~ArrayVector();
};
#endif // !ARRAYVECTOR_H



