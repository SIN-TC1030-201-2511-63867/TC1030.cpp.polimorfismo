#include "Rectangle.hpp"
#include "Shape.hpp"
#include "Circle.hpp"

#include <iostream>
#include <vector>

int main() 
{
  std::vector<Shape *> v;

  v.push_back(new Circle());
  v.push_back(new Rectangle());
  v.push_back(new Rectangle(1,2,5,6));
  v.push_back(new Circle(4,2,1));
  v.push_back(new Rectangle());

// Mostrar el tipo y area de cada figura  de forma polimorfica ----------

  for (auto i=0; i< v.size(); i++)
  {
    Shape* current = v[i];
    std::cout << current->draw();
  }

// Liberando la memoria asignada dinamicamente -------------------------

  for (auto i=0; i < v.size(); i++)
  {
    delete v[i];
  }
  
  return 0;
}
