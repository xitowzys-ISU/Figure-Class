//
//  Figure.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#ifndef Figure_hpp
#define Figure_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>

class Figure
{
public:
    virtual double getSquare() = 0;
    virtual double getPerimeter() = 0;
    virtual void showFigureType() = 0;
};

#endif /* Figure_hpp */
