#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>


class compute
{
public:

    double add(double a, double b) {
        double total = a + b;
        std::cout << "Sum: " << total << std::endl;
        return a + b;
    }

    double subtract(double a, double b) {
        double total = a - b;
        std::cout << "Difference: " << total << std::endl;
        return a - b;
    }

    double multiply(double a, double b) {
        double total = a * b;
        std::cout << "Product: " << total << std::endl;
        return a * b;
    }

    double divide(double a, double b) {

        double total = a / b;
        std::cout << "Quotient: " << total << std::endl;
        return a / b;
    }
};

