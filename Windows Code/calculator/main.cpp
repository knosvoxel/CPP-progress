#include <iostream>

int getUserInput() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int value{ getUserInput() };
    std::cout << value;

    //getMathematicalOperation();

    //getUserInput();

    //calculateResult();

    //printResult();

    return 0;
}

