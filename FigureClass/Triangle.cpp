//
//  Triangle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Треугольник>

#include "Triangle.hpp"

Triangle::Triangle(TriangleDots p1, TriangleDots p2, TriangleDots p3)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

double Triangle::getSquare()
{
    double area;
    area = 0.5 * (p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
    return abs(area);
}

double Triangle::getPerimeter()
{
    double h1, h2, h3;
    h1 = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    h2 = sqrt((p2.x - p3.x) * (p2.x - p3.x) + (p2.y - p3.y) * (p2.y - p3.y));
    h3 = sqrt((p3.x - p1.y) * (p3.x - p1.x) + (p3.y - p1.y) * (p3.y - p1.y));
    return h1 + h2 + h3;
}

void Triangle::showFigureType()
{
    std::cout << "Треугольник" << std::endl;
}
