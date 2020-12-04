//
//  Circle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Круг>

#include "Circle.hpp"

Circle::Circle(double r)
{
    this->radius = r;
}

double Circle::getSquare()
{
    return radius * radius * 3.14;
}

double Circle::getPerimeter()
{
    return 2 * M_PI * radius;
}

void Circle::showFigureType()
{
    std::cout << "Круг" << std::endl;
}
