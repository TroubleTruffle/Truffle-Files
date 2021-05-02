#pragma once
#include <iostream>
#include "TicTacToe.h"
#include "StartUpVid.h"

TicTacToe::TicTacToe()
{
	ms_AppName = "TicTacToe";
}

bool TicTacToe::Newgame(bool vid = true)
{
	if(vid == true)
		anim();


	fillArray(32);

	std::cout << "Instructions:" << std::endl;
	std::cout << "Press WASD to move" << std::endl;
	std::cout << "Press Z to confirm your move" << std::endl << std::endl;

	std::cout << " ____________________" << std::endl;
	std::cout << "/--------------------\\" << std::endl;
	std::cout << "|press enter to start|" << std::endl;
	std::cout << "\\--------------------/" << std::endl;
	std::cin.get();
	std::cout << std::flush;
	std::cout << "\x1B[2J\x1B[H";
	return 1;
}

bool TicTacToe::Player()
{
	Screen_Array Layer1;
	Layer1.char_DrawOnArray(7, 0, 1, 20, 219);
	Layer1.char_DrawOnArray(0, 6, 23, 1, 219);
	Layer1.char_DrawOnArray(15, 0, 1, 20, 219);
	Layer1.char_DrawOnArray(0, 13, 23, 1, 219);
	Screen_Array Layer2;
	Layer2.fillArray(32);
	Layer2.char_DrawOnArray(7, 0, 1, 20, 219);
	Layer2.char_DrawOnArray(0, 6, 23, 1, 219);
	Layer2.char_DrawOnArray(15, 0, 1, 20, 219);
	Layer2.char_DrawOnArray(0, 13, 23, 1, 219);

	for (int i = 0; i < 9; i++)
	{
		gamearray[i] = 0;
	}

	int turn = 0;
	int winstate = 1;
	for (;;)
	{

		std::string PlayerName = (turn == 0) ? "Player 1" : "Player 2";
		int x(0); int y(0); int gx(0); int gy(0);
		int animframe(0);
		while (GetAsyncKeyState(0x5A) == 0)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(200));
			std::cout << "\x1B[2J\x1B[H";
			std::cout << PlayerName << std::endl;
			if (GetAsyncKeyState(0x57) && y != 0) // w
			{
				Layer1.char_DrawOnArray(x, y, 7, 6, 32);
				y -= 7;
				gy -= 1;

			}
			if (GetAsyncKeyState(0x41) && x != 0) // a
			{
				Layer1.char_DrawOnArray(x, y, 7, 6, 32);
				x -= 8;
				gx -= 1;
			}

			if (GetAsyncKeyState(0x53) && y != 14) // s
			{
				Layer1.char_DrawOnArray(x, y, 7, 6, 32);
				y += 7;
				gy += 1;
			}

			if (GetAsyncKeyState(0x44) && x != 16) // d
			{
				Layer1.char_DrawOnArray(x, y, 7, 6, 32);
				x += 8;
				gx += 1;
			}
			for (int i = 0; i < m_screenheight * m_screenwidth; i++)
			{
				Layer1.screenArray[i] = Layer2.screenArray[i];
			}

			if (animframe > 2)
			{
				Layer1.char_DrawOnArray(x, y, 7, 6, ':');

			} else Layer1.char_DrawOnArray(x, y, 7, 6, 32);
			if (animframe > 6) { animframe = 0; }

			Layer1.char_DrawTextureOnArray(x, y, 7, 6, turn ? tictacX : tictacO);
			Layer1.print_Array();
			animframe++;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(500));

		if (gamearray[(gy * 3) + gx] == 0)
		{
			winstate++;
			std::cout << "\x1B[2J\x1B[H";
			std::cout << PlayerName << std::endl;
			Layer2.char_DrawOnArray(x, y, 7, 6, 32);
			Layer2.char_DrawTextureOnArray(x, y, 7, 6, turn ? tictacX : tictacO);
			Layer2.print_Array();
			gamearray[(gy * 3) + gx] = turn ? 4 : 1;
			turn++;
		}else
		{ 
			std::cout << "invalid move" << std::endl; std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
		}

		if (turn == 2)
		{ turn = 0; }

		int win = 0; int gamewidth = 3; int gameheight = 3;
		for (int i = 0; i < gamewidth + gameheight; i++)
		{
			int g_x = 0; int g_y = 0; int g_d = 0; int output; int output2; int output3;
			output = 0; output2 = 0; output3 = 0;
			while (g_x < gameheight) //collumn calculation
			{
				output += gamearray[i + (g_x * gameheight)];
				g_x++;
			}
			while (g_y < gamewidth) //row calculation
			{
				output2 += gamearray[(i * gamewidth) + g_y];
				g_y++;
			}

			if (gamewidth == gameheight && i == 0 || i == gamewidth - 1)
			{
				while (g_d < gamewidth)
				{
					if (i == 0)
					{
						output3 += gamearray[(gamewidth + 1) * g_d];
						g_d++;
					}
					else
					{
						output3 += gamearray[(gamewidth - 1) * g_d];
						g_d++;
					}
				}
			}
			if (output == gamewidth || output2 == gameheight || output3 == gameheight)
			{
				std::cout << "player 1 win" << std::endl;
				std::this_thread::sleep_for(std::chrono::milliseconds(2000));
				return 1;
			}
			else if (output == 4 * gamewidth || output2 == 4 * gameheight || output3 == gameheight)
			{
				std::cout << "player 2 win" << std::endl;
				std::this_thread::sleep_for(std::chrono::milliseconds(2000));
				return 1;
			}
		}

		//int output = 0, output1 = 0, output2 = 0, output3 = 0;
		//output3 = gamearray[(0 * 3) + 2] + gamearray[(1 * 3) + 1] + gamearray[(2 * 3) + 0];

		//for (int i = 0; i < 3; i++)
		//{
		//	gx = 0; gy = 0;
		//	while (gx < 3)
		//	{
		//		output += gamearray[i + (gx * 3)];
		//		gx++;
		//	}
		//	while (gy < 3)
		//	{
		//		output1 += gamearray[(i * 3) + gy];
		//		gy++;
		//	}
		//	output2 += gamearray[(i * 3) + i];

		//	//std::cout << output << output1 << output2 << output3 << std::endl;;
		//	//std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		//	if (12 == output || 12 == output1 || 12 == output2 || 12 == output3)
		//	{
		//		std::cout << "Player 2 Wins" << std::endl;
		//		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		//		return 1;
		//	}

		//	if (3 == output || 3 == output1 || 3 == output2 || 3 == output3)
		//	{
		//		std::cout << "Player 1 Wins" << std::endl;
		//		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		//		return 1;
		//	}
		//}

		if(winstate > 8)
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "TIE" << std::endl;
			for (int i = 0; i < m_screenheight * m_screenwidth; i++)
			{
				screenArray[i] = 32;
				Layer1.screenArray[i] = 32;
				Layer2.screenArray[i] = 32;
			}
			for (int i = 0; i < 9; i++)
			{
				gamearray[i] = 0;
			}
			Layer1.char_DrawOnArray(7, 0, 1, 20, 219);
			Layer1.char_DrawOnArray(0, 6, 23, 1, 219);
			Layer1.char_DrawOnArray(15, 0, 1, 20, 219);
			Layer1.char_DrawOnArray(0, 13, 23, 1, 219);
			Layer2.char_DrawOnArray(7, 0, 1, 20, 219);
			Layer2.char_DrawOnArray(0, 6, 23, 1, 219);
			Layer2.char_DrawOnArray(15, 0, 1, 20, 219);
			Layer2.char_DrawOnArray(0, 13, 23, 1, 219);
			winstate = 0;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}


}





