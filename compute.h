#pragma once

#include <iostream>
#include <sstream>
#include <string>


class compute
{
public:

    double add(double a, double b) {
        double total = a + b;
        std::cout << "Sum: " << total;
        return a + b;
    }

    double subtract(double a, double b) {
        double total = a - b;
        std::cout << "Difference: " << total;
        return a - b;
    }

    double multiply(double a, double b) {
        double total = a * b;
        std::cout << "Product: " << total;
        return a * b;
    }

    double divide(double a, double b) {
        double total = a * b;
        std::cout << "Quotient: " << total;
        return a / b;
    }
};

