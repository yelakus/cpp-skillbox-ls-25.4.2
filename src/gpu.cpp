#include <iostream>
#include <vector>
#include "gpu.h"
#include "ram.h"

extern std::vector<int> buffer;

void display()
{
    std::cout << "Numbers in buffer:" << std::endl;
    for (int& num : buffer)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}