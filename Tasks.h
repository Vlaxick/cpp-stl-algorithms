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

class TaxApplier {
    double taxRate;
public:
    TaxApplier(double rate) : taxRate(rate) {}
    void operator() (double& price) {
        price += price * taxRate;
    }
};

class WithinRange {
    int min, max;
    public:
    WithinRange(int minVal, int maxVal) : min(minVal), max(maxVal) {}
    bool operator() (int number) {
        return number >= min && number <= max;
    }
};