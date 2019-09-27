//main.cpp
//Autores: Sara Moraga, Ian Rodriguez y Scarleth Villarreal
//Descripcion: 

#include "Integer.h"
#define MAX 10000

char* multiply(char[], char[]);
char* division(char[], unsigned long);

int main() {

	SetConsoleTitleA("Presicion Arbitraria - Primer Proyecto de Estructuras de Datos");
	//system("mode con: cols=120 lines=50");

	//TODO

	Integer* integer = new Integer;
/*	
	Integer* a = new Integer;
	Integer* b = new Integer;
	std::cout<<"--Calculo del factorial--\n";
	int fact1;
	std::cout << "Digite el numero del factorial que desea calcular \n> "; 
	fact1 = checkInt(0, 2000);
	std::cout << a->factorial(fact1)->toString(1) << std::endl << std::endl;
	b->factorial(1000);
	std::cout << std::boolalpha << integer->equal(a,b)  <<std::endl;
	char a1[1000];
	char b1[1000];
	std::cout << "--Calculo del la multiplicacion--\n";
	std::cout << "Digite el primer numero\n> ";
	std::cin>>a1;
	std::cin.ignore();
	std::cin.clear();
	std::cout << "Digite el segundo numero\n> ";
	std::cin >> b1;
	std::cin.ignore();
	std::cin.clear();
	std::cout << "El resultado es:\n";
	std::cout << integer->multiplication(a1, b1)->toString() << std::endl;
	/*
	/*
	char a[MAX];
	char b[MAX];
	char* c;
	int la, lb;
	int i;
	printf("Enter the first number : ");
	std::cin >> a;
	printf("Enter the second number : ");
	std::cin >> b;
	c = multiply(a, b);
	std::cout << c <<std::endl;*/

	char a[MAX];
	unsigned long b;
	char* c;
	printf("Enter the divdend : ");
	std::cin >> a;
	printf("Enter the second number : ");
	std::cin >> b;
	c = division(a, b);
	printf("\nQuotient of the division : ");
	printf("%s", c);

	pause();

	//CODE

	return 0;
}

char* division(char a[], unsigned long b) {
	static char c[MAX];
	int la;
	int i, k = 0, flag = 0;
	unsigned long temp = 1, reminder;
	la = strlen(a);

	for (i = 0; i <= la; i++) {
		a[i] = a[i] - 48;
	}

	temp = a[0];
	reminder = a[0];
	for (i = 1; i <= la; i++) {
		if (b <= temp) {
			c[k++] = temp / b;
			temp = temp % b;
			reminder = temp;
			temp = temp * 10 + a[i];
			flag = 1;

		}
		else {
			reminder = temp;
			temp = temp * 10 + a[i];
			if (flag == 1)
				c[k++] = 0;
		}
	}

	for (i = 0; i < k; i++) {
		c[i] = c[i] + 48;
	}
	c[i] = '\0';

	printf("Reminder of division:  %lu  ", reminder);
	return c;
}
char* multiply(char a[], char b[]) {
	static char mul[MAX];
	char c[MAX];
	char temp[MAX];
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
	return mul;
}