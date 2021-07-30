#include <iostream>
#include "io.h"

int readNumber() {
    std::cout << "Write an integer: ";
    int value{};
    std::cin >> value;

    return value;
}

void writeAnswer(int x) {
    std::cout << "The result is: " << x << '\n';
}