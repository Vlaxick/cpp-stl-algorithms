#pragma once
#include <iostream>

template<typename T>
void displayContainer(const T& container, std::string header) {
    std::cout << header;
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

bool isOdd(int number) {
    return number % 2 != 0;
}