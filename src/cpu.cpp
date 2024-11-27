#include <iostream>
#include <vector>
#include "cpu.h"
#include "ram.h"

extern std::vector<int> buffer;

void sum()
{
    int sum = 0;

    for (int& num : buffer)
    {
        sum+= num;
    }

    std::cout << "Sum: " << sum << std::endl;
}
