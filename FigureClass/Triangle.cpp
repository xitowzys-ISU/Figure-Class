//
//  Triangle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Треугольник>

#include "Triangle.hpp"

Triangle::Triangle(double a, double h)
{
    this-> a = a;
    this->height = h;
}

double Triangle::getSquare()
{
    return 0.5 * a * height;
}

double Triangle::getPerimeter()
{
    return 2 * sqrt((a * a) - (height * height)) + 2 * a;
}

void Triangle::showFigureType()
{
    std::cout << "Треугольник" << std::endl;
}
