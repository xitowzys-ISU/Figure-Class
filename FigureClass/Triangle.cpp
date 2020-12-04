//
//  Triangle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Треугольник>

#include "Triangle.hpp"

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
}

double Triangle::getSquare()
{
    double area;
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return abs(area);
}

double Triangle::getPerimeter()
{
    double p1, p2, p3;
    p1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    p2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    p3 = sqrt((x3 - y1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return p1 + p2 + p3;
}

void Triangle::showFigureType()
{
    std::cout << "Треугольник" << std::endl;
}
