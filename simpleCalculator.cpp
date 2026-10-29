#include <iostream>
#include "functions.h"

// compile using: g++-15 simpleCalculator.cpp functions.cpp -o simpleCalculator
// run using: ./simpleCalculator
int main(){
    double x, y;
    char operation;
    double result;
    std::cout << "Give your first number: ";
    std::cin >> x;
    std::cout << "Give your second number: ";
    std::cin >> y;
    std::cout << "Choose one of the operations (+, -, *, /):" << std::endl;
    std::cin >> operation;
    switch (operation) {
        case '+': result = sum(x,y); break;
        case '-': result = subtract(x,y); break;
        case '*': result = multiply(x,y); break;
        case '/': result = divide(x,y); break;
        default: std::cerr << "Invalid operation!" << std::endl;
        return 1;
    }
    std::cout << result << std::endl;

    /*std::cout << x << "*" << y << " = " << multiply(x,y) << std::endl;
    std::cout << x << "/" << y << " = " << divide(x,y) << std::endl;*/
    convert_to_b(2, 1024);
    return 0;
}