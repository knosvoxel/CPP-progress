#include "functions.h"
#include <iostream>

int main()
{
    constexpr bool inBigClassroom{ false };
    constexpr int classSize{ inBigClassroom ? 30 : 20 };
    std::cout << "The class size is: " << classSize << '\n';

    std::cout << "Enter an integer: ";
    int value{};
    std::cin >> value;
    isEven(value) ? std::cout << value << " is even\n" : 
                    std::cout << value << " is odd\n";

    return 0;
}
