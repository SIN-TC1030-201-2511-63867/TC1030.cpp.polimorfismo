#pragma once

#include "Shape.hpp"

class Circle:public Shape
{
private:
    int r;
    
    std::string getShapeType() override;
    double getArea() override;
public:
    Circle();
    Circle(int, int, int);
    
    int getRadio();
};
