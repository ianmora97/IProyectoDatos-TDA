#include "List.h"

int main() {
	SetConsoleTitleA("Presicion Arbitraria - Primer Proyecto de Estructuras de Datos");
	system("mode con: cols=110 lines=40");

	//TODO
	List* lista = new List();

	ArrayVector* vec;
	vec = new ArrayVector();
	vec->pushBack(4511);
	vec->pushBack(8745);
	vec->pushBack(9563);
	vec->pushBack(7410);
	lista->push(vec);
	vec = new ArrayVector();
	vec->pushBack(2000);
	vec->pushBack(3000);
	vec->pushBack(4000);
	vec->pushBack(5000);
	lista->push(vec);
	std::cout << lista->toString();
	pauseCorner();


	//CODE

	return 0;
}