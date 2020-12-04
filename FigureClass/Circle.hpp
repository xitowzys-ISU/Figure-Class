//
//  Circle.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//  <Круг>

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Figure.hpp"

class Circle : public Figure
{
private:
    double radius;
    
public:
    Circle(double r);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};

#endif /* Circle_hpp */
