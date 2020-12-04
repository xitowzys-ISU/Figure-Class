//
//  Triangle.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Dots.hpp"
#include "Figure.hpp"

class Triangle : public Figure
{
private:
    Dots* p1;
    Dots* p2;
    Dots* p3;
    
public:
    Triangle(Dots *p1, Dots *p2, Dots *p3);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};


#endif /* Triangle_hpp */
