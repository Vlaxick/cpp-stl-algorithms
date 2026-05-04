#include <iostream>
#include <ctime>
#include <list>
#include <algorithm>
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


    return 0;
}