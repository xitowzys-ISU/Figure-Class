//
//  Polygon.cpp
//  FigureClass
//
//  Created by xitowzys on 27.11.2020.
//

#include "Polygon.hpp"

Polygon::Polygon()
{
    using namespace std;
    
    ifstream in;
    in.open("/Users/xitowzys/Documents/XcodeProjects/FigureClass/FigureClass/Границы.txt", ios::binary);
    char buff[100];
    
    if (in.is_open())
    {
        in >> buff;
        size = atoi(buff) + 2;
        
        ptrPoints = new Point[size];
        
        for (unsigned int i = 0; i < size; i++) {
            Point point;
            
            in >> buff;
            point.x = atof(buff);
            in >> buff;
            point.y = atof(buff);
            
            ptrPoints[i] = point;
        }
    }
    else
        cout << "Файл неудалось открыть" << endl;
    
    in.close();
    
}

Polygon::Polygon(char filePath[])
{
    using namespace std;
    
    ifstream in;
    in.open(filePath, ios::binary);
    char buff[100];
    
    if (in.is_open())
    {
        in >> buff;
        size = atoi(buff) + 2;
        
        ptrPoints = new Point[size];
        
        for (unsigned int i = 0; i < size; i++) {
            Point point;
            
            in >> buff;
            point.x = atof(buff);
            in >> buff;
            point.y = atof(buff);
            
            ptrPoints[i] = point;
        }
    }
    else
        cout << "Файл неудалось открыть" << endl;
    
    in.close();
    
}

double Polygon::getSquare()
{
    Vector a, b;
    double sum = 0;
    
    for(unsigned int i = 0; i < size - 1; i++)
    {
        a.x = ptrPoints[i].x - ptrPoints[0].x;
        a.y = ptrPoints[i].y - ptrPoints[0].y;
        
        b.x = ptrPoints[0].x - ptrPoints[i+1].x;
        b.y = ptrPoints[0].y - ptrPoints[i+1].y;
        
        sum += a.x * b.y - a.y * b.x;
        
    }
    return fabs(sum) / 2.0;
}

double Polygon::getPerimeter()
{
    Vector a;
    double sum = 0;
    
    for(unsigned int i = 0; i < size - 1; i++)
    {
        a.x = ptrPoints[i+1].x - ptrPoints[i].x;
        a.y = ptrPoints[i+1].y - ptrPoints[i].y;
        
        sum += sqrt(a.x * a.x + a.y * a.y);
        
    }
    
    a.x = ptrPoints[size].x - ptrPoints[0].x;
    a.y = ptrPoints[size].y - ptrPoints[0].y;
    
    sum += sqrt(a.x * a.x + a.y * a.y);
    
    return sum;
}

void Polygon::showFigureType()
{
    std::cout << "Полигон" << std::endl;
}
