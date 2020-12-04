//
//  Triangle.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Figure.hpp"

class Triangle : public Figure
{
private:
    double a;
    double height;
    
public:
    Triangle(double a, double h);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};


#endif /* Triangle_hpp */
