#include <iostream>

class Vector
{
public:
    int x, y;

    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload binary plus (+) operator
    Vector operator+(const Vector &other) const
    {
        return Vector(x + other.x, y + other.y);
    }

    // Overload binary minus (-) operator
    Vector operator-(const Vector &other) const
    {
        return Vector(x - other.x, y - other.y);
    }

    // Overload binary multiplication (*) operator
    Vector operator*(int scalar) const
    {
        return Vector(x * scalar, y * scalar);
    }

    // Overload binary division (/) operator
    Vector operator/(int scalar) const
    {
        return Vector(x / scalar, y / scalar);
    }

    // Overload equality (==) operator
    bool operator==(const Vector &other) const
    {
        return (x == other.x && y == other.y);
    }

    // Overload inequality (!=) operator
    bool operator!=(const Vector &other) const
    {
        return !(*this == other);
    }

    // Overload less than (<) operator
    bool operator<(const Vector &other) const
    {
        return (x < other.x || (x == other.x && y < other.y));
    }

    // Overload greater than (>) operator
    bool operator>(const Vector &other) const
    {
        return (x > other.x || (x == other.x && y > other.y));
    }

    // Overload less than or equal to (<=) operator
    bool operator<=(const Vector &other) const
    {
        return !(other < *this);
    }

    // Overload greater than or equal to (>=) operator
    bool operator>=(const Vector &other) const
    {
        return !(*this < other);
    }

    void display() const
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main()
{
    Vector v1(5, 3);
    Vector v2(2, 7);
    Vector v3;

    std::cout << "v1: ";
    v1.display();
    std::cout << "v2: ";
    v2.display();

    // Binary addition
    v3 = v1 + v2;
    std::cout << "v1 + v2: ";
    v3.display();

    // Binary subtraction
    v3 = v1 - v2;
    std::cout << "v1 - v2: ";
    v3.display();

    // Binary multiplication
    v3 = v1 * 2;
    std::cout << "v1 * 2: ";
    v3.display();

    // Binary division
    v3 = v1 / 1;
    std::cout << "v1 / 1: ";
    v3.display();

    // Equality
    std::cout << "v1 == v2: " << (v1 == v2) << "\n";

    // Inequality
    std::cout << "v1 != v2: " << (v1 != v2) << "\n";

    // Less than
    std::cout << "v1 < v2: " << (v1 < v2) << "\n";

    // Greater than
    std::cout << "v1 > v2: " << (v1 > v2) << "\n";

    // Less than or equal to
    std::cout << "v1 <= v2: " << (v1 <= v2) << "\n";

    // Greater than or equal to
    std::cout << "v1 >= v2: " << (v1 >= v2) << "\n";

    return 0;
}