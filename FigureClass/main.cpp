//
//  main.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#include <iostream>
#include <vector>
#include "Figure.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    Dots p1(10, 4);
    Dots p2(30, 7);
    Dots p3(10, 13);
    
    vector<Figure*> figs;
    figs.push_back(new Rectangle(30,50));
    figs.push_back(new Circle(30));
    figs.push_back(new Triangle(&p1, &p2, &p3));
    figs.push_back(new Polygon("/Users/xitowzys/Documents/XcodeProjects/FigureClass/FigureClass/Границы.txt"));
    
    std::cout << "Площадь прямоугольника: " << figs[0]->getSquare() << std::endl;

    std::cout << "Площадь круга: " << figs[1]->getSquare()  << std::endl;

    std::cout << "Площадь прямоугольника: " << figs[2]->getSquare()  << std::endl;

    std::cout << "Площадь полигона: " << figs[3]->getSquare() << std::endl;
    
    double sum = 0;
    
    for (int i = 0; i < figs.size(); i++) {
        sum += figs[i]->getSquare();
    }
    
    cout << "Общая площадь: " << sum << endl;
    
    return 0;
}
