#include <iostream>
#include <cmath>

#include <vector>

void getSinCos(double degrees, double& sinOut, double& cosOut)
{
    constexpr double pi{3.14159265358979323846};
    double radians{degrees * pi / 180.0};
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}

void printArray(const int* array, int length)
{
    if(!array)
        return;
    for(int index{0}; index < length; ++index)
        std::cout << array[index] << ' ';
}

int sumTo(int number)
{
    int result{0};
    for(int i{0}; i < number; ++i)
        result + i;
    return result;
}

struct Employee{
    
}; 

void printEmployeeName(const Employee& employee);

std::size_t getIndexOfLargestValue(std::vector<int>* array);

const std::string& getElement(std::vector<std::string>&array, std::size_t index);

inline int min(int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    double sin{0.0};
    double cos{0.0};

    getSinCos(30.0, sin, cos);
    
    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';
    return 0;
}