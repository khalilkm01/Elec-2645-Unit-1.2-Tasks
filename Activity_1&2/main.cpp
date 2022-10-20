//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "Circle.h"
#include "Square.h"

int main() {
  Circle circle(1.0);
  float area = circle.get_area();
  Square square(2.0);
  std::cout << "The circle has an area of " << area << " m^2.\n";
  std::cout << "The square has an area of " << square.get_area() << " m^2.\n";
  std::cout << "The square has an perimeter of " << square.get_perimeter() << " m.\n";
  return 0;
}