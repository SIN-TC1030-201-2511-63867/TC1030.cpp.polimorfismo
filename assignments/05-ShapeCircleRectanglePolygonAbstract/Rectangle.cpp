#include "Rectangle.hpp"

Rectangle::Rectangle() {
    x=0;
    y=0;
    x1=0;
    y1=0;
}

Rectangle::Rectangle(int valX, int valY, int valX1, int valY1) : Shape {valX, valY}
{
    x1 = valX1;
    y1 = valY1;
}

std::string Rectangle::getShapeType()
{
    return "rectangulo";
}

double Rectangle::getArea()
{
    return (x - x1) * (y - y1);
}
