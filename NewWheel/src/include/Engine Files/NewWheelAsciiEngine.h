#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <windows.h>
static const wchar_t	halftone[] = L"░▒▓█";
static const char		gradient[] = ".,-~:;=!*#$@";

class tools
{
public:
	int digitCount(int n)
	{
		int count = 0;
		n = abs(n);
		do
		{
			n /= 10;
			count++;
		} while (n != 0);
		return count;
	}
	std::vector<int> PerlinNoise1DArray(int scale, int seed, int range = 100)
	{
		std::vector<int>perlin;
		srand(seed);
		for (int i = 0; i < range; i++)
		{
			int random = rand() % 12;
			int random2 = rand() % 12;
			double out = abs(random - random2);
			out /= scale;
			double out2 = out;
			perlin.push_back(random);
			for (out; out != abs(random - random2); out += out2)
			{
				perlin.push_back(int(out));
				//return int(out);
			}
			perlin.push_back(random2);
		}
		return perlin;
	}
};

class Screen_Array
{
public:
	int	m_screenheight = 20;
	int	m_screenwidth = 23;
	wchar_t* screenArray;

	Screen_Array()
		:m_screenwidth(24), m_screenheight(20)
	{
		screenArray = new wchar_t[20 * 24];
	}

	Screen_Array(int x, int y)
	{
		m_screenwidth = x;
		m_screenheight = y;

		screenArray = new wchar_t[m_screenwidth * m_screenheight];
	}

	int return_Coord(int x, int y)
	{
		return (x * m_screenwidth) + y;
	}

