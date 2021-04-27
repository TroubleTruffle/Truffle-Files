#include <iostream>
#include "TrufMathF.h"
#include <Windows.h>
 
std::string trash;  //for temporary cin blockers
 
 
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
    case 1 :    //ease in
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
    case 2 :    //ease out
        for (int i = 0; i < text.size(); i++)
        {
            easedelay = delay * truf_sin((x * pi) / 2, 10);
            std::cout << text[i];
            x += y;
            Sleep(easedelay);
        }
        if (endline = true) { std::cout << std::endl; }
            break;
    case 3 :    //ease in out
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
 
    case 4: //ease in cubic
        for (int i = 0; i < text.size(); i++)
        {
            easedelay = delay * (x * x * x);
            x += y;
            std::cout << text[i];
            Sleep(easedelay);
        }
        if (endline = true) { std::cout << std::endl; }
        break;
    case 5: //ease out cubic
        for (int i = 0; i < text.size(); i++)
        {
            easedelay = delay * exponent(1 - x, 3);
            x += y;
            std::cout << text[i];
            Sleep(easedelay);
        }
        if (endline = true) { std::cout << std::endl; }
        break;
    case 6: //ease in out cubic
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
    DelayPrint("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor", 50, 4);
    std::cout << std::endl;
 
    std::cin >> trash;
}