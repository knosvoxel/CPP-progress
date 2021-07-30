#include <iostream>
#include <algorithm>
#include <cstddef>
#include <limits>
#include <string>
#include <algorithm>

void doSomething(std::nullptr_t ptr) {
    std::cout << "in doSomething()\n";
}

void valueLengths()
{
    //int value{ 7 };
    //int* ptr{ &value };

    //std::cout << ptr << '\n';
    //std::cout << ptr + 1 << '\n';
    //std::cout << ptr + 2 << '\n';
    //std::cout << ptr + 3 << '\n';

    int* ptr{ new int };
    *ptr = 7;

    int* ptr1{ new int(5) };
    int* ptr2{ new int {6} };

    delete ptr;
    delete ptr1;
    delete ptr2;
    ptr = nullptr;
    ptr1 = nullptr;
    ptr2 = nullptr;

    int* value = new (std::nothrow) int;
    //int* value2{ new(std::nothrow) int{} };
    if (!value)
    {
        std::cout << "Could not allocate memory";
    }
    //delete value2;
    //value2 = 0;
}

void dynamicArray()
{
    std::cout << "Enter a possitive integer: ";
    std::size_t length{};
    std::cin >> length;

    int fixedArray[]{ 1,2,3,4,5 };
    int* array{ new int[length] {} };
    int* array2{ new int[5]{1,2,3,4,5} };

    std::cout << "I just allocated an array of integers of length " << length << '\n';



    array[0] = 5;
    delete[] array;

}

std::size_t getNameCount()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t length{};
    std::cin >> length;

    return length;
}

void getNames(std::string* names, std::size_t length)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (std::size_t i{ 0 }; i < length; ++i)
    {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::getline(std::cin, names[i]);
    }
}

void printNames(std::string* names, std::size_t length)
{
    std::cout << "\nHere is your sorted list:\n";

    for (std::size_t i{ 0 }; i < length; ++i)
        std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
}

void quiz9_19()
{
    constexpr std::string_view names[]{ "Alex","Betty","Caroline","Dave","Emily","Fred","Greg","Holly" };

    std::cout << "Enter a name: ";
    std::string input{};
    std::getline(std::cin, input);

    for (auto name : names) {
        if (name == input)
        {
            std::cout << "The name " << input << " is part of the array.";
            return;
        }
    }

    std::cout << "The name " << input << " is not part of the array.";
}

/*void quiz9_14()
{

    std::string* names{ new std::string[length] };

    for (int i{ 0 }; i < length; ++i) {
        std::cout << "Enter name #" << i << ": ";
        std::string name{};
        std::cin >> name;
    }

    for (int y{ 0 }; y < length; ++y) {

        std::cout << names[y] << '\n';
    }
}*/
/*int* find(int* begin, int* end, int searchValue)
{
    for (int* p{ begin }; p != end; ++p)
    {
        if (*p == searchValue)
        {
            return p;
        }
    }

    return end;
}*/

int main()
{
    /*int value{5};
    int* ptr{ &value };

    float* ptr5{ 0 }; //Null value
    float* ptr2;
    ptr2 = 0;
    double* ptr3{ NULL };
    int* ptr4{ nullptr };

    int array[5]{ 9,7,5,3,1 };
    char name[]{ "Jason" };

    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << ptr4 << '\n';

    std::cout << *array;
    std::cout << *name << '\n';

    doSomething(nullptr);
    */
    //valueLengths();

    /*int arr[]{2,5,4,10,8,20,16,40};

    auto found{ std::find(std::begin(arr), std::end(arr),20) };

    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }*/

    /*std::size_t length{getNameCount()};

    auto* names{ new std::string[length]{} };

    getNames(names, length);

    std::sort(names, names + length);

    printNames(names, length);

    delete[] names;

    int x{ 0 };
    int& y{ x };
    int* z{ &x };
    */

    quiz9_19();

    return 0;
}

