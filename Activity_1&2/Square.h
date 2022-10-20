#ifndef SQUARE_H
#define SQUARE_H

class Square{

public:
    Square(float side_length);
    float get_area();
    float get_perimeter();
private:
    float _side_length;

};


#endif