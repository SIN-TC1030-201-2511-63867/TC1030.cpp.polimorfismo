#pragma once

#include "Shape.hpp"
class Rectangle : public Shape
{
private:
    int x;
    int y;
    int x1;
    int y1;

    std::string getShapeType() override;
    double getArea() override;

public:
    Rectangle();
    Rectangle(int, int, int, int);   
};
