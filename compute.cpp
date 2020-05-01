#include "compute.h"
#include <iostream>
#include <stdlib.h>
#include <stdexcept> 

using namespace std;

double pi = 3.14159;
double area;

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

double compute::findSquareArea() {
    double side;
    cout << "Length of side: ";
    cin >> side;
    area = side * side;
    return area;
}

double compute::findCircleArea() {
    double radius;
    cout << "Radius of the circle: ";
    cin >> radius;
    area = pi * (radius * radius);
    return area;
}

double compute::findTriangleArea() {
    double side1, side2;
    cout << "Length of side 1: ";
    cin >> side1;
    cout << "Length of side 2: ";
    cin >> side2;
    area = (side1 * side2) / 2;
    return area;
}


