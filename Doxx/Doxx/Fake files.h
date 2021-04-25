#pragma once

#include <iostream>
#include <Windows.h>
#include <cstdlib>

void fakefile()
{
	char a;
	int Init = 500 * (rand() % 3);

	Sleep(1000);
	std::cout << "[vcvarsall.bat] Enviroment initialized for 'x64'" << std::endl;
	Sleep(Init);
	std::cout << "Compiler detected" << std::endl;
	Sleep(Init);
	std::cout << "Building 'Trouble Truffle Official Doxxing Software v16.7.3'" << std::endl;
	Sleep(Init);
	std::cout << "'C:/Truffle/Truffle Doxxing Software' set as default directory" << std::endl;
	Sleep(Init);
	std::cout << std::endl;
	std::cout << "Microsoft(R) Build Engine version 16.7.0 + b89cb5fde for.NET Framework" << std::endl;
	Sleep(Init);
	std::cout << "Copyright(C) Microsoft Corporation.All rights reserved." << std::endl;
	Sleep(Init);
	std::cout << std::endl;

	std::cout << "Building custom rule 'C:/Truffle/Truffle Doxxing Software/Bin" << std::endl;
	Sleep(Init);
	std::cout << "Downloading engine files" << std::endl;
	Sleep(Init);
	std::cout << "Downloading .exe file" << std::endl;
	Sleep(200);

	int percent;
	Init = 10 * (rand() % 9 + 3);
	for (percent = 0; percent < 85; percent = percent + rand() % 9 + 1)
	{
		std::cout << percent << "%" << std::endl;
		Sleep(Init);
	}

	Init = 50 * (rand() % 9 + 4);
	int rem = 0;
	while (percent + rem != 100)
	{
		if (percent + rem < 100)
		{
			std::cout << percent + rem << "%" << std::endl;
			rem = rem + rand() % 4 + 1;
			Sleep(Init);
		}

		else if (percent + rem > 100)
		{
			int over = percent + rem - 100;
			rem = rem - over;
			std::cout << percent + rem << "%" << std::endl;
			Sleep(Init);
		}
	}

	std::cout << "TDS.exe download complete" << std::endl;
	Sleep(2000);

	Init = 200 * (rand() % 9 + 5);

	std::cout << std::endl;

	std::cout << "Downloading dynamic libraries" << std::endl;
	Sleep(1000);

	Init = 10 * (rand() % 9 + 5);

	std::cout << "IPfinder.dll" << std::endl;
	Sleep(Init);
	std::cout << "Truffle.dll" << std::endl;
	Sleep(Init);
	std::cout << "Networking.dll" << std::endl;
	Sleep(Init);
	std::cout << "Ui.dll" << std::endl;
	Sleep(Init);
	std::cout << "Ui.dll failed to download" << std::endl;
	Sleep(1000);
	std::cout << "Program.dll" << std::endl;
	std::cout << std::endl;
	Sleep(Init);

	Init = 200 * (rand() % 9 + 5);

	std::cout << "All required files downloaded" << std::endl;
	Sleep(Init);
	std::cout << "Initiating C:/Truffle/Truffle Doxxing Software/Engine/Haxel/TDS.exe" << std::endl;
	Sleep(3000);
	std::cout << "Program startup complete" << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************" << std::endl;
	Sleep(1000);
	std::cout << std::endl;
}


