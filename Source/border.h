#ifndef BORDER_H
#define BORDER_H

#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

class border
{
protected:
	const int   delay = 100;
	int width = 70;
	int height = 45;
	int player1_score = 0, player2_score = 0, you_score = 0, comp_score = 0;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	border();
	~border();
	void hideConsoleCursor();
	void drawBorder();
	void endDrawBorder1();
	void endDrawBorder2();
};


#endif // !BORDER_H

