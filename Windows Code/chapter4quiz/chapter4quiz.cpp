#include <iostream>

double getNumber() {
    std::cout << "Enter a double value: ";
    double value{};
    std::cin >> value;

    return value;
}

char getMathSymbol() {
    std::cout << "Enter one of the following: x, -, * or /: ";
    char symbol{};
    std::cin >> symbol;

    return symbol;
}

void printResult(double x, double y, char symbol) {
    double result{};
    switch (symbol)
    {
    case '+': std::cout << x << " + " << y << " is " << x + y << '\n'; break;
    case '-': std::cout << x << " - " << y << " is " << x - y << '\n'; break;
    case '*': std::cout << x << " * " << y << " is " << x * y << '\n'; break;
    case '/': std::cout << x << " / " << y << " is " << x / y << '\n'; break;
    default:
        break;
    }
}

int main()
{
    double a{getNumber()};
    double b{getNumber()};
    char symbol{ getMathSymbol() };
    printResult(a, b, symbol);
    
    return 0;
}
