//we use the guards here #ifndef ... #define ... to prevent the same header from being processed multiple times in same
//translation unit
#ifndef CALCULATOR_FUNCTIONS_H
#define CALCULATOR_FUNCTIONS_H

double sum(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void convert_to_b (int b, int x);
#endif

