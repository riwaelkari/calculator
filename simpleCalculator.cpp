#include <iostream>
#include <limits>
using namespace std;

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    //tried to return NaN here because it makes most of sense here
    if (b==0) return std::numeric_limits<double>::quiet_NaN();
    return a / b;
}
int main(){
    double x, y;
    std::cout << "Give your first number: ";
    std::cin >> x;
    std::cout << "Give your second number: ";
    std::cin >> y;
    std::cout << x << "*" << y << " = " << multiply(x,y) << std::endl;
    std::cout << x << "/" << y << " = " << divide(x,y) << std::endl;
    return 0;
}