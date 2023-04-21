#ifndef _VECTOR_2D_
#define _VECTOR_22_

#include <iostream>
using namespace std;

class Vector2D
{
    private:
        int x; // x dimension
        int y; // y dimension

    public:
        Vector2D(int x, int y); //constructor
        inline int GetX() const {return (x);}; // getter of x
        inline int GetY() const {return (y);}; // getter of y
        inline void set_x_y(int xd, int yd); // setter of both dimensions
        int operator *(const Vector2D &other) const; // dot product operator
};


#endif