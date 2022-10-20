#include "Square.h"

Square::Square(float side_length): _side_length(side_length) {}

float Square::get_area(){
    return _side_length * _side_length;
}

float Square::get_perimeter(){
    return _side_length * 4;
}