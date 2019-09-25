#include "Integer.h"

Integer::Integer()
{
}

Integer::Integer(List* lista)
{
}

Integer::Integer(const Integer* copia)
{
}

bool Integer::equal(Integer* i1, Integer* i2)
{
	return false;
}

Integer* Integer::sum(Integer* i1, Integer* i2)
{
	return nullptr;
}

Integer* Integer::subtraction(Integer* i1, Integer* i2)
{
	return nullptr;
}

Integer* Integer::multiplication(Integer* i1, Integer* i2)
{
	return nullptr;
}

Integer* Integer::division(Integer* i1, Integer* i2)
{
	return nullptr;
}
//
//Integer& Integer::operator=(const Integer i1)
//{
//	// TODO: insertar una instrucción return aquí
//}

std::string Integer::toString()
{
	return std::string();
}

int Integer::parse()
{
	return 0;
}
int Integer::fact(int x, int ar[], int ar_size){
	int c = 0;
	for (int i = 0; i < ar_size; i++){
		int p = ar[i] * x + c;
		ar[i] = p % 10;
		c = p / 10;
	}

	while (c){
		ar[ar_size] = c % 10;
		c = c / 10;
		ar_size++;
	}
	return ar_size;
}

std::string Integer::factorial(int n){
	int ar[10000];
	ar[0] = 1;
	int ar_size = 1;

	for (int x = 2; x <= n; x++)
		ar_size = fact(x, ar, ar_size);
	std::stringstream s;
	for (int i = ar_size - 1; i >= 0; i--) {
		//std::cout << ar[i];
		s << ar[i];
	}
	return s.str();
	//std::cout << std::endl;
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
