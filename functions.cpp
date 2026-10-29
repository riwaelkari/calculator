#include <iostream>
#include <ostream>
#include <string>
#include <limits>
#include "functions.h"

double sum(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a-b;

}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    //tried to return NaN here because it makes most of sense here
    if (b==0) return std::numeric_limits<double>::quiet_NaN();
    return a / b;
}
void convert_to_b (int b, int x) {
    if (x == 0) {
        std::cout << "0b0" << std::endl;
        return;
    }
    std::string str = "";
    int x_c = x;
    std::string r = "";
    if (b==2) {
        while (x_c != 0) {
            r = std::to_string(x_c % 2);
            str = r + str;
            x_c = x_c / 2;
        }
    }
    else {
        std::cout << "Not done yet!" << std::endl;
    }
    std::cout << "0b" + str << std::endl;


}