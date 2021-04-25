#include <iostream>
#include "TrufMathF.h"
#include "Functions.h"
#include <Windows.h>
#include <sysinfoapi.h>
#include <winnt.h>
#include <string>
#include <cstdlib>
std::string trash;	//for temporary cin blockers

//For character outputs with delay
void DelayPrint(std::string text, int delay, int easing = 0, bool endline = true)
{
	double x = static_cast<double>(60) / text.size();
	double y = static_cast<double>(60) / text.size();
	double easedelay = 0;
	if (easing > 3)
	{
		x = (static_cast<double>(100) / text.size()) * 0.01;
		y = (static_cast<double>(100) / text.size()) * 0.01;
		delay *= 2;
	}
	switch (easing)
	{
	case 1 :	//ease in
		for (int i = 0; i < text.size(); i++)
		{
			easedelay = delay * truf_cos((x * pi) / 2, 10);
			std::cout << text[i];
			x += y;
			if (easedelay < 0) { easedelay = 0; }
			Sleep(easedelay);
		}
		if (endline = true) {std::cout << std::endl;}
			break;
	case 2 :	//ease out
		for (int i = 0; i < text.size(); i++)
		{
			easedelay = delay * truf_sin((x * pi) / 2, 10);
			std::cout << text[i];
			x += y;
			Sleep(easedelay);
		}
		if (endline = true) { std::cout << std::endl; }
			break;
	case 3 :	//ease in out
		easedelay;
		for (int i = 0; i < text.size(); i++)
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
			std::cout << text[i];
			x += y;
			Sleep(easedelay);
		}
		if (endline = true) { std::cout << std::endl;}
			break;

	case 4:	//ease in cubic
		for (int i = 0; i < text.size(); i++)
		{
			easedelay = delay * (x * x * x);
			x += y;
			std::cout << text[i];
			Sleep(easedelay);
		}
		if (endline = true) { std::cout << std::endl; }
		break;
	case 5:	//ease out cubic
		for (int i = 0; i < text.size(); i++)
		{
			easedelay = delay * exponent(1 - x, 3);
			x += y;
			std::cout << text[i];
			Sleep(easedelay);
		}
		if (endline = true) { std::cout << std::endl; }
		break;
	case 6:	//ease in out cubic
		for (int i = 0; i < text.size(); i++)
		{
			if (x < 0.5)
			{
				easedelay = delay * (x * x * x) * 4;
				x += y;
				std::cout << text[i];
				Sleep(easedelay);
			}
			else
			{
				easedelay = delay * exponent(1 - x, 3) * 4;
				x += y;
				std::cout << text[i];
				Sleep(easedelay);
			}
		}
		if (endline = true) { std::cout << std::endl; }
		break;
	default://linear
		for (int i = 0; i < text.size(); i++)
		{
			std::cout << text[i];
			Sleep(delay);
		}
		if (endline = true) { std::cout << std::endl; }
		break;
	}
}




