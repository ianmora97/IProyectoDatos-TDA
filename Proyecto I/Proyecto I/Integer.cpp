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

	if (i1->list->cant == i2->list->cant) { //si son del la misma cantidad de nodos

		Node<Vector>* aux1 = i1->list->first;	//para recorrer el integer 1
		Node<Vector>* aux2 = i2->list->first;	//para recorrer el integer 2

		int cont = 0;

		for (int i = 0; i < i1->list->cant; i++) { //nodos
			for (int j = 0; j < 4; j++) { //vector
				if (aux1->v->getNumByPos(j) == aux2->v->getNumByPos(j)) {
					cont++;
				}			
			}
			aux1 = aux1->next;
			aux2 = aux2->next;
		}
		if (cont == (i1->list->cant) * 4) {
			return true;
		}
	}
	
	return false;
}

Integer* Integer::sum(Integer* i1, Integer* i2){

	return nullptr;
}

Integer* Integer::subtraction(Integer* i1, Integer* i2){

	return nullptr;
}

Integer* Integer::multiplication(char a[], char b[]){

	static char mul[10000];
	char c[10000];
	char temp[10000];
	int la, lb;
	int i, j, k = 0, x = 0, y;
	long int r = 0;
	long sum = 0;
	la = strlen(a) - 1;
	lb = strlen(b) - 1;
	//ASCII value character '0' = 48
	for (i = 0; i <= la; i++) {
		a[i] = a[i] - 48;
	}

	for (i = 0; i <= lb; i++) {
		b[i] = b[i] - 48;
	}

	for (i = lb; i >= 0; i--) {
		r = 0;
		for (j = la; j >= 0; j--) {
			temp[k++] = (b[i] * a[j] + r) % 10;
			r = (b[i] * a[j] + r) / 10;
		}
		temp[k++] = r;
		x++;
		for (y = 0; y < x; y++) {
			temp[k++] = 0;
		}
	}

	k = 0;
	r = 0;
	for (i = 0; i < la + lb + 2; i++) {
		sum = 0;
		y = 0;
		for (j = 1; j <= lb + 1; j++) {
			if (i <= la + j) {
				sum = sum + temp[y + i];
			}
			y += j + la + 1;
		}
		c[k++] = (sum + r) % 10;
		r = (sum + r) / 10;
	}
	c[k] = r;
	j = 0;
	for (i = k - 1; i >= 0; i--) {
		mul[j++] = c[i] + 48;
	}
	mul[j] = '\0';


	int contador = 0;
	int tam1 = strlen(mul);
	int cont = 0;

	
	Vector* vector;
	List<Vector>* lista = new List<Vector>;
	for (int i = 0; i <= (tam1 / 16); i++) { //nodos
		vector = new Vector;
		if (tam1 <= 4) {
			vector->insertar(concatenaCharVector(mul, cont), concatenaCharVectorString(mul, cont).length());
			contador++;
			cont+=4;
		}
		else {
			for (int j = 0; j < ((tam1 / 4) + 1); j++) { //vector
				if (contador < 4) {
					if (mul[i] != -1) {
						vector->insertar(concatenaCharVector(mul, cont), concatenaCharVectorString(mul, cont).length());
						contador++;
						cont+=4;
					}
				}
				else {
					j = tam1 / 4;
					contador = 0;
				}
			}
		}
		lista->push(vector);
	}
	Integer* multi = new Integer;
	multi->ingresar(lista);
	multi->tam = tam1;
	return multi; 
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
		vec[i] = -1;
	}
	int tam1 = 1;
	vec[0] = 1;

	for (int x = 2; x <= n; x++)
		tam1 = fact(x, vec, tam1);

	int contador = 0;
	int cont = tam1 - 1;

	Integer* d= new Integer;
	Vector* vector;
	List<Vector>* lista = new List<Vector>;
	
	for (int i = 0; i <= (tam1 / 16); i++) { //nodos
		vector = new Vector;
		if (tam1 <= 4) {
			vector->insertar(concatenaVector(vec, cont),concatenaVectorString(vec,cont).length());
			contador++;
			cont -= 4;
		}
		else {
			for (int j = 0; j < ((tam1 / 4) + 1); j++) { //vector
				if (contador < 4) {
					if (vec[i] != -1) {
						vector->insertar(concatenaVector(vec, cont), concatenaVectorString(vec, cont).length());
						contador++;
						cont -= 4;
					}
				}
				else {
					j = tam1 / 4;
					contador = 0;
				}
			}
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
