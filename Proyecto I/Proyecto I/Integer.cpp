//Integer.cpp
//Autores: Sara Moraga, Ian Rodriguez y Scarleth Villarreal
//Descripcion: Implementacion de clase Integer.cpp

#include "Integer.h"

Integer::Integer(){
	list = new List<Vector>;
}

Integer::Integer(List<Vector>* lista){

}

Integer::Integer(const Integer* copia){

}

bool Integer::ingresar(List<Vector>* l){
	list = l;
	return true;
}

bool Integer::equal(Integer* i1, Integer* i2){

	return false;
}

Integer* Integer::sum(Integer* i1, Integer* i2){

	return nullptr;
}

Integer* Integer::subtraction(Integer* i1, Integer* i2){

	return nullptr;
}

Integer* Integer::multiplication(Integer* i1, Integer* i2){

	return nullptr;
}

Integer* Integer::division(Integer* i1, Integer* i2){

	return nullptr;
}

//Integer& Integer::operator=(const Integer i1){
// TODO: insertar una instrucción return aquí
//}

std::string Integer::toString(int n){
	std::stringstream s;
	s << list->toString(n);
	return s.str();
}

int Integer::parse(){
	return 0;
}

Integer* Integer::factorial(int n){
	int vec[10000];
	for (int i = 0; i < 10000;i++) {
		vec[i] = NULL;
	}
	int tam1 = 1;
	vec[0] = 1;

	for (int x = 2; x <= n; x++)
		tam1 = fact(x, vec, tam1);

	int cal = (tam1 / 4) + 1;

	Integer* d= new Integer;
	Vector* vector;
	List<Vector>* lista = new List<Vector>;
	int cont = tam1;
	for (int i = 0; i < cal; i++) { //nodos
		vector = new Vector;
		for (int j = 4; j > 0; j--) { //bloques, vectores por nodo
			vector->insertar(vec[cont]);
			cont--;
		}
		lista->push(vector);
	}

	d->ingresar(lista);
	d->tam = tam1;

	return d;
}

int Integer::fact(int x, int vec[], int t) {
	int c = 0;
	for (int i = 0; i < t; i++) {
		int p = vec[i] * x + c;
		vec[i] = p % 10;
		c = p / 10;
	}

	while (c) {
		vec[t] = c % 10;
		c = c / 10;
		t++;
	}
	return t;
	return 0;
}


//--------------------funciones a implementar---------------
Integer* Integer::Fibonacci(int num)
{
	return nullptr;
}

Integer* Integer::combinaciones(int n, int k)
{
	return nullptr;
}

double Integer::espacioLibre(int b, int n){

	return 0.0;
}
////!--------------------funciones a implementar---------------

//Integer& operator+(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator-(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator*(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator/(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator+=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator-=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator*=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator/=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator==(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator<(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator>(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator<=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator>=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
//
//Integer& operator!=(const Integer i1, const Integer* i2)
//{
//	// TODO: insertar una instrucción return aquí
//}