int main()
{
		std::cout << "initializing Program wait";
		Sleep(500);
		std::cout << ".";
		Sleep(700);
		std::cout << ".";
		Sleep(700);
		std::cout << ".    " << std::endl;
		Sleep(700);
	std::cout << "Initialization Complete" << std::endl; Sleep(700);
	std::cout << "Checking compatibility" << std::endl; Sleep(1200);
	

#ifdef _WIN32
	/*MessageBoxA(0, "Kill Flashpoint", "Do you want to kill Flashpoint?", MB_YESNOCANCEL | MB_ICONEXCLAMATION);*/
	system("systeminfo | findstr /C:\"Host Name\" /C:\"OS\" /C:\"bios version\""); Sleep(1000); printf("\n");
	std::cout << "Windows machine detected, now parsing hardware info" << std::endl; Sleep(200); printf("\n");
	SYSTEM_INFO siSysInfo;
	GetSystemInfo(&siSysInfo);
	printf("Hardware information: \n"); Sleep(1000);
	printf("  OEM ID: %u\n", siSysInfo.dwOemId); Sleep(1000);
	printf("  Number of processors: %u\n", siSysInfo.dwNumberOfProcessors); Sleep(1000);
	printf("  Page size: %u\n", siSysInfo.dwPageSize); Sleep(1000);
	printf("  Processor type: %u\n", siSysInfo.dwProcessorType); Sleep(900);
	printf("  Minimum application address: %lx\n", siSysInfo.lpMinimumApplicationAddress); Sleep(500);
	printf("  Maximum application address: %lx\n", siSysInfo.lpMaximumApplicationAddress); Sleep(1000);
	printf("  Active processor mask: %u\n", siSysInfo.dwActiveProcessorMask); Sleep(500); printf("\n");

	MessageBoxA(0, "Compatibility check complete", "Trouble Truffle Official Doxxing software", MB_OK | MB_ICONINFORMATION);
#else
	std::cout << "You are not on a windows machine, this program only works on windows computers.";
	int result = MessageBoxA(0, "OS not supported", "Sorry but this software only supports Windows", MB_OK | MB_ICONEXCLAMATION)
		if (result == IDOK)
		{
			return 0;
		}
#endif
	printf("\n"); printf("\n");
	std::cout << "Now running Doxxer2.exe" << std::endl; printf("\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63);
	DelayPrint("**********************************************************************", 100, 6);
	DelayPrint("**------------------------------------------------------------------**", 100, 6);
	DelayPrint("**--Trouble Truffle Official Doxxing Software 2nd Edition v14.8.1---**", 100, 6);
	DelayPrint("**----------Copyright (c) 2021 Trouble Truffle Institute------------**", 100, 6);
	DelayPrint("**------------------------------------------------------------------**", 100, 6);
	DelayPrint("**********************************************************************", 100, 6); printf("\n");
	DelayPrint("    Loading: [|||||||||||||||||||||||||||||||||||||||||||||] Done", 1000, 6); printf("\n");
	Sleep(500);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	int yn = MessageBoxA(0, "Would you like to start the doxxing proccess?", "Trouble Truffle Official Doxxing software", MB_YESNO | MB_ICONINFORMATION);
	switch (yn)
	{
	case IDYES:
		MessageBoxA(0, "Now starting proccess", "Trouble Truffle Official Doxxing software", MB_OK);
		break;
	default:
		MessageBoxA(0, "Now closing application", "Trouble Truffle Official Doxxing software", MB_OK);
		return 0;
		break;
	}

	std::cout << "Now getting IP info" << std::endl; Sleep(500); printf("\n");
	system("ipconfig |findstr /C:\"Wireless LAN adapter Wi-Fi:\""); Sleep(500);
	system("ipconfig |findstr /C:\"Link-local IPv6\""); Sleep(500);
	system("ipconfig |findstr /C:\"IPv4\""); Sleep(500);
	system("ipconfig |findstr /C:\"Subnet\""); Sleep(500);
	system("ipconfig |findstr /C:\"Default Gateway\""); Sleep(500); printf("\n");
	std::cout << "IP info received, now sending to the main server" << std::endl; Sleep(2000);

	reset:
	int b = MessageBoxA(0, "Doxx2.exe is requesting internet access, Allow?", "Windows Defender", MB_YESNO | MB_ICONWARNING);
	if (b == IDYES)
	{
		MessageBoxA(0, "System info sent", "Trouble Truffle Official Doxxing software", MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBoxA(0, "System info sending failed, are you sure you have an internet connection", "Trouble Truffle Official Doxxing software", MB_OK| MB_ICONERROR);
		goto reset;
	}
	std::string password, username, censor;
	printf("\n"); Sleep(500);
	std::cout << "Please input your desired profile information" << std::endl; Sleep(500);
	std::cout << "Username: ";
	std::getline(std::cin, username);; Sleep(1000);

	std::cout << "Password: ";
	std::cin.ignore();
	std::getline(std::cin, password);

	Sleep(500); printf("\n"); printf("\n");
	for (int i = 0; i != password.size(); i++)
	{
		censor += "*";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	DelayPrint("Profile Information: ", 100, 6);
	DelayPrint("Username: " + username, 900, 6);
	DelayPrint("Password: " + censor, 900, 6);
	DelayPrint("IPv4 Address: ", 700, 6, false); system("ipconfig |findstr /C:\"IPv4\""); Sleep(500);
	system("systeminfo |findstr /C:\"Time Zone\""); Sleep(500);
	system("systeminfo |findstr /C:\"System Locale\""); Sleep(500);
    system("systeminfo |findstr /C:\"Registered Owner:\""); Sleep(500);

	MessageBoxA(0, "Program has finished running, you may now close it", "Trouble Truffle Official Doxxing software", MB_OK | MB_ICONINFORMATION);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
