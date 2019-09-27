#ifndef TOOLS_H
#define TOOLS_H
#define PANTALLA_WIDTH 130
#define PANTALLA_HEIGHT 50

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <time.h>
#include <math.h>
#include <Windows.h>
#include <ctype.h>

void gotoxy(int x, int y);
void color(int color);
void pause();
void cls();
int checkInt(int min, int max);
char* checkChar(int min, int max);
void pauseCorner();
short int concatenaVector(int vec[], int t); 
short int concatenaCharVector(char vec[], int pos);
char* concatenaStringToChar(std::string s);
std::string concatenaVectorString(int vec[], int t);
std::string concatenaCharVectorString(char vec[], int pos);
#endif // !TOOLS_H

