#pragma once
#include "Engine Files/NewWheelAsciiEngine.h"

class TicTacToe : public Screen_Array
{
public:

	TicTacToe();
	bool Newgame(bool vid);
	bool Player();
private:
	std::string ms_AppName;

	wchar_t tictacO[7 * 6] =
	{
		32, 32, 32, 32, 32, 32, 32,
		32, 32, 'o', 'o', 'o', 32, 32,
		32, 'o', 32, 32, 32, 'o', 32,
		32, 'o', 32, 32, 32, 'o', 32,
		32, 32, 'o', 'o', 'o', 32, 32,
		32, 32, 32, 32, 32, 32, 32,
	};

	wchar_t tictacX[7 * 6] =
	{
		32, 32, 32, 32, 32, 32, 32,
		32, 'x', 32, 32, 32, 'x', 32,
		32, 32, 'x', 'x', 'x', 32, 32,
		32, 32, 'x', 'x', 'x', 32, 32,
		32, 'x', 32, 32, 32, 'x', 32,
		32, 32, 32, 32, 32, 32, 32,
	};
	int gamearray[3 * 3] = { 0 };
};