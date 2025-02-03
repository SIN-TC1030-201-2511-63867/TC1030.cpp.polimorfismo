#include <iostream>
#include "Shape.hpp"

Shape::Shape()
{
    x=0;
    y=0;
}

Shape::Shape(int valX, int valY)
{
    x=valX;
    y=valY;
}

Shape::~Shape()
{}

std::string Shape::draw()
{
    return "Soy una figura " + getShapeType() + " con un area de " + std::to_string(getArea()).substr(0,4) + " unidades cuadradas ...\n";
}

int Shape::getValueX()
{
    return x;
}

int Shape::getValueY()
{
    return y;
}