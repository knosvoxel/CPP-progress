#include <iostream>
#include "constants.h"
#include <cassert>

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
    double heightNow{ initialHeight - distanceFallen };

    //check whether we've gone under the ground
    //If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight)
{
    double heightNow{ initialHeight };
    int time{ 0 };
    while (heightNow > 0){
        double newHeight{ calculateHeight(heightNow, time) };
        std::cout << " At " << time << " seconds, the ball is at height: " << newHeight << '\n';
        heightNow = newHeight;
        ++time;
    }
}

bool isPrime(int x)
{
    int divisors{ 1 };
    for (int test{ 2 }; test <= x; ++test) {
        if (x % test == 0) {
            ++divisors;
        }
        
    }
    return (divisors == 2);
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!";

    return 0;
    /*std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    calculateAndPrintHeight(initialHeight);*/
}