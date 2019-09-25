#ifndef INTEGER_H
#define INTEGER_H
#include "List.h"

#define size 10000;

class Integer{
public:
	List* list;
	Integer();
	Integer(List* lista);

	Integer(const Integer* copia); //constructor de copia

	bool equal(Integer* i1, Integer* i2);

	Integer* sum(Integer* i1, Integer* i2);
	Integer* subtraction(Integer* i1, Integer* i2);
	Integer* multiplication(Integer* i1, Integer* i2);
	Integer* division(Integer* i1, Integer* i2);

	//Integer& operator=(const Integer i1);

	std::string toString();
	int parse();

	int fact(int x, int ar[], int ar_size);
	std::string factorial(int n);

	


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



