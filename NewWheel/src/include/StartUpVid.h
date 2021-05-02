#pragma once
#include <iostream>
#include <chrono>
#include <thread>

unsigned char H = 219;
unsigned char line[23]{};

void anim()
{
	int speed = 400;
	for (int i = 0; i < 23; ++i)
	{
		line[i] = H;
	}

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << " X   X " << std::endl;
	std::cout << "       " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << " x   x " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << "       " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << " X   X " << std::endl;
	std::cout << "       " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << " x   x " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << " O   O " << std::endl;
	std::cout << "       " << H << "       " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << "       " << H << " X   X " << std::endl;
	std::cout << "       " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "       " << H << "       " << H << " x   x " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << " X   X " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "  Xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << "  xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << " x   x " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "  OOO  " << H << "       " << H << " X   X " << std::endl;
	std::cout << " O   O " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << " O   O " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "  OOO  " << H << "       " << H << " x   x " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << " X   X " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "  Xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << "  xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << " x   x " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "\\      " << H << "       " << H << "       " << std::endl;
	std::cout << " \\OOO  " << H << "       " << H << " X   X " << std::endl;
	std::cout << " O\\  O " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << " O \\ O " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "  OOO\\ " << H << "       " << H << " x   x " << std::endl;
	std::cout << "      \\" << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << " X   X " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << " O   O " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "  OOO  " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << " X   X " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "  Xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << "  xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << " x   x " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "\\      " << H << "       " << H << "       " << std::endl;
	std::cout << " \\OOO  " << H << "       " << H << " X   X " << std::endl;
	std::cout << " O\\  O " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout << " O \\ O " << H << "       " << H << "  xxx  " << std::endl;
	std::cout << "  OOO\\ " << H << "       " << H << " x   x " << std::endl;
	std::cout << "      \\" << H << "       " << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "\\      " << H << "       " << std::endl;
	std::cout << " X   X " << H << " \\OOO  " << H << "  OOO  " << std::endl;
	std::cout << "  Xxx  " << H << " O\\  O " << H << " O   O " << std::endl;
	std::cout << "  xxx  " << H << " O \\ O " << H << " O   O " << std::endl;
	std::cout << " x   x " << H << "  OOO\\ " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "      \\" << H << "       " << std::endl;
	std::cout << line << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl;
	std::cout << "       " << H << " X   X " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "  Xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << "  xxx  " << H << " O   O " << std::endl;
	std::cout << "       " << H << " x   x " << H << "  OOO  " << std::endl;
	std::cout << "       " << H << "       " << H << "       " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
	std::cout << "\x1B[2J\x1B[H";

	std::cout<<"\\\\      " << H << "       " << H << "       " << std::endl;
	std::cout<<" \\\\OOO  " << H << "       " << H << " X   X " << std::endl;
	std::cout<<" O\\\\  O " << H << "       " << H << "  Xxx  " << std::endl;
	std::cout<<" O \\\\ O " << H << "       " << H << "  xxx  " << std::endl;
	std::cout<<"  OOO\\\\  " << H << "       " << H << " x   x " << std::endl;
	std::cout<<"     \\\\ " << H << "       " << H << "       " << std::endl;
	std::cout<< line << std::endl;
	std::cout<< "       " << H << "\\\\      " << H << "       " << std::endl;
	std::cout<< " X   X " << H << " \\\\OOO  " << H << "  OOO  " << std::endl;
	std::cout<< "  Xxx  " << H << " O\\\\  O " << H << " O   O " << std::endl;
	std::cout<< "  xxx  " << H << " O \\\\ O " << H << " O   O " << std::endl;
	std::cout<< " x   x " << H << "  OOO\\\\  " << H << "  OOO  " << std::endl;
	std::cout<< "       " << H << "     \\\\ " << H << "       " << std::endl;
	std::cout<< line << std::endl;
	std::cout<< "       " << H << "       " << H << "\\\\      " << std::endl;
	std::cout<< "       " << H << " X   X " << H << " \\\\OOO  " << std::endl;
	std::cout<< "       " << H << "  Xxx  " << H << " O\\\\  O " << std::endl;
	std::cout<< "       " << H << "  xxx  " << H << " O \\\\ O " << std::endl;
	std::cout<< "       " << H << " x   x " << H << "  OOO\\\\ " << std::endl;
	std::cout<< "       " << H << "       " << H << "     \\\\ " << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "#################################################################################################" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "  _______   _                       _______                               _______                " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::wcout << " |__   __| (_)                     |__   __|                             |__   __|               " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::wcout << "    | |     _    ___     ______       | |      __ _    ___     ______       | |      ___     ___ " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::wcout << "    | |    | |  / __|   |______|      | |     / _` |  / __|   |______|      | |     / _ \\   / _ \\ " << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::wcout << "    | |    | | | (__                  | |    | (_| | | (__                  | |    | (_) | |  __/" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::wcout << "    |_|    |_|  \\___|                 |_|     \\__,_|  \\___|                 |_|     \\___/   \\___|" << std::endl << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "#################################################################################################" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

//
// OOO
//O   O
//O   O
// OOO
//
// 
//X   X
// Xxx
// xxx
//x   x

//	//d::cout << "  12345678     9     0123456     7     890123" << std::endl;
//std::cout << "  123456789 123456789 1234" << std::endl;
//std::cout << "01       " << H << "       " << H << "       " << std::endl;
//std::cout << "02  OOO  " << H << " X   X " << H << "       " << std::endl;
//std::cout << "03 O   O " << H << "  Xxx  " << H << "       " << std::endl;
//std::cout << "04 O   O " << H << "  xxx  " << H << "       " << std::endl;
//std::cout << "05  OOO  " << H << " x   x " << H << "       " << std::endl;
//std::cout << "06       " << H << "       " << H << "       " << std::endl;
//std::cout << "07" << line << std::endl;
//std::cout << "08       " << H << "       " << H << "       " << std::endl;
//std::cout << "09       " << H << "       " << H << " X   X " << std::endl;
//std::cout << "10       " << H << "       " << H << "  Xxx  " << std::endl;
//std::cout << "11       " << H << "       " << H << "  xxx  " << std::endl;
//std::cout << "12       " << H << "       " << H << " x   x " << std::endl;
//std::cout << "13       " << H << "       " << H << "       " << std::endl;
//std::cout << "14" << line << std::endl;
//std::cout << "15       " << H << "       " << H << "       " << std::endl;
//std::cout << "16  OOO  " << H << " X   X " << H << "       " << std::endl;
//std::cout << "17 O   O " << H << "  Xxx  " << H << "       " << std::endl;
//std::cout << "18 O   O " << H << "  xxx  " << H << "       " << std::endl;
//std::cout << "19  OOO  " << H << " x   x " << H << "       " << std::endl;
//std::cout << "20       " << H << "       " << H << "       " << std::endl << std::endl;