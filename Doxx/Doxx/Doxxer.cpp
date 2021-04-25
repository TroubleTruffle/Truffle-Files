#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "Fake files.h"

//Empty space function
char get;

void space()
{
	std::cout << "" << std::endl;
}

void random_number()
{
	int test = 1000 * (rand() % (40+5));
	std::cout << test << std::endl;

}

int main()
{
	std::string ip_address;
	int ask = 0;
	char YN;
	int Looper = 0;

	std::cout << "No explicit MXCV version, autodetecting version" << std::endl;
	Sleep(500);
	space();
	std::cout << "**********************************************************************" << std::endl;
	std::cout << "** Trouble Truffle Official Doxxing Software v16.7.3" << std::endl;
	std::cout << "** Copyright (c) 2021 Trouble Truffle Institute" << std::endl;
	std::cout << "**********************************************************************" << std::endl;
	Sleep(2000);
	space();

	std::cout << "Do you want to start the Doxxing? (Y/N)" << std::endl;



	while (Looper == 0)
	{
		std::cin >> YN;
		space();

		if (YN == 'Y' || YN == 'y')
		{
			Sleep(1000);
			std::cout << "Starting Program please wait." << std::endl;
			Looper++;
		}

		else if (YN == 'N' || YN == 'n')
		{
			Sleep(1000);
			std::cout << "Understood, now closing program." << std::endl;
			Sleep(2000);
			return 0;
		}

		else
		{
			space();
			std::cout << "Invalid character" << std::endl;
			Sleep(1000);
		}
	}


	fakefile();

	
	std::cout << "Please enter your ip address" << std::endl;
	std::cin >> ip_address;
	int ip_size = size(ip_address);
	Looper = 0;
	//debugging stuff
	//std::cout << ip_address << std::endl;
	//std::cout << ip_size << std::endl;
	
	

	while (ip_size < 10)
	{
		space();
		Sleep(1000);
	
		if (ask > 4)
		{
			std::cout << "You have had 5 failed attempts, would you like instructions for how to get your address? (Y/N)" << std::endl;
			std::cin >> YN;
			space();
			Looper = 0;

			while (Looper == 0)
			{
				if (YN == 'Y' || YN == 'y')
				{

					Sleep(2000);
					space();
					std::cout << "Note that the instructions only apply to Windows machines." << std::endl;
					space();
					Sleep(2000);
					std::cout << "Do the command Win+R, a menu will open up. Type in 'cmd.exe'." << std::endl;
					Sleep(2000);
					std::cout << "Click run, command prompt will open. Type in 'ipconfig' and all your Ip information will be shown." << std::endl;
					std::cout << "Including your IPv4 Address." << std::endl;
					Sleep(5000);
					space();
					std::cout << "Please enter your ip address" << std::endl;
					std::cin >> ip_address;
					ip_size = size(ip_address);
					ask = 0;
					Looper++;
				}

				else if (YN == 'N' || YN == 'n')
				{
					ask = 0;
					Looper++;
					std::cout << "Please enter your ip address" << std::endl;
					std::cin >> ip_address;
					ip_size = size(ip_address);
				}

				else
				{
					space();
					std::cout << "Invalid character" << std::endl;
					Sleep(1000);
					std::cin >> YN;
				}
			}
		}
		else if (ip_size <= 10)
		{
			std::cout << "invalid ip address please input your IPv4 Address" << std::endl;
			std::cin >> ip_address;
			ip_size = size(ip_address);
			ask++;
		}
	}

	int Sleep_Time = 1000 * (rand() % (40 + 5));
	Looper = 0;

	while (Looper == 0)
	{
		space();
		std::cout << "are you sure you want to upload your ip address? (Y/N)" << std::endl;
		std::cin >> YN;

		if (YN == 'Y' || YN == 'y')
		{
			space();
			std::cout << "Sending IP address, this may take a while." << std::endl;
			space();
			Looper++;
		}

		else if (YN == 'N' || YN == 'n')
		{
			space();
			std::cout << "Understood, your IP address will still stored within our database." << std::endl;
			std::cout << "Although it will not be accesible except for a governing force" << std::endl;
			Looper++;
		}

		else
		{
			Sleep(1000);
			space();
			std::cout << "Invalid character" << std::endl;
			Sleep(1000);
		}
	}

	Sleep(1000);
	Looper = 0;

	while (Looper == 0)
	{
		space();
		std::cout << "The IP scanning process is complete, would you like to open trust? (Y/N)" << std::endl;
		std::cin >> YN;

		if (YN == 'Y' || YN == 'y')
		{
			space();
			std::cout << "You probably know but this program does not actually send any input you place to my system." << std::endl;
			std::cout << "It also does not install any files, the installing process was faked." << std::endl;
			std::cout << "In fact, all of the wait times here are faked." << std::endl;
			Sleep(3000);
			std::cout << "Still even though this is safe, dont download random files on the internet." << std::endl;
			Sleep(5000);
			Looper++;
		}

		else if (YN == 'N' || YN == 'n')
		{
			Looper++;
		}

		else
		{
			Sleep(1000);
			space();
			std::cout << "Invalid character" << std::endl;
			Sleep(1000);
		}
	}
	Sleep(5000);
	space();
	std::cout << "The program has finished running, input any key to close." << std::endl;
	std::cin >> get;
}