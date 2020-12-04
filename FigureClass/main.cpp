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
    
    vector<Figure*> figs;
    
    figs.push_back(new Rectangle(30,50));
    figs.push_back(new Circle(30));
    figs.push_back(new Triangle(10,20));
    figs.push_back(new Polygon());
    
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
