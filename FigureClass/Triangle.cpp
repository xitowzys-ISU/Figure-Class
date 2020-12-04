//
//  Triangle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Треугольник>

#include "Triangle.hpp"

Triangle::Triangle(Dots *p1, Dots *p2, Dots *p3)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

double Triangle::getSquare()
{
    double area;
    area = 0.5 * (p1->getX() * (p2->getY() - p3->getY()) + p2->getX() * (p3->getY() - p1->getY()) + p3->getX() * (p1->getY() - p2->getY()));
    return abs(area);
//    return 0;
}

double Triangle::getPerimeter()
{
    double h1, h2, h3;
    h1 = sqrt((p1->getX() - p2->getX()) * (p1->getX() - p2->getX()) + (p1->getY() - p2->getY()) * (p1->getY() - p2->getY()));
    h2 = sqrt((p2->getX() - p3->getX()) * (p2->getX() - p3->getX()) + (p2->getY() - p3->getY()) * (p2->getY() - p3->getY()));
    h3 = sqrt((p3->getX() - p1->getY()) * (p3->getX() - p1->getX()) + (p3->getY() - p1->getY()) * (p3->getY() - p1->getY()));
    return h1 + h2 + h3;
//    return 0;
}

void Triangle::showFigureType()
{
    std::cout << "Треугольник" << std::endl;
}
