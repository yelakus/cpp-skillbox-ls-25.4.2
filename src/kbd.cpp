#include <iostream>
#include <vector>
#include "kbd.h"
#include "ram.h"


extern std::vector<int> buffer;

void input()
{
    std::cout << "Enter 8 numbers for buffer:" << std::endl;

    for (int& num : buffer)
    {
        std::cin >> num;
    }
}