#include <iostream>
#include <cstdint>
#include <limits>
#include <ostream>


namespace validation {
    const uint8_t ADULT_AGE = 18;
    const uint8_t SENIOR_AGE = 65;
    const uint8_t MAXIMUM_AGE = 150;
    bool isAdult(uint8_t age);
    bool isSenior(uint8_t age);
}

bool validation::isAdult(uint8_t age) {
    return age >= ADULT_AGE;
}

bool validation::isSenior(uint8_t age) {
    return age >= SENIOR_AGE;
}


int main() {
    int user_age;
    
    // Infinite input loop:
    while (true) {
        std::cout << "Please enter your age: " << std::endl;
        if (!(std::cin >> user_age) || user_age > validation::MAXIMUM_AGE) {
            std::cout << "You did not enter a valid number. Please try again. " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::cout << "You are " << user_age << " years old. " << std::endl;

    std::cout << "That means that you are ";
    if (validation::isSenior(static_cast<uint8_t>(user_age))) {
        std::cout << "a senior citizen. ";
    } 
    else if (validation::isAdult(static_cast<uint8_t>(user_age))) {
        std::cout << "an adult. ";
    } 
    else {
        std::cout << "still a kid or teenager. ";
    }
    std::cout << std::endl;
    
    return 0;
}
/*
uint8_t could also be a char type and gets misinterpreted by std::cin. 
Another portable type would be the next bigger one, so uint16_t.
*/