//List.h
//Autores: Sara Moraga, Ian Rodriguez y Scarleth Villarreal
//Descripcion: Declaracion de clase Interger.h


#ifndef INTEGER_H
#define INTEGER_H
#include "List.h"

#define size 10000;

class Integer{
public:
	List<Vector>* list;
	int tam = 0;
	
	Integer();
	Integer(List<Vector>* lista);
	Integer(const Integer* copia); //constructor de copia

	bool ingresar(List<Vector>* l);

	bool equal(Integer* i1, Integer* i2);

	Integer* sum(Integer* i1, Integer* i2);
	Integer* subtraction(Integer* i1, Integer* i2);
	Integer* multiplication(char a[], char b[]);
	Integer* division(Integer* i1, Integer* i2);

	//Integer& operator=(const Integer i1);

	std::string toString(int n = 0);
	int parse();

	int fact(int x, int vec[], int t);
	Integer* factorial(int n);

	Integer* Fibonacci(int num);
	Integer* combinaciones(int n, int k);

	double espacioLibre(int b, int n); //El tamaño (número de bytes) de cada celda (b) El número de celdas en cada arreglo (n)

};
//Integer& operator+(const Integer i1, const Integer* i2);
//Integer& operator-(const Integer i1, const Integer* i2);
//Integer& operator*(const Integer i1, const Integer* i2);
//Integer& operator/(const Integer i1, const Integer* i2);
//
//Integer& operator+=(const Integer i1, const Integer* i2);
//Integer& operator-=(const Integer i1, const Integer* i2);
//Integer& operator*=(const Integer i1, const Integer* i2);
//Integer& operator/=(const Integer i1, const Integer* i2);
//
//Integer& operator==(const Integer i1, const Integer* i2);
//Integer& operator<(const Integer i1, const Integer* i2);
//Integer& operator>(const Integer i1, const Integer* i2);
//Integer& operator<=(const Integer i1, const Integer* i2);
//Integer& operator>=(const Integer i1, const Integer* i2);
//Integer& operator!=(const Integer i1, const Integer* i2);


#endif // !INTEGER_H



