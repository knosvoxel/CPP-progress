#include <iostream>
#include "PRNG.h"
#include <cstdlib>
#include <random>

enum class Color{
    black,
    red,
    blue,
    green,
    white,
    cyan,
    yellow,
    magenta,
};

enum class MonsterType {
    monster_orc,
    moster_goblin,
    monster_troll,
    monster_ogre,
    monster_skeleton,
};

void printColor(Color color)
{
    switch (color)
    {
    case Color::black:
        std::cout << "Black";
        break;
    case Color::red:
        std::cout << "Red";
        break;
    case Color::blue:
        std::cout << "Blue";
        break;
    case Color::green:
        std::cout << "Green";
        break;
    case Color::white:
        std::cout << "White";
        break;
    case Color::cyan:
        std::cout << "Cyan";
        break;
    case Color::yellow:
        std::cout << "Yellow";
        break;
    case Color::magenta:
        std::cout << "Magenta";
        break;
    default:
        std::cout << "Who knows!";
    }
}

struct Employee {
    int id{};
    int age{};
    double wage{};
};

void printInformation(Employee employee) {
    std::cout << "ID: " << employee.id << '\n';
    std::cout << "Age: " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}

struct Rectangle {
    double length{ 1.0 };
    double width{ 1.0 };
};

/*int getRandomNumber(int min, int max)
{
    static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) };
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}*/

namespace MyRandom
{
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution die{ min, max };
    return die(MyRandom::mersenne);
}

int main()
{
    /*auto paint = Color::white;
    auto house(Color::blue);
    auto apple{ Color::red };
    auto monster{ MonsterType::monster_troll };

    Employee joe{};
    joe.id = 14;
    joe.age = 32;
    joe.wage = 24.15;

    Employee frank{};
    frank.id = 15;
    frank.age = 28;
    frank.wage = 18.27;

    //printInformation(frank);

    Employee paul{ 1,40,60000.0 };
    Employee pete{ 2, 50 };

    int totalAge{ joe.age + frank.age };

    Rectangle x{};
    x.length = 2.0;*/
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    for (int count{ 1 }; count <= 100; ++count)
    {
        std::cout << getRandomNumber(1,6) << '\t';

        if (count % 5 == 0)
            std::cout << '\n';
    }

    //printRandomNumbers(100);

    return 0;
}
