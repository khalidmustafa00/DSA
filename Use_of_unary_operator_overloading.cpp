#include <iostream>

class Vector
{
public:
    int x, y;

    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload unary minus (-) operator
    Vector operator-() const
    {
        return Vector(-x, -y);
    }

    // Overload unary plus (+) operator
    Vector operator+() const
    {
        return *this;
    }

    // Overload logical NOT (!) operator
    bool operator!() const
    {
        return (x == 0 && y == 0);
    }

    // Overload prefix increment (++) operator
    Vector &operator++()
    {
        ++x;
        ++y;
        return *this;
    }

    // Overload prefix decrement (--) operator
    Vector &operator--()
    {
        --x;
        --y;
        return *this;
    }

    // Overload postfix increment (++) operator
    Vector operator++(int)
    {
        Vector temp = *this;
        ++(*this);
        return temp;
    }

    // Overload postfix decrement (--) operator
    Vector operator--(int)
    {
        Vector temp = *this;
        --(*this);
        return temp;
    }

    void display() const
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main()
{
    Vector v1(5, 3);
    Vector v2(0, 0);

    std::cout << "Initial v1: ";
    v1.display();

    std::cout << "Initial v2: ";
    v2.display();

    // Unary minus
    Vector v3 = -v1;
    std::cout << "Unary minus v1: ";
    v3.display();

    // Unary plus
    Vector v4 = +v1;
    std::cout << "Unary plus v1: ";
    v4.display();

    // Logical NOT
    std::cout << "Logical NOT v1: " << !v1 << "\n";
    std::cout << "Logical NOT v2: " << !v2 << "\n";

    // Prefix increment
    ++v1;
    std::cout << "Prefix increment v1: ";
    v1.display();

    // Prefix decrement
    --v1;
    std::cout << "Prefix decrement v1: ";
    v1.display();

    // Postfix increment
    v1++;
    std::cout << "Postfix increment v1: ";
    v1.display();

    // Postfix decrement
    v1--;
    std::cout << "Postfix decrement v1: ";
    v1.display();

    return 0;
}