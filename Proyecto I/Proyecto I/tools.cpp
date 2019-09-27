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
	color(12); gotoxy(PANTALLA_WIDTH - 23, PANTALLA_HEIGHT - 5); std::cout << "Continuar..."; getchar(); color(15);
}

short int concatenaVector(int vec[], int pos){
	short int d=0;
	std::stringstream s;
	for (int i = pos; i > pos - 4; i--) {
		s << vec[i];
	}
	s >> d;
	return d;
}
short int concatenaCharVector(char vec[], int pos) {
	short int d = 0;
	std::stringstream s;
	for (int i = pos; i > pos - 4; i--) {
		s << vec[i];
	}
	s >> d;
	return d;
}

std::string concatenaVectorString(int vec[], int pos) {
	std::stringstream s;
	for (int i = pos; i > pos - 4; i--) {
		s << vec[i];
	}
	return s.str();
}


