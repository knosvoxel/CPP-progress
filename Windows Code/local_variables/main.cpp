#include <iostream>
#include "constants.h"

const int g_x{ 3 };  //declared with 0
constexpr int g_y{};    //declared with 0
int g_z{ 1 };  //declared with 1
static int g_a{ 3 }; //internal variable
extern const int g_b{ 3 }; //external variables / accessible from everywhere
extern constexpr int g_c{ 2 }; //can't be forward declared --> useless
extern const int g_d;

//static int add(int x, int y);

void doSomething(){
    std::cout << g_x << '\n';
}

void getRadius() {
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';
}

int main()
{

    #ifdef INT_2_BYTES
    using int8_t = char;
    using int16_t = int;
    using int32_t = long;
    #else
    using int8_t = char;
    using int16_t = short;
    using int32_t = int;
    #endif
    using error_t = int;
    error_t printData();

    int hello{ 5 };
    static_cast<double>(hello); // casting an int to a double value
    /*std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    //if user did it wrong
    if (smaller > larger) {
        //swap values of smaller and larger
        std::cout << "Swapping the values";

        int temp{ smaller };
        smaller = larger;
        larger = temp;
    } // temp dies here

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';*/
    //int x = add(g_z, g_a);
    //std::cout << g_d;
    getRadius();
} // smaller and larger die here