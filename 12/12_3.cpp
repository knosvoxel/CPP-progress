#include <iostream>
#include <array>
#include <assert.h>

class Point3D
{
    int m_x{};
    int m_y{};
    int m_z{};
public:
    void setValues(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    void print()
    {
        std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
    }

    bool isEqual(Point3D& point)
    {
        return (m_x == point.m_x && m_y == point.m_y && m_z == point.m_z);
    }
};

class Stack
{
    std::array<int, 10> m_array{};
    int m_stackSize{};

public:
    void reset()
    {
        m_stackSize = 0;
    }

    bool push(int value)
    {
        if(m_stackSize < m_array.size()){
            m_array[m_stackSize++] = value;
            return true;
        }
        else{
            return false;
        }
    }

    int pop()
    {
        assert(m_stackSize > 0 && "Can not pop empty stack");

        return m_array[--m_stackSize];
    }

    void print()
    {
        std::cout << "( ";
        for(int i = 0; i <= m_stackSize - 1; i++)
        {
            std::cout << m_array[i] << ' ';
        }
        std::cout << ")\n";
    }
};


int main()
{
    /*Point3D point1;
    point1.setValues(1, 2, 3);

    Point3D point2;
    point2.setValues(1, 2, 3);

    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else{
        std::cout << "point1 and point2 are not equal\n";
    }

    Point3D point3;
    point3.setValues(3, 4, 5);

    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else{
        std::cout << "point1 and point3 are not equal\n";
    }*/

    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    stack.push(3);
    stack.push(5);
    stack.push(4);
    stack.print();
    
    stack.reset();
    stack.print();
    
    stack.pop();

    return 0;
}