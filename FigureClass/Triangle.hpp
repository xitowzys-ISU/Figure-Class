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
    int x1, y1, x2, y2, x3, y3;
    
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};


#endif /* Triangle_hpp */
