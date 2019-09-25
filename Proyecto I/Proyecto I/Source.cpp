#include "Integer.h"

int stringtoint(std::string s);


int main() {
	SetConsoleTitleA("Presicion Arbitraria - Primer Proyecto de Estructuras de Datos");
	system("mode con: cols=110 lines=40");

	//TODO
	/*List* lista = new List();
	
	lista->push(1252);
	lista->push(4511);
	lista->push(7485);
	lista->push(4520);
	lista->push(1001);
	std::cout << lista->toString(1);*/
	Integer* integer = new Integer;
	std::string fact = integer->factorial(100);
	std::cout << fact;
	pauseCorner();

	//CODE

	return 0;
}

int stringtoint(std::string s){
	std::stringstream a;
	int num;
	a << s;
	a >> num;
	return num;
}
