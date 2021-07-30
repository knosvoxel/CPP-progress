#include "add.h"
#include "square.h"
#include <iostream>

#define NAME

int doubleNumber(int x);

int getInteger();

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) {
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int multiply(int x, int y) {
    return x * y;
}

void printValues(int x, int y) {
    std::cout << x << '\n';
    std::cout << y << '\n';
}
int main()
{
  
    #if 0
    std::cout << doubleNumber(getValueFromUser()) << '\n';
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    #endif
    
    #if 0
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    #endif
   
    std::cout << "a square has " << getSquareSides() << " sides\n";
    std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';
    return 0;
}


int doubleNumber(int x) {
    return x * 2;
}

