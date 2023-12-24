#include <iostream>

class Calculator {
public:
    // Function overloading for addition
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }

    // Function overloading for multiplication
    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    int multiply(int num1, int num2, int num3) {
        return num1 * num2 * num3;
    }
};

int main() {
    Calculator calc;

    // Overloaded add method
    int result_add_2 = calc.add(1, 2);
    int result_add_3 = calc.add(1, 2, 3);

    // Overloaded multiply method
    int result_multiply_2 = calc.multiply(2, 3);
    int result_multiply_3 = calc.multiply(2, 3, 4);

    // Display results
    std::cout << "Result of add(1, 2): " << result_add_2 << std::endl;
    std::cout << "Result of add(1, 2, 3): " << result_add_3 << std::endl;
    std::cout << "Result of multiply(2, 3): " << result_multiply_2 << std::endl;
    std::cout << "Result of multiply(2, 3, 4): " << result_multiply_3 << std::endl;

    return 0;
}
