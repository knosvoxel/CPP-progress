#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <random>
#include <vector>

using list_type = std::vector<int>;

namespace config
{
    constexpr int multiplierMin{2};
    constexpr int multiplierMax{4};
    constexpr int maximumWrongAnswer{4};
}

int getRandomInt(int min, int max)
{
    static std::mt19937 mt{static_cast<std::mt19937::result_type>(std::time(nullptr))};

    return std::uniform_int_distribution{min, max}(mt);
}

list_type generateNumbers(int start, int count, int multiplier)
{
    list_type numbers(static_cast<list_type::size_type>(count));

    int i{start};

    for(auto& number : numbers)
    {
        number = ((i * i) * multiplier);
        ++i;
    }
    return numbers;
}

int main()
{
    return 0;
}