#include <iostream>
#include <limits>

void compare(int x, int y) {
    if (x > y) {
        std::cout << x << " is greater than " << y << '\n';
    }
    else if (x < y) {
        std::cout << x << " is less than " << y << '\n';
    }
    else {
        std::cout << x << " is equal to " << y << '\n';
    }
    
}

void spam(int timesToPrint) {
    for (int count{ 0 }; count < timesToPrint; ++count)
        std::cout << "Spam! ";
}

void spamTest() {
    spam(0);
    spam(1);
    spam(2);
}

void ignoreLine()
{
    //clears any extraneous input from std::cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble() {
    while (true) {
        std::cout << "Enter a double value: ";
        double x{};
        std::cin >> x;

        //test for and fix failed extractions or overflow
        if (std::cin.fail()) {
            std::cin.clear();
            ignoreLine();
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
        else {
            ignoreLine();
            return x;
        }
    }
}

char getOperator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        std::cin >> operation;
        ignoreLine();

        switch (operation) {
        case '+' :
        case '-' :
        case '*' :
        case '/' :
            return operation;
        default:
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
    }
}

void printResult(double x, char operation, double y) {
    switch (operation) {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    default:
        std::cerr << "Something went wrong: printResult() got an invalid operator.\n";
    }
}


int main()
{
    /*std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another number: ";
    int y{};
    std::cin >> y;

    compare(x, y);*/
    //spamTest();
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;

    
}