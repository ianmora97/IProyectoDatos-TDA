#ifndef TOOLS_H
#define TOOLS_H

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
void pauseCorner();

#endif // !TOOLS_H

