//
//  Rectangle.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Figure.hpp"

class Rectangle : public Figure
{
    
private:
    double width;
    double height;
    
public:
    Rectangle(double w, double h);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};

#endif /* Rectangle_hpp */
