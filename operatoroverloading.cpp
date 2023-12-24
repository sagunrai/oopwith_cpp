#include <iostream>

class Vector {
public:
    double x, y;

    // Constructor
    Vector(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    // Overloading the + operator for vector addition
    Vector operator+(const Vector& other) const {
        Vector result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    // Display the vector
    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    // Creating two vectors
    Vector v1(2.0, 3.0);
    Vector v2(1.5, 2.5);

    // Using the overloaded + operator to add vectors
    Vector sum = v1 + v2;

    // Displaying the result
    std::cout << "Vector 1: ";
    v1.display();
    std::cout << std::endl;

    std::cout << "Vector 2: ";
    v2.display();
    std::cout << std::endl;

    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    return 0;
}
