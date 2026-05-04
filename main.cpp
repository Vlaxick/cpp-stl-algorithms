#include <iostream>
#include <ctime>
#include <list>
#include <algorithm>
#include <array>
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
    displayContainer(myArray, "Array: ");
    // Сортуємо масив за довжиною імен
    std::sort(myArray.begin(), myArray.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });
    displayContainer(myArray, "Sorted by length: ");

    //Task 3
    

    return 0;
}