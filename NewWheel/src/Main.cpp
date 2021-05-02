#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <thread>
#include <stdio.h>

#include "include/Engine Files/NewWheelAsciiEngine.h"
#include "include/TicTacToe.h"

int main()
{
	TicTacToe Game;
	Game.Newgame(1);
	Game.Player();
}