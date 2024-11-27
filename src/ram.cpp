#include <iostream>
#include <vector>
#include "ram.h"
#include "gpu.h"
#include "kbd.h"

std::vector<int> buffer(8, 0);

void write()
{
    input();
}

void read()
{
    display();
}