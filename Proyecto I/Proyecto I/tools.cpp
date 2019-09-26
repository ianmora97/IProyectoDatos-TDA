#include "tools.h"
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
void color(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); }
void pause() { system("pause"); }
void cls() { system("cls"); }

void pauseCorner() {
	color(12); gotoxy(129, 59); std::cout << "Continuar..."; getchar(); color(15);
}