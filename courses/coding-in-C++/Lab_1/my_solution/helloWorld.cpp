#include <iostream>
#include "helloWorld_header.hpp"

void printFromHeader() {
    std::cout << "Hello from .hpp!\n";
}

int main() {
    std::cout << "Hello World!\n";
    printFromHeader();
    return 0;
}