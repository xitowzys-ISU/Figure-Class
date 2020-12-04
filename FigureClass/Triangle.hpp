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

struct TriangleDots
{
    double x, y;
};


class Triangle : public Figure
{
private:
    TriangleDots p1, p2, p3;
    
public:
    Triangle(TriangleDots p1, TriangleDots p2, TriangleDots p3);
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};


#endif /* Triangle_hpp */
