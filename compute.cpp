#include "compute.h"
#include <iostream>
#include <stdlib.h>
#include <stdexcept> 

using namespace std;

double compute::add(double a, double b) {
    double total = a + b;
    std::cout << "Sum: " << total << std::endl;
    return a + b;
}

double compute::subtract(double a, double b) {
    double total = a - b;
    std::cout << "Difference: " << total << std::endl;
    return a - b;
}

double compute::multiply(double a, double b) {
    double total = a * b;
    std::cout << "Product: " << total << std::endl;
    return a * b;
}

double compute::divide(double a, double b) {

    double total = a / b;
    std::cout << "Quotient: " << total << std::endl;
    return a / b;
}


