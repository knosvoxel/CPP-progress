#include <iostream>

class IntPair
{
public:
    int x_m{};
    int y_m{};

    void set(int x, int y)
    {
        x_m = x;
        y_m = y;
    }

    void print()
    {
        std::cout << "Pair(" << x_m << ", " << y_m << ")\n";
    }
};

int main()
{
    IntPair p1;
    p1.set(1, 1);
    
    IntPair p2 {2, 2};

    p1.print();
    p2.print();

    return 0;
}