	void char_DrawOnArray(int originX, int originY, int drawWidth, int drawHeight, wchar_t character)
	{
		for (int i = 0; i < drawHeight; i++)
		{
			for (int c = 0; c < drawWidth; c++)
			{
				screenArray[(originY * m_screenwidth) + originX] = character;
				originX++;
			}
			originX -= drawWidth;
			originY++;
		}
	}
	void print_Array()
	{
		for (int i = 0; i < m_screenwidth * m_screenheight; i++)
		{
			if ((i + 1) % m_screenwidth == 0)
			{
				std::cout << std::endl;
			}
			else putchar(screenArray[i]);
		}

	}
	void print_Numbertable()
	{
		int count = 0; int n = m_screenwidth * m_screenheight;
		do
		{
			n /= 10;
			count++;
		} while (n != 0);

		for (int i = 0; i < m_screenwidth * m_screenheight; i++)
		{
			std::string output = std::to_string(i);
			int count2 = 0;
			int in = i;
			do
			{
				in /= 10;
				count2++;
			} while (in != 0);
			for (int x = 0; x < count - count2; x++)
			{
				output += " ";
			}

			if ((i + 1) % m_screenwidth == 0)
			{
				std::cout << std::endl;
			}
			else std::cout << output << " ";
		}
	}
	void char_drawCircleOnArray(int OriginX, int OriginY, int radius, wchar_t character, int thicknessX = 1, int thicknessY = 1)
	{
		int x = radius; int y = 0;

		char_DrawOnArray(OriginX + x, OriginY + y, thicknessX, thicknessY, character);

		if (radius > 0)
		{
			char_DrawOnArray(OriginX - x, OriginY + -y, thicknessX, thicknessY, character);
			char_DrawOnArray(OriginX + y, OriginY + x, thicknessX, thicknessY, character);
			char_DrawOnArray(OriginX + -y, OriginY - x, thicknessX, thicknessY, character);
		}
		int perimeter = 1 - radius;
		while (x > y)
		{
			y++;
			if (perimeter <= 0)
			{
				perimeter += (2 * y) + 1;
			}
			else
			{
				x--;
				perimeter += ((2 * y) - (2 * x)) + 1;
			}
			if (x < y) break;
			char_DrawOnArray(OriginX + x, OriginY + y, thicknessX, thicknessY, character);
			char_DrawOnArray(OriginX - x, OriginY + y, thicknessX, thicknessY, character);
			char_DrawOnArray(OriginX + x, OriginY - y, thicknessX, thicknessY, character);
			char_DrawOnArray(OriginX - x, OriginY - y, thicknessX, thicknessY, character);

			if (x != y)
			{
				char_DrawOnArray(OriginX + y, OriginY + x, thicknessX, thicknessY, character);
				char_DrawOnArray(OriginX - y, OriginY + x, thicknessX, thicknessY, character);
				char_DrawOnArray(OriginX + y, OriginY - x, thicknessX, thicknessY, character);
				char_DrawOnArray(OriginX - y, OriginY - x, thicknessX, thicknessY, character);
			}
		}
	}
	void fillArray(wchar_t character)
	{
		for (int i = 0; i < m_screenheight * m_screenwidth; i++)
		{
			screenArray[i] = character;
		}
	}
	void char_drawLinearGradientOnArray(int originX, int originY, int drawWidth, int drawHeight, int orientation = 1)
	{
		double GradientStepY = 10.0f / drawHeight; double GstepPlusY = GradientStepY;
		double GradientStepX = 11.0f / drawWidth; double GstepPlusX = GradientStepX;
		if (orientation == 2) { GradientStepY = 9.0f; }
		for (int i = 0; i < drawHeight; i++)
		{
			if (orientation == 3) { GradientStepX = GstepPlusX; }
			if (orientation == 4) { GradientStepX = 10.0f; }
			for (int c = 0; c < drawWidth; c++)
			{
				if (orientation <= 2)
				{
					screenArray[(originY * m_screenwidth) + originX] = gradient[int(GradientStepY)];
				}
				screenArray[(originY * m_screenwidth) + originX] = gradient[int(GradientStepY)];
				if (orientation >= 3)
				{
					screenArray[(originY * m_screenwidth) + originX] = gradient[int(GradientStepX)];
				}
				originX++;
				if (orientation == 3) { GradientStepX += GstepPlusX; }
				if (orientation == 4) { GradientStepX -= GstepPlusX; }
			}
			originX -= drawWidth;
			originY++;
			if (orientation == 1) { GradientStepY += GstepPlusY; }
			if (orientation == 2) { GradientStepY -= GstepPlusY; }
		}
	}
	void char_DrawRadialGradientOnArray(int OriginX, int OriginY, int radius, bool inner = 1)
	{
		double GradientStep = 10.0f / radius; double GstepPlus = GradientStep;
		if (inner == 0) { GradientStep = 9.0f; }
		for (radius; radius != 0; radius--)
		{
			char_drawCircleOnArray(OriginX, OriginY, radius, gradient[int(GradientStep)]);
			if (inner) { GradientStep += GstepPlus; }
			else { GradientStep -= GstepPlus; }
		}
	}
	void char_DrawNoiseOnArray(int originX, int originY, int drawWidth, int drawHeight, int seed = 0)
	{
		srand(seed);
		for (int i = 0; i < drawHeight; i++)
		{
			for (int c = 0; c < drawWidth; c++)
			{
				screenArray[(originY * m_screenwidth) + originX] = gradient[rand() % 12];
				originX++;
			}
			originX -= drawWidth;
			originY++;
		}
	}

	void char_DrawSmoothNoiseOnArray(int originX, int originY, int drawWidth, int drawHeight, int scale, int seed = 0)
	{
		srand(seed);
	}

	void char_DrawSquareOnArray(int OriginX, int OriginY, int radius, wchar_t character, int thicknessX = 1, int ThicknessY = 1)
	{
		int x = radius; int y = radius * 2;
		char_DrawOnArray(OriginX - x, OriginY - y + radius, radius * 2, ThicknessY, character);
		char_DrawOnArray(OriginX - x, OriginY + radius,thicknessX + radius * 2, ThicknessY, character);
		for (y; y != 0; y--)
		{
			char_DrawOnArray(OriginX - x, OriginY - y + radius, thicknessX ,ThicknessY , character);
			char_DrawOnArray(OriginX + x, OriginY - y + radius, thicknessX, ThicknessY, character);
		}
	}

	void char_DrawTextureOnArray(int originX, int originY, int drawWidth, int drawHeight, wchar_t character[])
	{
		for (int i = 0; i < drawHeight; i++)
		{
			for (int c = 0; c < drawWidth; c++)
			{
				if (character[(i * drawWidth) + c] != 32)
				{
					screenArray[(originY * m_screenwidth) + originX] = character[(i * drawWidth) + c];
				}

				originX++;
			}
			originX -= drawWidth;
			originY++;
		}
	}

	~Screen_Array()
	{
		delete[] screenArray;
	}
};

class Keyboard_Input
{

};