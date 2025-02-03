#include "Circle.hpp"

Circle::Circle()
{
    r=0;
}

Circle::Circle(int valX, int valY, int valR) : Shape{valX, valY}
{
    r=valR;
}

int Circle::getRadio()
{
    return r;
}

std::string Circle::getShapeType()
{
    return "circulo";
}

double Circle::getArea()
{
    return 3.1416 * r * r;
}
