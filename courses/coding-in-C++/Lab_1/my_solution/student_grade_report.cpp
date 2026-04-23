#include <cstdint>
#include <iostream>
#include <string>

void readStudentData(std::string name, 
    std::uint8_t homework, 
    std::uint8_t midterm, 
    std::uint8_t finalExam) 
{
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    
    std::cout << "\nHomework score: ";
    std::getline(std::cin, homework);
    
}



int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}