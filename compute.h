#define COMPUTE_H

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>




class compute
{
public:

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double findSquareArea();
    double findCircleArea();
    double findTriangleArea();

};

