#include "ArrayVector.h"

ArrayVector::ArrayVector(){
	this->tam = 4;
	v = new int[tam];
	this->cant = 0;
	for (int i = 0; i < tam; i++)
		v[i] = 0;
}
ArrayVector::ArrayVector(int tam){
	this->tam = tam;
	v = new int[tam];
	this->cant = 0;
	for (int i = 0; i < tam; i++)
		v[i] = 0;
}
int ArrayVector::getCant() { return cant; }
int ArrayVector::getTam() { return tam; }
int ArrayVector::getIndex(int i) { return v[i]; }
bool ArrayVector::pushBack(int num){
	if (cant<tam) {
		v[cant] = num;
		cant++;
		return true;
	}
	return false;
}
bool ArrayVector::existe(int num){
	if (cant > 0) {
		for (int i = 0; i < cant; i++) {
			if (v[i] == num) {
				return true;
			}
		}
	}
	return false;
}
bool ArrayVector::pop(int index){
	for (int i = 0; i < cant; i++) {
		if (v[i] == index) {
			v[i] = 0;
			return true;
		}
	}
	return false;
}
std::string ArrayVector::toString(){
	std::stringstream s;
	for (int i = 0; i < cant; i++) {
		s << "["<<v[i]<<"]";
	}
	return s.str();
}
ArrayVector::~ArrayVector(){
	for (int i = 0; i < cant; i++)
		v[i] = NULL;
	delete[] v;
	delete v;
	tam = 0;
	cant = 0;
}
