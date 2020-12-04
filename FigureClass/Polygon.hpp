//
//  Polygon.hpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include <stdio.h>
#include <fstream>
#include <vector>
#include "Figure.hpp"

struct Point
{
    double x, y;
};

struct Vector
{
    double x, y;
};


class Polygon : public Figure
{
private:
    Point *ptrPoints;
    unsigned size;
public:
    Polygon();
    
    double getSquare() override;
    
    double getPerimeter() override;
    
    void showFigureType() override;
};

#endif /* Polygon_hpp */
