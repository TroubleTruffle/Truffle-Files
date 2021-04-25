#pragma once
#include <iostream>
#include <Windows.h>
#include "TrufMathF.h"
#include <sysinfoapi.h>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>

void NextScreen(int delay = 0, int easing = 0, int skip_size = 50)
{
	double x = static_cast<double>(60) / skip_size;
	double y = static_cast<double>(60) / skip_size;
	double easedelay = 0;
	if (easing > 3)
	{
		x = (static_cast<double>(100) / skip_size) * 0.01;
		y = (static_cast<double>(100) / skip_size) * 0.01;
		delay *= 2;
	}

	switch (easing)
	{
	case 1:	//ease in
		for (int i = 0; i < skip_size; i++)
		{
			easedelay = delay * truf_cos((x * pi) / 2, 10);
			std::cout << std::endl;
			x += y;
			if (easedelay < 0) { easedelay = 0; }
			Sleep(easedelay);
		}

		break;
	case 2:	//ease out
		for (int i = 0; i < skip_size; i++)
		{
			easedelay = delay * truf_sin((x * pi) / 2, 10);
			std::cout << std::endl;
			x += y;
			Sleep(easedelay);
		}

		break;
	case 3:	//ease in out
		easedelay;
		for (int i = 0; i < skip_size; i++)
		{
			if (x <= 20)
			{
				easedelay = delay * truf_cos((x * pi) / 2, 10);
			}
			if (x > 20 && x < 40)
			{
				easedelay = x;
			}
			if (x >= 40)
			{
				easedelay = delay * truf_sin((x * pi) / 2, 10);
			}
			std::cout << std::endl;
			x += y;
			Sleep(easedelay);
		}

		break;

	case 4:	//ease in cubic
		for (int i = 0; i < skip_size; i++)
		{
			easedelay = delay * (x * x * x);
			x += y;
			std::cout << std::endl;
			Sleep(easedelay);
		}

		break;
	case 5:	//ease out cubic
		for (int i = 0; i < skip_size; i++)
		{
			easedelay = delay * exponent(1 - x, 3);
			x += y;
			std::cout << std::endl;
			Sleep(easedelay);
		}

		break;
	case 6:	//ease in out cubic
		for (int i = 0; i < skip_size; i++)
		{
			if (x < 0.5)
			{
				easedelay = delay * (x * x * x) * 4;
				x += y;
				std::cout << std::endl;
				Sleep(easedelay);
			}
			else
			{
				easedelay = delay * exponent(1 - x, 3) * 4;
				x += y;
				std::cout << std::endl;
				Sleep(easedelay);
			}
		}

		break;
	case 7: //linear
		for (int i = 0; i < skip_size; i++)
		{
			std::cout << std::endl;
			Sleep(delay);
		}

		break;

	default: //instant
		for (int i = 0; i < skip_size; i++)
		{
			printf("\n");
		}
		break;
	}
}


