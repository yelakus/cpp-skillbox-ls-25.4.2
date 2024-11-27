#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "disk.h"
#include "ram.h"

extern std::vector<int> buffer;

void save()
{
    std::cout << "disk check" << std::endl;

    if (buffer.empty()) {
        std::cerr << "Error: Buffer is empty. Nothing to save." << std::endl;
        return;
    }

    std::ofstream outFile("./data.txt");

    if (!outFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return;
    }

    std::cout << "Writing to file: ";
    for (const int& num : buffer) {
        outFile << num << " ";
        std::cout << num << " ";
    }
    std::cout << std::endl;

    outFile.close();
    std::cout << "Data saved to data.txt successfully." << std::endl;
}

void load()
{
    std::ifstream inFile("./data.txt");

    if (!inFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return;
    }

    std::string line;
    buffer.clear();
    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        int num;
        while (ss >> num) {
            buffer.push_back(num);
            if (ss.peek() == ' ') ss.ignore();
        }
    }

    inFile.close();

    std::cout << "Numbers read from file:" << std::endl;
    for (const int& n : buffer) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return;
}