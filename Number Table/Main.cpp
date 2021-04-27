#include <iostream>
#include <vector>
#include <string>
int main()
{
    const int screen_X = 27;
    const int screen_Y = 17;
    wchar_t *screensize = new wchar_t[screen_X * screen_Y];
    int b[screen_X * screen_Y];
    //for (int i = 0; i <= screen_X * screen_Y; i++)
    //{
    //    screensize[i] = i;
    //}
    int length = sizeof(b) / sizeof(int);
    std::cout << length << std::endl;
    int n = length;

    int count = 0;
    while (n != 0) 
    {
        n /= 10;
        count++;
    }
    int a = 1;
    for (int i = 0; i < length; i++)
    {
        int count2 = 0; int x = 0;
        std::string out;
        std::string output = std::to_string(i);
        int ia = i; 
        do
        {       
          ia /= 10;
          count2++;       
        } while (ia != 0);
       
        while(x < count - count2)
        {
            out += " ";
            x++;
        }
        output += out;

        if (a < screen_X)
        {
            std::cout << output << " "; a++;
        }
        else
        {
            std::cout << output << std::endl;
            a = 1;
        }
    }
}