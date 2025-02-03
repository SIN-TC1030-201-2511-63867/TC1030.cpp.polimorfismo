#pragma once

#include <string>
class Shape
{
private:
    int x;
    int y;

    virtual std::string getShapeType() = 0;
    virtual double getArea() = 0;
public:
    Shape();
    Shape(int, int);
    virtual ~Shape();

    std::string draw();

    int getValueX();
    int getValueY();
};
