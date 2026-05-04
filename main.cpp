#include <iostream>
#include <ctime>
#include <list>
#include <algorithm>
#include <array>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include "Tasks.h"

int main (){
    std::srand(std::time(0));
    //Task 1
    //Створюємо список з 20 випадкових чисел
    std::list<int> myList;
    for (int i = 0; i < 20; ++i) {
        myList.push_back(std::rand() % 100);
    }
    // Виводимо початковий список
    std::cout << "Original list: ";
    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    // Видаляємо всі непарні числа зі списку
    auto it = std::remove_if(myList.begin(), myList.end(), isOdd);
    myList.erase(it, myList.end());
    // Виводимо список після видалення непарних чисел
    std::cout << "List after removing odd numbers: ";
    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    //Task 2
    // Створюємо масив з 6 іменами
    std::array<std::string, 6> myArray{"Ira", "Vladyslav", "Pasha", "Oleksandr", "Yaroslav", "Demyan"};
    std::cout << "\n";
    displayContainer(myArray, "Array: ");
    // Сортуємо масив за довжиною імен
    std::sort(myArray.begin(), myArray.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });
    displayContainer(myArray, "Sorted by length: ");

    //Task 3
    // Створюємо дек з цінами
    std::deque<double> prices = {100.0, 25.0, 33.0, 49.0, 59.9};
    std::cout << "\n";
    displayContainer(prices, "Original prices: ");
    // Застосовуємо податок до кожної ціни
    std::for_each(prices.begin(), prices.end(), TaxApplier(0.20));
    displayContainer(prices, "Prices after tax: ");

    //Task 4
    std::set<int> mySet = {1, 5, 10, 15, 20, 25, 30};
    std::cout << "\n";
    displayContainer(mySet, "Original set: ");
    int count = std::count_if(mySet.begin(), mySet.end(), WithinRange(10, 25));
    std::cout << "Count of numbers within range [10, 25]: " << count << std::endl;

    //Task 5
    std::map<std::string, int> storage ={
        {"Phones", 200},
        {"Notebooks", 180},
        {"Tablets", 67},
        {"Keyboards", 69},
        {"Mouses", 167},
        {"PCs", 60}
    };
    std::cout << "\n";
    std::cout << "Storage items: " << std::endl;
    for (const auto& item : storage) {
        std::cout << "Item: " << item.first << ", Quantity: " << item.second << std::endl;
    }
    // Виводимо товари, кількість яких більша за 100
    std::cout << "\nItems with quantity greater than 100: " << std::endl;
    std::for_each(storage.begin(), storage.end(), [](const auto& item) {
        if (item.second > 100) {
            std::cout << "Item: " << item.first << ", Quantity: " << item.second << std::endl;
        }
    });

    //Task 6




    return 0;
}