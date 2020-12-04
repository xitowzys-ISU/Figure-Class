//
//  Rectangle.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Прямоугольник>

#include "Rectangle.hpp"

Rectangle::Rectangle(double w, double h)
{
    this->width = w;
    this->height = h;
}

double Rectangle::getSquare()
{
    return width * height;
}

double Rectangle::getPerimeter()
{
    return width * 2 + height * 2;
}

void Rectangle::showFigureType()
{
    std::cout << "Прямоугольник" << std::endl;
}
